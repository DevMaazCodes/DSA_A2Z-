//we will use multiple recursive calls inside one function to solve this.
#include <bits/stdc++.h>
int f(int n){
    if (n<=1){
        return n;
    }
    int last= f(n-1);
    int slast= f(n-2);
    return last+slast;
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<f(n);
    return 0;
}
//the time complexity is O(2^n) because each function calls two more function;
//the space complexity is still O(n) because each recursive call returns and ends before starting another so space is cleared after each recursive call