#include <stdio.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;


void create(int A[], int n){
    struct Node *temp, *last;
    int i;
    // creating the first node;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    // 10 -> null

    for(i = 1; i < n; i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->prev = last;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *p){
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


int length(struct Node *p){
    int length = 0;
    while(p != NULL){
        length++;
        p = p->next;
    }
    return length;
}


int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    printf("\nLength is :%d\n", length(first));
    display(first);
    return 0;
}
