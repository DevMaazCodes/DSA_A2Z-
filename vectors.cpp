//a vector is just like an array with dynamic size, so we don't have to declare a size initially. Represented as: std::vector<datatype>name.
#include <iostream>
#include <vector> //neccessary for complete use of vector functions
int main(){
   std::vector<int>vec={1,3,5,7,9,11};
   vec.push_back(23); //this is how to add an element in the vector
   vec.emplace_back(23); //this is also used to add an element in the vector and is generally faster
   vec.push_back (67);
  // std::cout<<vec[8]<<'\n';
   std::vector<std::pair<int, std::string>>pairs={{1,"good"},{2,"bad"}, {3,"sad"}};
   pairs.push_back({9,"sorted"}); //we inlcude curly braces for pairs in push back
   pairs.emplace_back(10,"stupid"); //we don't inlcude curly braces for pairs in emplace back.
   //std::cout<<pairs[4].first;
   std::vector<int>typeint(5,50); //we can assign vector a size like this and fill it with something,
   // if we dont fill the garbage value comes in. In this case the vector is {50,50,50,50,50}
   //std::cout<<typeint[0];
   typeint.push_back(45); //even though the size was predefined we can still increase it using pushback/emplaceback, vector is dynamic.
   //std::cout<<typeint[5];
   std::vector<int>typeint2(typeint); //we can insert one vector into another to copy.
   //std::cout<<typeint2[3]<<" "<<typeint2[5];
    return 0;
}