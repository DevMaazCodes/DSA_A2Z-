//we will solve Search in rotated sorted array-I, the brute is simple for loop but we will use bs and logic to solve
//the logic is simple we check which half is sorted and then check whether our k(target) lies in the sorted array and accordingly move high and low
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
        if(arr[low]<=arr[mid]){  //checking if left is sorted
            if(arr[low]<=k&&arr[mid]>=k){ //checking whether k(target) lies in the sorted array
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{ //since left isn't sorted right must be
            if(arr[mid]<=k&&arr[high]>=k){ //checking if it exists in sorted array
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