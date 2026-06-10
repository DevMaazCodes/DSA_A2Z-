//we will solve the problem of finding the number that appear once while others appear twice
//the brute  is using nested loops having a count number and when count is 1 we return that element, the TC will be n^2.
//the better is using hashing and the optimal is using xor method as below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int xor1=0;
    for(int i=0; i<n; i++){
        xor1= arr[i]^xor1;
    }
    std::cout<<xor1;
    return 0;
}
//the TC of xor method is simply O(n) and space comp is O(1)