#include <bits/stdc++.h>
bool isPalindrome(int n){
    int d=n;
    int rev=0;
    do{

      rev=rev*10+(n%10);
      n/=10;
    }while(n>0);
    
    if (rev==d)
    {
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<isPalindrome(n);
    return 0;
}