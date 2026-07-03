//we will count occurances in a sorted array using first and last occurances method
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
        if(arr[mid]==k)ans[0]=mid;
            high=mid-1;
        }
        else {low=mid+1;}
    }
    if(ans[0]==-1) std::cout<<0;
    else{
      low=0; high=n-1;
      while(low<=high){ //to find ceil
        int mid=low+(high-low)/2;
        if(arr[mid]<=k){
        if(arr[mid]==k)ans[1]=mid;
            low=mid+1;
        }
        else {high=mid-1;}
    }
    std::cout<<ans[1]-ans[0]+1;
    }
    
    return 0;
}
