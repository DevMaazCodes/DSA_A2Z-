//we will solve the problem of finding the missing number
//the brute approach is using nested loops and better is using hashing and iterating over the hash till n and find which element counts to zero
//the optimal approach is either the sum method or the xor method
#include<bits/stdc++.h>
int main(){
    //the sum way
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    /*int sum= (n*(n+1))/2; (the sum of n natural numbers formula)
    int s2=0;
    for (int i=0; i<n; i++){
        s2+=arr[i];
    }
    int missing= sum-s2;
    std::cout<<missing;*/
    //xor is a mathematical operation for now we only need to know x^x=0 and 0^x=x
    int xor1=0;
    int xor2=0;
    for(int i=0; i<n; i++){
        xor1= xor1^(i+1);
        xor2=xor2^arr[i];
    }
    int missing=xor1^xor2;
    std::cout<<missing;

    
   
    return 0;
}