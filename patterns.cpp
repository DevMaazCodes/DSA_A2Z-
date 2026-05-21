//we will make patterns using nested loops for logic building and problem solving.
#include <iostream>
void p1(){
    for (int i=0;  i<=5; i++){
        for (int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<'\n';
    }
}
void p2(){
    for (int i=0;  i<=5; i++){
        for (int j=1; j<=i; j++){
            std::cout<<i;
        }
        std::cout<<'\n';
    }
}
void p3(){
    for (int i=0;  i<5; i++){
        for (int j=5; j>i; j--){
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
}
void p4(){
    for (int i=5;  i>0; i--){
        for (int j=1; j<=i; j++){
            std::cout<<j;
        }
        std::cout<<'\n';
    }
}
void p5(){
    for (int i=0;  i<5; i++){
        for (int x=0; x<5-i; x++){
            std::cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            std::cout<<'*';
        }
        for (int x=0; x<5-i; x++){
            std::cout<<" ";
        }
        std::cout<<'\n';
        
    }
}
void p6(){
    for (int i=5;  i>=0; i--){
        for (int x=0; x<5-i; x++){
            std::cout<<" ";
        }
        for (int j=0; j<2*i+1; j++){
            std::cout<<'*';
        }
        for (int x=0; x<5-i; x++){
            std::cout<<" ";
        }
        std::cout<<'\n';
        
    }
}
void p7(int n){
    for (int i=0;  i<2*n-1; i++){
        if(i<n){
        for (int j=0; j<=i; j++){
            std::cout<<'*';
        }
    }   
       else{
        for (int x=0; x<2*n-i-1; x++){
            std::cout<<'*';
        }
       }
        std::cout<<'\n';
    
    }
}
int main(){
    int t;
    std::cin>>t;
    for (int i=0; i<t; i++){
    int n;
    std::cin>>n;
    p7(n);
}
    return 0;
}