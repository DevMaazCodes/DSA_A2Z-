//we will solve the longest consecutive sequence in an array
//the brute is using nested loops and checking for each element is if the consectuive exists, the better is sorting the array and then using a simple single loop
// to find the largest length of consecutive numbers
//the optimal is using unordered set as done below having TC of O(3N)
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    std::unordered_set<int>st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int length=1;
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cl=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                cl++;
                x+=1;
            }
            length=std::max(cl,length);
        }
    }
    std::cout<<length;
    
    return 0;

}
