#include <bits/stdc++.h>
void print(int n,int i){
    if (i<1){ //this is base condition if its not there a stack overflow is caused
        return;
    }
    print(n,i-1);
    std::cout<<i<<'\n'; //in backtracking we write the print after fn call so the last value before return prints first.
}
int main(){
    int n;
    std::cin>>n;
    print(n,n);
}