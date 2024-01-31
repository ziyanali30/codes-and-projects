
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM_READERS 3
#define NUM_WRITERS 2

pthread_mutex_t mutex;
sem_t writeBlock, readBlock;
int data = 0, readersCount = 0;

void *reader(void *arg)
{
    while (1)
    {
        sem_wait(&readBlock);
        pthread_mutex_lock(&mutex);
        readersCount++;
        if (readersCount == 1)
        {
            sem_wait(&writeBlock);
        }
        pthread_mutex_unlock(&mutex);
        sem_post(&readBlock);

        printf("Reader %d reads data: %d\n", *((int *)arg), data);

        sem_wait(&readBlock);
        pthread_mutex_lock(&mutex);
        readersCount--;
        if (readersCount == 0)
        {
            sem_post(&writeBlock);
        }
        pthread_mutex_unlock(&mutex);
        sem_post(&readBlock);

        sleep(1);
    }
}

void *writer(void *arg)
{
    while (1)
    {
        sem_wait(&writeBlock);

        data++;
        printf("Writer %d writes data: %d\n", *((int *)arg), data);

        sem_post(&writeBlock);

        sleep(2);
    }
}

int main()
{
    pthread_t readers[NUM_READERS], writers[NUM_WRITERS];
    int readerIds[NUM_READERS], writerIds[NUM_WRITERS];

    pthread_mutex_init(&mutex, NULL);
    sem_init(&writeBlock, 0, 1);
    sem_init(&readBlock, 0, 1);

    for (int i = 0; i < NUM_READERS; i++)
    {
        readerIds[i] = i + 1;
        pthread_create(&readers[i], NULL, reader, &readerIds[i]);
    }

    for (int i = 0; i < NUM_WRITERS; i++)
    {
        writerIds[i] = i + 1;
        pthread_create(&writers[i], NULL, writer, &writerIds[i]);
    }

    for (int i = 0; i < NUM_READERS; i++)
    {
        pthread_join(readers[i], NULL);
    }

    for (int i = 0; i < NUM_WRITERS; i++)
    {
        pthread_join(writers[i], NULL);
    }
}