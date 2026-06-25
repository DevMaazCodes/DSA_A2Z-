//we will solve the find missing and repeating number problem 
//the brute is simple nested loops while better is hashing and the best is using the sum method and forming two equations as done below 
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    long long sum1=0;
    long long sum2=0;
    long long sq1=0;
    long long sq2=0;
    for(int i=0; i<n; i++){
        sum1+=arr[i];
        sum2=sum2+(i+1);
        sq1=sq1+((arr[i])*(arr[i]));
        sq2=sq2+((i+1)*(i+1));
    }
    long long val1=sum1-sum2;
    long long val2=sq1-sq2;
    val2=val2/val1;
    long long rep=(val1+val2)/2;
    long long miss=rep-val1;
    std::cout<<miss<<" "<<rep;
    return 0;
}