#include <stdio.h>
#include "Array/array.h"
#include <stdlib.h>
void addelemnt(int *,int);
void printelements(int *arr);

int main()
{
    int *arr;
    int *ptr;
    int num;
    printf("Enter the Number of Elements: ");
    scanf("%d",&num);
    arr = (int *)malloc(num*sizeof(int));
    addelemnt(arr,num);
    printelements(arr);
    return 0;
}

void addelemnt(int *arr,int num)
{
    int i = 0,temp;
    for(i = 0;i<num;i++) {
        printf("Element %d: ",i);
        scanf("%d",&temp);
        arr[i] = temp;
    }
}

void printelements(int *arr) {
    int i = 0;
    int n = 5;
    printf("[");
    for (i =0; i<n; i++) {
        printf("%d, ",arr[i]);
    }
    printf("]\n");

}
