//we will use recursion to implement insertion sort.
#include <bits/stdc++.h>
void insertion_sort(int arr[], int n, int i){
    if(i==n){
        return;
    }
    int j=i;
    while(j>0&&arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    insertion_sort(arr, n, i+1);
}
int main(){
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    insertion_sort(arr, n, i);
    for(int k=0; k<n; k++){
        std::cout<<arr[k]<<" ";
    }
    return 0;
}