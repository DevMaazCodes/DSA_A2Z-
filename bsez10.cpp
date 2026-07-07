//we will solve the problem of minimum in rotated sorted array, the brute is O(N) solution
//we will use th same concept we used for search in rotated soretd array and keep updating our ans with the samllest between ans and first element of sorted half
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){  //checking if left is sorted
           ans=std::min(ans,arr[low]);
           low=mid+1;
        }
        else{ //since left isn't sorted right must be
           ans=std::min(ans,arr[mid]);
           high=mid-1;
        }
    }
    std::cout<<ans;
    return 0;
}