//we will solve Search in rotated sorted array-I, the brute is simple for loop but we will use bs and logic to solve
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    int low=0;
    int high=n-1;
    int ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k) {
            ans=mid;
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k&&arr[mid]>=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k&&arr[high]>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    std::cout<<ans;
    return 0;
}