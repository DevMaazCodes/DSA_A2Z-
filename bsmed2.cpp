//we will now find the nth square root of a number m, the brute is using a for loop but we will use BS to optimise it
#include <bits/stdc++.h>
 int f(int mid,int N,int M){
    long long calc=1;
    for(int i=1; i<=N; i++){
        calc*=mid;
        if (calc>M) return 1;
    }
    if(calc<M)return 2;
    return 0;
 }
 int main(){
    int M;
    std::cin>>M;
    int N;
    std::cin>>N;
    int low=1;
    int ans=-1;
    int high=M;
    while(low<=high){
        int mid=low+(high-low)/2;
        int midN=f(mid,N,M);
        if(midN==0){
            ans=mid;
            break;
        }
        else if(midN==1) high=mid-1;
        else low=mid+1;
    }
    std::cout<<ans;
    return 0;
 }