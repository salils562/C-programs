#include<stdio.h>
int Largest(int *ptr,int size){
     int small=0;
     for(int i=0;i<size;i++){
        if(small<ptr[i]){
         small=ptr[i];
        }
    }
    return small;
}
int secondLargest(int *ptr,int size,int large){
    int second=0;
    for(int i=0;i<size;i++){
        if(second<ptr[i] && ptr[i]!=large){
         second=ptr[i];
        }
    }
    return second;
}
int main(){
    int arr[]={1,2,3,4,6,5};
    int n=sizeof(arr)/sizeof(int);
    int largest=Largest(arr,n);
    int secondlargest=secondLargest(arr,n,largest);
    printf("largest element is %d\n",largest);
    printf("second largest element is %d",secondlargest);
    return 0;
}