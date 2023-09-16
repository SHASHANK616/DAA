#include<stdio.h>
int BinarySearch(int arr[],int data,int size){
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==data){
            return mid;
        }
        else if(arr[mid]<data){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int data=11;
    int searchIndex=BinarySearch(arr,data,size);
    printf("The element %d was found at %d index",data,searchIndex);

return 0;
}
