//euclidean algorithm is for gcd we can do the below code to find gcd instead of our usual check through all. The TC becomes log base phi min(a,b).
#include <bits/stdc++.h>
void print(int n1, int n2){
    while(n1>0 && n2>0){
        if (n1>n2){
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
       
    }
     if(n1==0){
            std::cout<<"GCD is "<<n2;
        }
        else if (n2==0){
             std::cout<<"GCD is "<<n1;
        }
}
int main(){
    int n1;
    int n2;
    std::cin>>n1;
    std::cin>>n2;
    print (n1, n2);

}