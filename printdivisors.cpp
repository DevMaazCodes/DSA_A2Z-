#include <bits/stdc++.h>
void print(int n){
    for(int i=1; i<=n; i++ ){
        if(n%i==0){
            std::cout<<i<<" ";
        }

    }
}
int main(){
    int n;
    std::cin>>n;
    print (n);
}