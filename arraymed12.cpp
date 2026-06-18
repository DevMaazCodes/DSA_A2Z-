//We will traverse in a matrix under a spriral fashion
//This has a single solution and is quite straightforward once understood
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int m;
    std::cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>arr[i][j];
        }           
    }
    std::vector<int>ans;
    int top=0, bottom=n-1;
    int left=0, right=m-1;
    while(right>=left&&bottom>=top){
        for(int i=left; i<=right; i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if (top<=bottom){
        for(int i=right; i>=left; i--){
            ans.push_back(arr[bottom][i]);
        }
        bottom--;
    }
    if (right>=left){
        for(int i=bottom; i>=top; i--){
            ans.push_back(arr[i][left]);
        }
        left++;
    }
    }
    for(int i=0; i<ans.size(); i++){
            std::cout<<ans[i]<<" ";
    }
    return 0;
}