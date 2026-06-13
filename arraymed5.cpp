// we will solve the problem of best time to buy and sell stocks
//the brute is just a nested loop, and the optimal is having track of profit like done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int profit=0;
    int lowest=INT_MAX;
    for(int i=0; i<n; i++){
        if (arr[i]<lowest){
            lowest=arr[i];
        }
        int cp=arr[i]-lowest;
        if(profit<cp){
            profit=cp;
        }
    }
    std::cout<<profit;

}