//we will solve merge interval problem, the brute is actually checking each interval and seeing whether one lies inside other or not
//the optimal is simpler we just use one pass O(N), can't explain via typing. It's done below
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }\
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(ans.empty()||ans.back()[1]<arr[i][0]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(arr[i][1],ans.back()[1]);
        }
    }
       for(int i=0; i<ans.size(); i++){
        for(int j=0; j<2; j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
