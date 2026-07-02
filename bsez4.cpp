//we will solve the quesstion of search insert position which is same as finding lower bound using bs
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
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else {low=mid+1;}
    }
    std::cout<<ans;
    return 0;
}