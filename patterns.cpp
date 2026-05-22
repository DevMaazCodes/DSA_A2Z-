//we will make patterns using nested loops for logic building and problem solving.
#include <iostream>
#include <cmath>
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
void p8(int n){
    int start=1;
    for (int i=0;  i<n; i++){
        if (i%2==0){start=1;}
        else {start=0;}
        for (int j=0; j<=i; j++){
            std::cout<<start;
            start= 1-start;
        }
        std::cout<<'\n';
    }
}
void p9(int n){
    int space= 2*(n-1);
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            std::cout<<j+1;
        }
        for (int x=0; x<space; x++){
            std::cout<<" ";
        }
        for (int y=0; y<=i; y++){
            std::cout<<i+1-y;
        }
        std::cout<<'\n';
        space-=2;
    }
    
}
void p10(int n){
    int num=1;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
        std::cout<<num;
        num++;
    }
    std::cout<<'\n';
}
}
void p11(int n){
    for (int i=0; i<n; i++){
    for (char alpha='A'; alpha<='A'+i; alpha++){
        std::cout<<alpha;
    }
    std::cout<<'\n';
}
}
void p12(int n){
    for (int i=0; i<n; i++){
    for (char alpha='A'; alpha<n-i+'A'; alpha++){
        std::cout<<alpha;
    }
    std::cout<<'\n';
}
}
void p13(int n){
    char ch='A';
    for (int i=0; i<n; i++){
    for (int j=0; j<=i; j++){
        std::cout<<ch;
    }
    ch++;
    std::cout<<'\n';
}
}
void p14(int n){
    for (int i=0; i<n; i++){
    for (int s=0; s<n-i-1; s++){
        std::cout<<" ";
    }
    char ch= 'A';
    int breakpoint= (2*i+1)/2;
    for (int j=0; j<2*i+1; j++){
        std::cout<<ch;
        if (j<=breakpoint) ch++;
        else ch--;
    }
     for (int s=0; s<n-i-1; s++){
        std::cout<<" ";
    }
    std::cout<<'\n';
}
}
void p15(int n){
    for (int i=0; i<n; i++){
        char ch= 'A'+n-1;
        for (int j=i; j>=0; j--){
            char st= ch-j;
            std::cout<<st;
        }
        std::cout<<'\n';
    }
}
void p16(int n){
    int space1=0;
    int space2=2*(n-1);
    for (int i=0; i<2*n; i++){
        if(i>=n){
        for (int j=0; j<i-n+1; j++){
            std::cout<<'*';
        }
        for (int x=0; x<space2; x++){
            std::cout<<" ";
        }
        for (int y=0; y<i-n+1; y++){
            std::cout<<'*';
        }
        space2-=2;
    }
    
     else{
        for (int j=n-i; j>0; j--){
            std::cout<<'*';
        }
        for (int x=0; x<space1; x++){
            std::cout<<" ";
            
        }
        for (int j=n-i; j>0; j--){
            std::cout<<'*';
        }
        space1+=2;
    }
    std::cout<<'\n';
}
}
void p17(int n){
    int space1=2;
    int space2=2*(n-1);
    for (int i=0; i<2*n-1; i++){
        if(i<n){
        for (int j=0; j<=i; j++){
            std::cout<<'*';
        }
        for (int x=0; x<space2; x++){
            std::cout<<" ";
        }
        for (int y=0; y<=i; y++){
            std::cout<<'*';
        }
        space2-=2;
    }
    
     else{
        for (int j=2*n-i-1; j>0; j--){
            std::cout<<'*';
        }
        for (int x=0; x<space1; x++){
            std::cout<<" ";
            
        }
        for (int j=2*n-i-1; j>0; j--){
            std::cout<<'*';
        }
        space1+=2;
    }
    std::cout<<'\n';
}
}
void p18(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==0||j==0||i==n-1||j==n-1){
           std::cout<<'*';}
           else{
            std::cout<<" ";
        }
        }
        
        std::cout<<'\n';
    }

}
void p19(int n){
    for (int i=0; i<2*n-1; i++){
        for (int j=0; j<2*n-1; j++){
          int top= i;
          int left= j;
          int bottom=(2*n-2)-i;
          int right= (2*n-2)-j;
          std::cout<<n-std::min (std::min(top, left), std::min(bottom, right));
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
    p19(n);
}
    return 0;
}