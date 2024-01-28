#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#define N 5
#define thinking 2
#define eating 0
#define hungry 1
#define left (philnum + 4) % N
#define right (philnum + 1) % N
int state[5];
int philos[N] = {0, 1, 2, 3, 4};
sem_t mutex;
sem_t S[N];
void check(int philnum)
{
    if (state[philnum] == hungry && state[left] != eating && state[right] != eating)
    {
        state[philnum] = eating;
        sleep(2);
        printf("philospher no %d takes fork no %d and fork no %d \n", philnum + 1, left + 1, right + 1);
        printf("Philospher no %d is eating \n", philnum + 1);
        sem_post(&S[philnum]);
    }
    else
    {
        return;
    }
}
void take_fork(int philnum)
{
    sem_wait(&mutex);
    state[philnum] = hungry;
    check(philnum);
    sem_post(&mutex);
    sem_wait(&S[philnum]);
    sleep(1);
}
void put_fork(int philnum)
{
    sem_wait(&mutex);
    state[philnum] = thinking;
    printf("philospher no %d puts fork no %d and fork no %d \n", philnum + 1, left + 1, right + 1);
    printf("Philospher no %d is thinking \n", philnum + 1);
    check(left);
    check(right);
    sem_post(&mutex);
}
void *philospher(void *num)
{
    while (1)
    {
        int *i = num;
        sleep(1);
        take_fork(*i);
        sleep(0);
        put_fork(*i);
    }
}
int main()
{
    printf("Running");
    int i;
    pthread_t thread[N];
    sem_init(&mutex, 0, 1);
    for (int i = 0; i < 5; i++)
    {
        sem_init(&S[i], 0, 0);
    }
    for (i = 0; i < 5; i++)
    {
        pthread_create(&thread[i], NULL, philospher, &philos[i]);
    }
    for (i = 0; i < 5; i++)
    {
        pthread_join(thread[i], NULL);
    }
}