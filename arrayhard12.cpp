//we will solve the problem of maximum product of a subarray, the brute is using triple nested loops and the better is using double nested loops
//the optimal is using prefix and suffix method derived by observations of negative and positive numbers as done below, also we have cases to handle zeroes
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int max=INT_MIN;
    int pf=1;
    int sf=1;
    for(int i=0; i<n; i++){
        if(pf==0)pf=1;
        if(sf==0)sf=1;
        pf*=arr[i];
        sf*=arr[n-i-1];
        max=std::max(max,std::max(pf,sf));
    }
    std::cout<<max;
    return 0;
}