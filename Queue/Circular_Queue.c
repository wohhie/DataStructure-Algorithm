#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (int *) malloc(q->size * sizeof(int));
}

// 2 3 __ 4 5 6
//   R    f
void enqueue(struct Queue *q, int data){
    // check if the queue is full or not
    if((q->rear+1)%q->size == q->front){
        printf("Queue is full!\n");
    }else{
        q->rear = (q->rear+1) % q->size;
        q->Q[q->rear] = data;
    }
}


int dequeue(struct Queue *q){
    /// check if the queue is empty or not
    int x = -1;
    if(q->front == q->rear){
        printf("Queue is empty!\n");
    }else{
        q->front = (q->front+1)%q->size;
        printf("%d\n",q->front);
        x = q->Q[q->front];
    }

}


void display(struct Queue q){
    int i = q.front+1;
    do {
        printf("%d ", q.Q[i]);
        i = (i+1) % q.size;
    }while(i != (q.rear+1) % q.size);

    printf("\n");
}



int main(){
    struct Queue q;
    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);

    display(q);

    dequeue(&q);
    display(q);


    return 0;
}
