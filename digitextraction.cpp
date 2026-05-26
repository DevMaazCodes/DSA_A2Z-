//this is the first concept of basic math where we extract the digit using %10 and /10
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    //we can extract the digits from last to first using below method
    while(n>0){
        std::cout<<n%10<<'\n';
        n/=10;
    } 


    return 0;
}