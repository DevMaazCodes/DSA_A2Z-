//we will solve the quesstion of finding floor and ceil which is similar as finding bounds using bs
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
    std::vector<int>ans(2,-1);
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=k){
            ans[1]=arr[mid];
            high=mid-1;
        }
        else {low=mid+1;}
    }
    low=0; high=n-1;
    while(low<=high){ //to find ceil
        int mid=low+(high-low)/2;
        if(arr[mid]<=k){
            ans[0]=arr[mid];
            low=mid+1;
        }
        else {high=mid-1;}
    }
    std::cout<<ans[0]<<" "<<ans[1];
    return 0;
}