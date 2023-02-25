#include <stdio.h>

 int main() {
    int temp[5];
    int arr[5]={ 3,1,5,3,4};
   // int left=0;
  //int right =4;
    msort(arr,temp,0,4);

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}

 void msort(int arr[],int temp[],int left,int right){
    if(left<right){
        int mid =(left+right)/2;
        msort(arr,temp,left,mid);
        msort(arr,temp,mid+1,right);
        mergesort(arr,temp,left,mid+1,right);
          }
}

 void mergesort(int arr[],int temp[],int left,int mid,int right){
     int leftend = mid-1,tmpPos= left;
     int element = right-left + 1;

     while(left <= leftend && mid<= right){

         if(arr[left] <= arr[mid]){
             temp[tmpPos++]=arr[left++];
         }else temp[tmpPos++]=arr[mid++];


     }
    while(left <= leftend){
      temp[tmpPos++]=arr[left++];
    }
    while(mid <= right){
        temp[tmpPos++]=arr[mid++];
    }

    for(int k=0;k<element;k++){
        arr[right]=temp[right];
        right--;
    }


 }


