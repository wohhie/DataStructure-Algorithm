#include <stdio.h>

void reverse_string(char name[]){
    int i, j;
    char reverse_name[7];

    for(i = 0; name[i] != '\0'; i++){}
    i = i - 1;
    for(j = 0; j < i; i--, j++){
        reverse_name[j] = name[i];
    }

    printf("%s", reverse_name);
}

int main() {
    char A[] = "Python";
    reverse_string(A);

    return 0;
}