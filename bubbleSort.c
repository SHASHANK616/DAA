#include<stdio.h>
void printArray(int* A, int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");

}
void bubbleSort(int *A,int n){
    int temp;
    for (int i=0;i<n-1;i++){             //for loop for passes
        for(int j=0;j<n-1-i;j++){       //for loop for comparision
            if(A[j]>A[j+1]){
            temp=A[j];                  //Swaping Algorithm
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
        for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }

}

int main(){
    int A[]={12,54,65,23,45,7};
    int n=6;
    printf("Before Sorting:");
    printArray(A,n);
    printf("After Sorting:");
    bubbleSort(A,n);

    return 0;
}