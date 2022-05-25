#include <stdio.h>


int isSorted(int f[], int size);

#define SIZE 10

int main() {
    int a[SIZE]={3,5,1,2,4,5,6,6,8,3};
    int sorted = 0;

    sorted = isSorted(a, SIZE);

    if (sorted == 1){
        printf("sorted");
    }
    else if (sorted == 0){
        printf("not sorted");
    }
}

int isSorted(int f[], int size){
    int i, sorted = 0;
    for (i=1; i<size-1; i++){  
        if (f[i]<f[i+1]){
            sorted = 1;
            return 1;
        }
        else if (f[i]>f[i+1]){
            sorted = 0;
            return 0;
            break;
        
        printf("%d\n", sorted);
        }
    }
}