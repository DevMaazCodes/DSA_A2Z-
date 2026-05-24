//stack follows last in first out (LIFO). It is a container and syntax is similar to vectors. But there's no indexing in it.
//stack only has 3 major functions, stack.push/emplace, .pop, .top , the basic functions like size and emptyand swap stays same.
#include <iostream>
#include <stack>
int main(){
    std::stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4); 
    st.emplace(5);
    st.top()+=5; //we can modify using references
    std::cout<<st.top(); //cout 5.
    st.pop(); //pop i.e delete the top at the stack
    std::cout<<st.top(); //cout 4.
    std::stack<int>st1;
    st1.push(6);
    st1.push(7);
    st1.push(8); 
    st1.emplace(9);
    st1.swap(st);
    std::cout<<st.top(); //cout 9 which was the top of st1 successfully swapped
    return 0;
}