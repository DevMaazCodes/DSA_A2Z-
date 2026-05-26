#include <bits/stdc++.h>
void print(int n){
    int cnt=0;
    for(int i=1; i*i<=n; i++ ){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
     if(cnt==2){
        std::cout<<"Prime Number"<<'\n';
     }
        else{
            std::cout<<"Not a Prime Number"<<'\n';
        }
        

    
}
int main(){
    int n;
    std::cin>>n;
    print (n);
}