// producer consumer
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 5

sem_t empty, full, mutex;
int buffer[BUFFER_SIZE];
int in = 0, out = 0;

void produce(int item)
{
    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
}

int consume()
{
    int item = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    return item;
}

void *producer_function(void *arg)
{
    int item = 1;
    while (1)
    {
        sem_wait(&empty);
        sem_wait(&mutex);

        // Produce item
        produce(item++);
        printf("Produced item %d\n", item - 1);

        sem_post(&mutex);
        sem_post(&full);
    }
}

void *consumer_function(void *arg)
{
    while (1)
    {
        sem_wait(&full);
        sem_wait(&mutex);

        // Consume item
        int item = consume();
        printf("Consumed item %d\n", item);

        sem_post(&mutex);
        sem_post(&empty);
    }
}

int main()
{
    pthread_t producer_thread, consumer_thread;

    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    sem_init(&mutex, 0, 1);

    pthread_create(&producer_thread, NULL, producer_function, NULL);
    pthread_create(&consumer_thread, NULL, consumer_function, NULL);

    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    return 0;
}
