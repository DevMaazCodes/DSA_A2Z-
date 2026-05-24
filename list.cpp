//a list is also a container and is very similar to vector. the main difference is it has push_front and emplace_front keywords.
//edit: it can perform all functions for front like pop front
#include <bits/stdc++.h>
#include <iostream>
#include <list>
int main(){ 
    std::list<int>x={4,3,5};
    x.push_front(1);
    x.emplace_front(0);
   //rest of the functions are same as vectors
}