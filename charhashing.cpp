//we can also count the no. of occurances of a characters in a string using hashing. The concept of ascii numbers comes in.
//there are no declaration limits here as the max cahracters are 256 in c++ due to which the hash array has no declaration array.
#include <bits/stdc++.h>
int main(){
    std::string s;
    std::cin>>s;
    int hash[26]={0}; //for using only lower case we do [26] for all char we will do [256] and no complication of subtracting from a would be
    for (int i=0; i<s.size(); i++){
        hash[s[i]-'a']+=1;
    }
    int q;
    std::cin>>q;
    while (q--){
        char ch;
        std::cin>>ch;
        std::cout<<hash[ch-'a']<<'\n';
    }
    return 0;
}