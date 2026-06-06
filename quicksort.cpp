//Quick Sort is all about picking a Pivot element and putting it in its exact correct sorted position. (Pivot can be any element inside the array)
// Once that pivot is locked in, everything smaller goes to its left, and everything bigger goes to its right.  In short it also uses divide and conquer method.
#include<bits/stdc++.h>
int parti(int arr[], int low, int high){
     int i=low;
     int j=high;
     while(i<j){
        while((arr[i]<=arr[low]) && i<high){
          i++;
        }
        while((arr[j]>arr[low])&&j>low){
        j--;
        }
        if(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
     }
    }
    int tem=arr[j];
    arr[j]=arr[low];
    arr[low]=tem;
    return j;
}
void quicksort(int arr[], int low, int high){
    if (high<=low){
     return;
    } 
    int pIndex= parti(arr,low,high);
    quicksort(arr,low,pIndex-1);
    quicksort(arr,pIndex+1,high);
}
int main(){
    int arr[]={1,2,4,8,3,5,9,0,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1;
    int low=0;
    quicksort(arr, low, high);
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
//since we are using divide and conquer the TC will be N*logN on average because O(N) is the TC of partition function and we dividing in qs function so
//division means log N will be TC for qs function totalling to O(N*log N).