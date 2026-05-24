//deque is the same as list having all front functions and remaining vector functions too
#include <iostream>
#include <deque>
int main(){
    std::deque<int>dq;
    dq.push_front(6);
    dq.emplace_back(7);
    dq.pop_front();
    std::cout<<dq.front();
    return 0;
}