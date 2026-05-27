#include <bits/stdc++.h>
void print(int count, std::string name){
    if (count==0){ //this is base condition if its not there a stack overflow is caused
        return;
    }
    std::cout<<name<<'\n';
    print(count-1, name);
}
int main(){
    std::string name;
    std::getline(std::cin, name);
    int count;
    std::cin>>count;
    print(count, name);

}