//we will solve the problem of finding leaders in an array
//the brute is a simple nested loop while the optimal is using reverse traversal and keeping track of the maximum till now as done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    std::vector<int>ans;
    int max=arr[n-1];
    ans.push_back(max);
    for(int i=n-2; i>=0; i--){
        if (arr[i]>max){
            max=arr[i];
            ans.push_back(max);
        }
    }
    std::reverse(ans.begin(), ans.end());
    for(auto it: ans){
        std::cout<<it<<" ";
    }
    
    return 0;

}