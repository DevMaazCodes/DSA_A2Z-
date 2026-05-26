#include <bits/stdc++.h>
int cnt(int n){
    int cnt=0;
    do {
        n/=10;
        cnt++;
    }while(n>0);
    return cnt;
}
int main(){
    int n;
    int sum=0;
    std::cin>>n;
    int dup=n;
    int count= cnt(n);
    do {
        int ld= n%10;
        sum= sum+(pow (ld, count));
        n/=10;
    }while(n>0);
    if (dup==sum){
        std::cout<<"p";
    }
    else {
        std::cout<<"no p";
    }

    return 0;
}