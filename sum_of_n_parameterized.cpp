//Parameterized recursion is a type of recursion where we pass additional parameters to the recursive function to keep track of results or states,
// instead of relying solely on return values. Right now we will pass result in argument
#include <bits/stdc++.h>
void sum(int i,int add){
    if(i<1){
        std::cout<<add;
        return;
    }
    sum(i-1, add+i); //we carried the sum in paramterized way
}
int main(){
    int n;
    std::cin>>n;
    sum(n, 0);
    return 0;
}