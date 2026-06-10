//we will solve the problem of longest subarray (continous part of array) with sum k.
//the brute is using a nested loop and keep a length variable and find the sum of all the subarrays and when sum==k we replace length with current subarray length
//the better/optimal is using hashing as subarray can contain negative values in this case
#include<bits/stdc++.h>
int main(){
    //the sum way
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    std::map<int, int>presum;
    int sum=0;
    int length=0;
    
    for(int i=0; i<n; i++){
        int rem=0;
        sum+=arr[i]; 
        if(sum==k){
            length=i+1;
        }
        rem=sum-k;
        if(presum.find(rem)!= presum.end()){
            int cl= i-presum[rem];
            length=std::max(length, cl);
        }
        if(presum.find(sum)==presum.end()){
            presum[sum]=i;
        }
    }
    std::cout<<length;
    return 0;
}