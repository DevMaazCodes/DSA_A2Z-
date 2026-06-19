//we will solve the first question under hard category of arrays i.e pascal triangle
//to solve the first variation (find nth element of r row and c coloumn) of this problem we use simple one loop with nCr formula approach(not direct formula, we shorten)
//in the second variation (print the coloumn of nth row), we will use a shortcut by observing whats being multiplied each time we move in the coloumn in terms of r and c
//we will do the third variation (printing entire pascal triangle) rn using the same method we talked about for variation 2
#include <bits/stdc++.h>
using namespace std;
//the below function generates the corresponding row for nth row
vector<int> generator(int row){
    vector<int>el;
    int cel=1;
    el.push_back(cel);
    for(int i=1; i<row; i++){
        cel=cel*(row-i);
        cel=cel/i;  //these 2 steps are derived by observation every next element is previousEl*(row-i)/i
        el.push_back(cel);
    }
    return el;
}
int main(){
    int n;
    std::cin>>n;
    vector<vector<int>>ans; //this will store our answers
    for(int i=1; i<=n; i++){
        ans.push_back(generator(i)); //calls the function and then that fn return the corresponding row
    }
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl; 
    }
    return 0;
}