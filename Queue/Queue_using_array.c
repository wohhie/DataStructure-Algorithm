#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};


void enqueue(struct Queue *q, int x){
    // if Q is full
    if(q->rear == q->size - 1) {
        printf("Queue is full.");
    }else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if (q->front == q->rear){
        printf("Queue is empty.");
    }else{
        q->front++;
        x = q->Q[q->front];
        return x;
    }

    return x;
}

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *) malloc(q->size * sizeof(int));
}


void display(struct Queue q){
    int i;
    for(i = q.front+1; i<= q.rear; i++){
        printf("%d ", q.Q[i]);
    }
}


int main() {
    struct Queue q;
    // create queue
    create(&q, 5);
    // Q   -1 [2, 3, 4, 6, 7]
    // fr, re
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);


    display(q);

    return 0;
}
