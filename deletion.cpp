//we can delete some elements from a vector using the .erase keyword
#include <iostream>
#include <vector>
int main(){
    std::vector<int>z={3,4,5,6,7,8,9};
    z.push_back(10);
    z.emplace_back(11);
    z.erase(z.begin()+1); //(deletes the element at memory address .begin+1)
    //std::cout<<*(z.begin()+1); //prints 5 as vector got reshuffled 3rd element became 2nd. new z={3,5,6,7,8,9,10,11}
    z.erase(z.begin()+1, z.begin()+7); //to delete from a range we can use this vec.erase(start, end).
    //important is to remember that the element at adress of end is not included unlike the start so if we need to delete till begin+6,
    //the end becomes begin+7.
    std::cout<<*(z.begin()+1);
    return 0;
}