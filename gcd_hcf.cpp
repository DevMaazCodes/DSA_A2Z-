#include <bits/stdc++.h>
void print(int n1, int n2){
    int gcd;
     for(int i = std::min(n1,n2); i>=1; i--)
     {
        if(n1%i==0 && n2%i==0){
           gcd=i;
           break;
        }
     }
   std::cout<<"GCD is "<<gcd;
}
int main(){
    int n1;
    int n2;
    std::cin>>n1;
    std::cin>>n2;
    print (n1, n2);
}