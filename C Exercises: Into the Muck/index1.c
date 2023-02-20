#include <stdio.h>
#include <stdlib.h>

#define SIZE (10)

int main (){
    int* a = (int*) malloc(SIZE * sizeof(int));
    int* b = &a[0];

    if (a == NULL){
        printf("No worky");
        return 1;
    }

    for (int i=0; i<SIZE; i++){
        a[i] = i;
    }

    b--;
    for (int i=1 ; i<SIZE+1; i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("b[%d] = %d", 0, b[0]);

    free(a);
    //free(b);

    return 0;
}