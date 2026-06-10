//we will solve the problem of longest subarray (continous part of array) with sum k (positive k only).(The array contains only positives)
//the brute is using a nested loop and keep a length variable and find the sum of all the subarrays and when sum==k we replace length with current subarray length
//the better is using hashing like done for q13 and the optimal is using 2 pointer as below
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
    int sum=arr[0];
    int length=0;
    int i=0;
    int j=0;
    while(j<n){
        while(i<=j&&sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            length= std::max(length, j-i+1);
        }
        j++;
        if(j<n){
            sum+=arr[j];
        }


    }
    std::cout<<length;
    
    return 0;
}