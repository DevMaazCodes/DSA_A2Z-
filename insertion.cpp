//we can use .insert function to insert new elements into existing one
#include <iostream>
#include <vector>
int main(){
    std::vector<int>p={10,30,40,50};
    p.push_back(60);
    p.emplace_back(70);
    //using insert to fill in the begin
    p.insert(p.begin(), 0); //the syntax is vec.insert(position, what to insert)
    //std::cout<<p[0];
    p.insert(p.begin()+2,2,20); //this will insert 2 20s at position begin+2, this is how to insert something multiple times
    for (auto it: p){
        std::cout<<it<<" ";
    }

    return 0;
}