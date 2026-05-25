//map is a container which has 2 values mp(2,3) in this 2 is the key and 3 is the value. the key is unique but value can be repeated
//the key is also sorted in ascending order.
#include <iostream>
#include <bits/stdc++.h>
#include <map>
int main(){
    std::map<int , std::pair<int, std::string>>ms; //we can define it as we want 
    ms[1]= {4, "Maaz"}; //assigns key value 1 to pair 4,maaz
    ms.insert({2,{4,"Maaz"}});  //assigns key value 2 to pair 4,maaz
    ms[3]={6, "You"};
    ms[5]={9, "they"};
    ms[4]={10, "he"}; 
    for(auto it: ms){
        std::cout<<it.first<<" " << it.second.first<<" "<<it.second.second<<'\n';
        //using this we can iterate over a map, also one thing to notice is even though we assigned key 4 after 5 still key 4 is first
        //this is because key is unique and sorted
    }
    std::cout<<ms[1].first<<'\n'; //returns the first value at key 1
    std::cout<<ms[12].first; //returns null/0 as their is no value for key 12 or simply key 12 doesn't exist
    auto it= ms.find(3); //iterator it pointing at the map element of key 3
    std::cout<<(*it).first; //prints 3 which is the first value aka the key in map at it
    auto it1= ms.find(89); //iterator it pointing at .end() i.e after the last element because key 89 doesnt exists
    auto it2= ms.lower_bound(3); //same as map lower bound
    auto it3= ms.upper_bound(3); //same as map upper bound
    //rest of the functions are same like size swap empty erase.
    return 0;
}
//multimap is same as map but like multiset it can store duplicate keys, also map[key]=value cant be used here
//unordered map is same as map but like unord set it stores unique keys but no order, also time and space complexity is O(1) on average
//worst case is O(n).
