//we will use recursion to implement bubble sort
#include <bits/stdc++.h>
void bubble_sort(int arr[], int n){
       bool swap=false;
       for (int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                int temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap=true;
            }
       }
       if(!swap || n<=1){
        return;
       }
       bubble_sort(arr, n-1);
}
int main(){
    int arr[]={1,4,3,6,5,7,8,9,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for(auto it: arr){
        std::cout<<it<<" ";
    }
    return 0;
}
