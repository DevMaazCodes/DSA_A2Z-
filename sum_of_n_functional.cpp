//Functional recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller subproblems of the same type.
//This is useful when we have to return to main.
//we will do for sum of n using function.
#include <bits/stdc++.h>
int sum(int n){
     if (n==0){
        return 0;
     }
     return n+sum(n-1); //this is functional recursion, we break the problem by -1 until it becomes 0;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<sum(n);
    return 0;
}