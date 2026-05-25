//a set is a container which is like vector but it stores ONLY unique elements and like PQ it stores in ONLY ascending order.
//all the iterators for vectors can be used for set too and .size, .empty, .swap remains same.
#include <iostream>
#include <set>
int main(){
    std::set<int>x;
    x.insert(9); //we use insert function instead of push
    x.emplace(7); //emplace can be used
    x.insert(9);
    x.insert(5);
    x.insert (2);
    auto it= x.find(9); //an iterator named it which points to the memory address of 9, if the number searched for is not in set
    //the iterator will point to .end() i.e the memory address just after end.
    x.erase(7); //this erases aka deletes 7 and maintains the sorted order i.e ascending order
    int occ= x.count(5); //if 5 is in set .count will return 1 if not then returns 0
    x.erase(it); //this erases 9 as the it was pointing to 9's address
    auto it1= x.find(2);
    auto it2=x.find(5);
    //x.erase(it1, it2); //deletes everything between it1 and it2, it1 is start which is inclusive while it2 isn't inclusive so 5 remains in set.
    auto it4= x.lower_bound(5); //points to the memory address of first value that is >= 5
     auto it5= x.upper_bound(5); //points to the memory address of first value that is > 5
    return 0;
}