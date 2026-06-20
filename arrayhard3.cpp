//we will solve the 3 sum problem, the brute is using triple nested loops try out all the triplets and see which is 0 and push, we also use set to check for unique triplet
//the better is using hashset, take two numbers and see in set whether the needed third number exists to form triplet, easily done by hashset, we use 2 loops so TC O(N^2)
//in the optimal sol we dont use set but we sort it and use 2 pointers and a constant and run loops as done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    std::vector<std::vector<int>>ans;
    for(int i=0; i<n; i++){
        if (i>0&&arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if (sum<0) j++;
            else if (sum>0) k--;
            else{
                std::vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j--; k--;
                while(j<k&&arr[j]==arr[j-1]){
                    j++;
                }
                while(j<k&&arr[k]==arr[k+1]){
                    k--;
                }
            }
        }
    }
    for(auto it:ans){
        for(int i=0; i<it.size(); i++){
            std::cout<<it[i]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}