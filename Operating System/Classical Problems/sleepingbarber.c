// sleeping barber
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define CHAIRS 5

sem_t customers;
sem_t barber;
sem_t mutex;

int available_chairs = CHAIRS;

void *barber_function(void *arg)
{
    while (1)
    {
        sem_wait(&customers);
        sem_wait(&mutex);

        available_chairs++;

        sem_post(&barber);
        sem_post(&mutex);

        // Barber cutting hair
        printf("Barber is cutting hair\n");
    }
}

void *customer_function(void *arg)
{
    sem_wait(&mutex);

    if (available_chairs > 0)
    {
        available_chairs--;

        sem_post(&customers);
        sem_post(&mutex);

        sem_wait(&barber); // wait for the barber to finish cutting hair

        // Customer getting a haircut
        printf("Customer is getting a haircut\n");
    }
    else
    {
        sem_post(&mutex);
        // Customer leaves since there are no available chairs
        printf("Customer leaves - no available chairs\n");
    }
}

int main()
{
    pthread_t barber_thread, customer_threads[CHAIRS];

    sem_init(&customers, 0, 0);
    sem_init(&barber, 0, 0);
    sem_init(&mutex, 0, 1);

    pthread_create(&barber_thread, NULL, barber_function, NULL);

    for (int i = 0; i < CHAIRS; i++)
    {
        pthread_create(&customer_threads[i], NULL, customer_function, NULL);
    }

    pthread_join(barber_thread, NULL);

    return 0;
}
