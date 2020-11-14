#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *q, i;

    // initialize the dynamic array
    p = malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // increasing the size of the dynamic array
    q = (int *) malloc(5 * sizeof(int));

    // copy the data from p to q
    for(i = 0; i < 5; i++)
        q[i] = p[i];

    free(p);
    p = q;
    q = NULL;


    for(i = 0; i < 5; i++)
        printf("%d ", p[i]);

    return 0;
}
