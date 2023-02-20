#include <stdio.h>
#include <stdlib.h>

#define SIZE (10)

int main (){
    int a[SIZE];

    if (a == NULL){
        printf("No worky");
        return 1;
    }

    for (int i=0; i<SIZE; i++){
        a[i] = i;
    }

    for (int i=0 ; i<SIZE; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    free(a);

    return 0;
}