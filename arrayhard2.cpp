//we will majority element II here
//the brute is simple nested loops checking which element appears more than n/3 times
//the better is hashing and checking when element's counter reaches >n/3 times and as soon as 2 elements are there we return
//the best is extended moore's voting algorithmas done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    std::vector<int>ans;
    int el1=INT_MIN,el2=INT_MIN;
    int cnt1=0,cnt2=0;
    for(int i=0; i<n; i++){
       if (cnt1==0&&arr[i]!=el2){
        el1=arr[i];
        cnt1=1;
       }
       else if (cnt2==0&&arr[i]!=el1){
        el2=arr[i];
        cnt2=1;
       }
       else if(arr[i]==el1){
        cnt1++;
       }
       else if(arr[i]==el2){
        cnt2++;
       }
       else{
        cnt1--; cnt2--;
       }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0; i<n; i++){
        if (arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
    }
    if (cnt1>n/3){
        ans.push_back(el1);
    }
    if(cnt2>n/3){
        ans.push_back(el2);
    }
    if(ans.size()==2){
    std::cout<<ans[0]<<" "<<ans[1];
    }
    else{
        std::cout<<ans[0];
    }
    return 0;
}
