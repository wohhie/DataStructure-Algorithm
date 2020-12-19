#include <stdio.h>

// changing from upper case to lower case
void changing_upper_to_lower(char A[]){
    int i;
    for(i = 0; A[i] != '\0'; i++){
        A[i] += 32;
    }

    printf("%s", A);
}


// changing any uppercase to lowercase
void any_upercase_to_lowercase(char A[]){
    int i;
    for(i = 0; i < A[i]; i++){
        if(A[i] >= 65 && A[i] << 91){
            A[i] += 32;
        }else if(A[i] >= 'a' && A[i] <= 'z'){
            A[i] -=32;
        }
    }

    printf("%s", A);
}


int main() {
    char A[] = "WeLComE";
    // changing_upper_to_lower(A);
    return 0;
} 