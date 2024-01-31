#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>
int mutex = 1;
int full = 0;
int empty = 5;
int x = 0;
void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("Producer Produced %d \n", x);
    ++mutex;
}

void consumer()
{
    --mutex;
    --full;
    ++empty;
    printf("Consumer Consumed %d \n", x);
    x--;
    ++mutex;
}

int main()
{
    int n, i;

    for (int i = 1; i > 0; i++)
    {
        printf("\n1. Press 1 for Producer"
               "\n2. Press 2 for Consumer"
               "\n3. Press 3 for Exit");
        scanf("%d", &n);
        if (n == 1)
        {
            if ((empty != 0) && mutex == 1)
            {
                producer();
            }
            else
            {
                printf("Buffer is full consume first \n");
            }
        }
        else if (n == 2)
        {
            if ((full != 0) && mutex == 1)
            {
                consumer();
            }
            else
            {
                printf("Buffer is empty write something first\n");
            }
        }
        else if (n == 3)
        {
            break;
        }
    }
}