//it is just like stack but is literally like a queue , it follow first in first out (FIFO). Like stacks no indexing is there.
//though we can print front and back both instead of top.
#include <iostream>
#include <queue>
int main(){
    std::queue<int>x;
    x.push(2);
    x.push(3);
    x.emplace(4);
    std::cout<<x.front()<<'\n'; //prints 2, because it was first in queue so is at the front
    std::cout<<x.back()<<'\n'; //prints 4, because it was last in queue so is at the back
    x.pop(); //pops the first guy in queue i.e 2 so new front becomes 3
    std::cout<<x.front()<<'\n'; //prints 3
    x.front()+=15; //adds to the front guy which is the first to come, after pop it's 3
    x.back()+=15; //adds to the last guy which is the last to come i.e 4.
    std::cout<<x.front()<<'\n'; //prints 18
    std::cout<<x.back()<<'\n'; //prints 19
    //the rest of the functions are same as stack, size empty swap.
    return 0;
}
