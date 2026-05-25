//a multiset is same as set but the elements are not required to be unique, it can store many occurances of same element
#include <bits/stdc++.h>
int main(){
    std::multiset<int>x;
    x.insert(7);
    x.insert(5);
    x.insert(8);
    x.insert(8);
    x.insert(8);
    x.insert(6);
    x.insert(2);
    x.count(8); //returns the number of occorunces of 8
    x.erase(x.find(8)); //this erases only one of the eights as .find function gives a memory address to the first two
    x.erase(8); //this erases all of the eights.
    
    return 0;
}