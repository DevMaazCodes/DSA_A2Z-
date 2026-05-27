//as learned recursion is when a function calls itself until a specified condition is met, this condition is known as base condition.
#include <bits/stdc++.h>
void rec(int &count){
    if (count==11){ //this is base condition if its not there a stack overflow is caused
        return;
    }
    std::cout<<count<<'\n';
    count++;
    rec(count);
}
int main(){
    int count=0;
    rec(count);

}
//we can make a recursion tree to easily visualize this