//we will solve the problem of finding no. of subarray with XOR k
//the brute is simply checking all the subarrays and their respective XOR using triple nested 
//the better is using only 2 loops nested eliminating brute n^3 to better n^2 TC.
//the optimal is having a preXOR hashmap as done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int k; 
    std::cin>>k;
    int cnt=0;
    int fxor=0;
    std::unordered_map<int,int>mpp;
    mpp[fxor]++;
    for(int i=0; i<n; i++){
        fxor=fxor^arr[i];
        int x=fxor^k;
        cnt+=mpp[x];
        mpp[fxor]++;
    }
    std::cout<<cnt;
    return 0;
}
 