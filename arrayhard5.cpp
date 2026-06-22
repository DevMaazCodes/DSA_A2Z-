//we will solve the longest subarray having sum 0 question by using optimal presum hashmap method
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int sum=0;
    int length=0;
    std::unordered_map<int, int>mpp;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0){
            length=i+1;
        }
        if(mpp.find(sum)!=mpp.end()){
            int cl= i-mpp[sum];
            length=std::max(cl,length);
           }
           else{
           mpp[sum]=i;
           }
        }
    std::cout<<length;
    return 0;
}