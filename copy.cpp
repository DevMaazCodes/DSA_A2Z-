//we can insert one vector into another by using the insert function only
#include <iostream>
#include <vector>
int main(){
    std::vector<int> copy={2,4,6,8,10};
    std::vector<int> og;
    og.insert(og.begin(), copy.begin(), copy.end()); //this makes sure to insert entire copy to og, we can also modify the range
    og.insert(og.end(), copy.begin(), copy.end()-1); //this inserts the copy again but this time till
    // 8 only as the range is till 10 and end element of range is not inclusive
    for (auto it:og){
        std::cout<<it<<" ";
    }
    std::cout<<'\n';
    std::cout<<og.size()<<'\n'; //tell no. of element inside vector
    og.pop_back(); //deletes the last element of og
    for (auto it:og){
        std::cout<<it<<" ";
    }
    std::cout<<'\n';
    copy.swap(og); //(swaps the 2 vectors og and copy)
    for (auto it:copy){
        std::cout<<it<<" ";
    }
    copy.clear(); //clear the entire vector copy making it empty
    copy.empty(); //is like a bool statement to verify if vector is empty
    return 0;
}
