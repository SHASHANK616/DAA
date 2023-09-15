#include<stdio.h>
void display(int *A, int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
     printf("\n");
}

void InsertionSort(int *A, int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
           
    }
        for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
   
}

int main(){
    int A[]={9,6,2,7,2,8};
    int n=6;
    printf("Before sorting:");
    display(A,n);
    printf("After sorting:");
    InsertionSort(A,n);
}