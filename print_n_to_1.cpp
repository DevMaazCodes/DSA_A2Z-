#include <bits/stdc++.h>
void print(int n){
    if (n==0){ //this is base condition if its not there a stack overflow is caused
        return;
    }
    std::cout<<n<<'\n';
    print(n-1);
}
int main(){
    int n;
    std::cin>>n;
    print(n);

}