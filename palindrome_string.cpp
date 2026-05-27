#include <bits/stdc++.h>
bool ispal(const std::string word, int i,const int size){
    if(i>=size/2){
        return true;
    }
    if (word[i]!=word[size-i-1]){return false; }

    return ispal(word,i+1,size);
    
   
}
int main(){
    std::string word;
    std::getline(std::cin, word);
    int i=0;
    int size= word.size();
    if(ispal(word, i, size)){
        std::cout<<"It's a palindrome";
    }
   else{
     std::cout<<"It's not a palindrome";
   }
    return 0;
}