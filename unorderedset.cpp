//an unordered set as the name suggests has no order but it contains only unique elements.
//everything is same as sets including functions it's just that the lower bound and upper bound function doesnt work here.
//it has better time complexity than multisets and sets. the complexity is big O of 1 usually for worst case its big O of n.
#include <bits/stdc++.h>
int main(){ 
    std::unordered_set<int>x;
    x.insert(3);
    x.insert(7);
    x.insert(7); //doesnt store as theres already a 7
    auto it= x.find(7);
    std::cout<<*it;
    return 0;
}