#include <bits/stdc++.h>
int f(int n){
     if (n==1){
        return 1;
     }
     return n*f(n-1); //this is functional recursion, we break the problem by -1 until it becomes 1;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<f(n);
    return 0;
}