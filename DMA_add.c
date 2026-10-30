#include <stdio.h>
#include <stdlib.h>
int main() {

    int *a, *b, *sum;  //*a= value stored at the address in p

    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    sum=(int*)malloc(sizeof(int));

    printf("Enter 2 numbers a and b:");
    scanf("%d %d", a,b);  //a, b is the adress stored of pointers

    *sum= *a + *b;
    printf("Sum: %d \n" ,*sum);
    
    free(a);
    free(b);
    free(sum);
    return 0;
}