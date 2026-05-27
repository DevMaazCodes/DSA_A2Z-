#include <bits/stdc++.h>
void print(int n,int i){
    if (i>n){ //this is base condition if its not there a stack overflow is caused
        return;
    }
    std::cout<<i<<'\n';
    print(n,i+1);
}
int main(){
    int n;
    int i=1;
    std::cin>>n;
    print(n,i);

}