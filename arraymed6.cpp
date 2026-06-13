//we will solve the problem of rearranging array by sign
//the brute is using 2 loops and the better and optimal is using a single pass and another answer array
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int ans[n];
    int Ipos=0;
    int Ineg=1;
    for(int i=0; i<n; i++){
        if (arr[i]<0){
            ans[Ineg]=arr[i];
            Ineg+=2;
        }
        else{
            ans[Ipos]=arr[i];
            Ipos+=2;
        }
    } 
    for(auto it:ans){
        std::cout<<it<<" ";
    }

}