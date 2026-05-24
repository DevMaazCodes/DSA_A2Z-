//we were printing using the standard method of indexing till now, now we will use iterators and for each loop to print vectors.
#include <iostream>
#include <vector>
#include <utility>
int main(){
    std::vector<int>y={10,9,8,7};
    y.push_back(6);
    y.emplace_back(5);
    //std::cout<<y[5]; //standard way of indexing
    //using iterators below
    for (std::vector<int>::iterator it= y.begin(); it!=y.end(); it++){
       // std::cout<<*it<<" ";
    }
    for (auto it= y.begin(); it!=y.end(); it++){ //the auto keyword saves time as it let's the compiler know it is an iterator, no long typing.
        //std::cout<<*it<<" ";
    }
    for (int it : y){ //this is the for each loop and is the simplest as it asks the compiler to print all int inside y.
        //std::cout<<it<<" ";
    }
    for (auto it : y){ //the auto keyword saves time as it let's the compiler figure out the data type on it's own decreasing chance of error.
        std::cout<<it<<" ";
    }
    return 0;
}