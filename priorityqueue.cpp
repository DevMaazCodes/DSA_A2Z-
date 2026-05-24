//PQ is just like queue, but instead of First in first out it follows priority rule i.e the max value stays at the top or the min
//depending on how we use
//it only has a pq.top() instead of front and back else stays same like size empty swap and modification of value.
#include <iostream>
#include <queue>
int main(){
    std::priority_queue<int>x; //this is for printing max value at top aka max heap
    x.push(5);
    x.push(8);
    x.push(3);
    x.push(7);
    std::cout<<x.top()<<'\n'; //prints 8 as it's largest so at the top no matter the order
    x.pop(); //pops the previous top i.e 8 so new is 7
    std::cout<<x.top()<<'\n'; //prints 7
    std::priority_queue<int, std::vector<int>, std::greater<int>>mq; //this is for printing min value at top aka min heap
    mq.push(67);
    mq.push(64);
    mq.push(65);
    std::cout<<mq.top()<<'\n'; //prints 64 as it is the minimum
    return 0;
}
