//we will solve the problem of sorting an array of 0's 1's and 2.
//the brute is ofc any of the sorting algp, the better is counting the number of 0's 1's and 2's and manually putting them in the array orderwise
//the optimal is dutch national flag algo using a low mid and high pointer as done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if (arr[mid]==0){
                int temp=arr[mid];
                arr[mid]=arr[low];
                arr[low]=temp;
                mid++; low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                int temp=arr[mid];
                arr[mid]=arr[high];
                arr[high]=temp;
                high--;
            }
    }
    return 0;
}