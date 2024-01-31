#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct PrintJob
{
    int jobId;
    char *documentName;
    struct PrintJob *next;
} PrintJob;

typedef struct PrinterSpooler
{
    PrintJob *front;
    PrintJob *rear;
    pthread_mutex_t mutex;
    pthread_cond_t condition;
} PrinterSpooler;

void initializeSpooler(PrinterSpooler *spooler)
{
    spooler->front = spooler->rear = NULL;
    pthread_mutex_init(&spooler->mutex, NULL);
    pthread_cond_init(&spooler->condition, NULL);
}

void enqueue(PrinterSpooler *spooler, int jobId, char *documentName)
{
    PrintJob *newJob = (PrintJob *)malloc(sizeof(PrintJob));
    newJob->jobId = jobId;
    newJob->documentName = documentName;
    newJob->next = NULL;

    pthread_mutex_lock(&spooler->mutex);
    if (spooler->rear == NULL)
    {
        spooler->front = spooler->rear = newJob;
    }
    else
    {
        spooler->rear->next = newJob;
        spooler->rear = newJob;
    }
    pthread_cond_signal(&spooler->condition);
    pthread_mutex_unlock(&spooler->mutex);
}

void *processPrintJobs(void *arg)
{
    PrinterSpooler *spooler = (PrinterSpooler *)arg;
    while (1)
    {
        pthread_mutex_lock(&spooler->mutex);
        while (spooler->front == NULL)
        {
            pthread_cond_wait(&spooler->condition, &spooler->mutex);
        }
        PrintJob *currentJob = spooler->front;
        printf("Printing Job ID: %d, Document: %s\n", currentJob->jobId, currentJob->documentName);
        spooler->front = spooler->front->next;
        if (spooler->front == NULL)
        {
            spooler->rear = NULL;
        }
        free(currentJob);
        pthread_mutex_unlock(&spooler->mutex);
    }
    pthread_exit(NULL);
}

int main()
{
    PrinterSpooler spooler;
    initializeSpooler(&spooler);
    pthread_t printer_thread;

    if (pthread_create(&printer_thread, NULL, processPrintJobs, (void *)&spooler) != 0)
    {
        fprintf(stderr, "Error creating printer thread\n");
        return 1;
    }

    enqueue(&spooler, 1, "Document1.txt");
    enqueue(&spooler, 2, "Document2.txt");
    enqueue(&spooler, 3, "Document3.txt");

    pthread_join(printer_thread, NULL);

    pthread_mutex_destroy(&spooler.mutex);
    pthread_cond_destroy(&spooler.condition);

    return 0;
}
