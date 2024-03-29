#pragma warning (disable:4996)
#pragma warning (disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_QUEUE_SIZE 5
typedef struct{
    int id;
    int arrival_time;
    int service_time;
} element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void error(char *message) {
    fprintf(stderr, "%s\n" , message);
    exit(1);
}

void init_queue(QueueType *q) {
    q->front = q->rear = 0;
}

int is_empty (QueueType *q) {
    return (q->front == q->rear);
}

int is_full (QueueType *q) {
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void queue_print(QueueType *q) {
    printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%d | ", q->data[i]);
            if (i == q->rear)
                break;
            } while (i != q->front);         
        }
    printf("\n"); 
}

void enqueue(QueueType *q, element item) {
    if (is_full(q))
        error("Queue is full!");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element dequeue(QueueType *q) {
    if (is_empty(q))
        error("Queue is empty!");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

element peek(QueueType *q) {
    if (is_empty(q))
        error("Queue is empty!");
    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

int main() {
    int minutes = 60;
    int total_wait = 0;
    int total_customers = 0;
    int service_time = 0;
    int service_customer;
    QueueType queue;
    init_queue(&queue);
    
    srand(time(NULL));
    for (int clock = 0; clock < minutes; clock++) {
        printf("Current time: %d\n", clock);
        if ((rand() % 10) < 3) {
            element customer;
            customer.id = total_customers++;
            customer.arrival_time = clock;
            customer.service_time = rand() % 3 + 1;
            enqueue(&queue, customer);
            printf("Cusomer %d come at %d minute. Service taking time: %dminute.\n",
                customer.id, customer.arrival_time, customer.service_time);                      
        }
        if (service_time > 0) {
            printf("Customer %d is taking service.\n", service_customer);
            service_time--;                
        }
        else {
            if (!is_empty(&queue)) {
                element customer = dequeue(&queue);
                service_customer = customer.id;
                service_time = customer.service_time;
                printf("Customer %d starts service at %d minute. Waiting time was %d minute.\n",
                    customer.id, clock, clock - customer.arrival_time);
                total_wait += clock - customer.arrival_time;               
            }
        }    
    }
    printf("Total waiting time: %dminute.\n", total_wait);
    return 0;
}

