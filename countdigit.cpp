#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int cnt=0;
    do {
        n/=10;
        cnt++;
    }while(n>0);
    std::cout<<cnt;
    return 0;
}
//the tc will be O(log base 10 N)