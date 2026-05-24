//we can use iterators to print vector. it is represented by std::vector<datatype>::iterator name= iteration function.
//there are various iterator functions in vector we will learn it here.
#include <iostream>
#include <vector>
#include <utility>
int main(){
    std::vector <int> x(5);
    x = {89,88,87,86,85};
    x.push_back(84);
    x.emplace_back(83); 
    //std::cout<<x[6]; //using index method
    std::vector<int>::iterator it= x.begin(); //begin iterator points to the memory address at index 0.
    //std::cout<<*it;
    it++; //points to the memory address at index 1 as it increased by 1 and vector and arrays are stored in consecutive memory address.
    std::vector<int>::iterator ite= x.end(); //end iterator point to the memory address AFTER the last element.
    ite--; //now the ite points to the last element's memory address.
    //std::cout<<*ite;
    std::vector<int>::reverse_iterator iter= x.rbegin(); //rbegin is like begin in reverse, first it will point to the memory address of last element.
    //std::cout<<*iter;
    iter++; //now points to second last element;
    //std::cout<<*iter;
    std::vector<int>::reverse_iterator itera= x.rend();//rbegin is like end in reverse, first it will point to the memory address
    // of the element before first element.
    itera--; //now points to the memory address of first element.
    //std::cout<<*itera;
    std::cout<<x.back(); //.back function will print the value of the last element
    return 0;
}