//pairs is a container under STL used to store 2 variables. It is represented as std::pair<int, int>pairname={val1, val2}.
//we can use it's nested property to store multiple values. the values inside pair can be accessed by pairname.first for 
//first value and pairname.second for second value.
#include <iostream>
#include <utility>
int main(){
    std::pair<int, std::string>p={6,"seven"};
    std::cout<<p.first<<" "<<p.second<<'\n';
    //using nested property and array
    std::pair<char, std::pair<int, std::string>>test[]={{'A', {6, "stupid"}}, {'B', {9, "Good Boy"}}};
    std::cout<<test[1].second.second;
}
