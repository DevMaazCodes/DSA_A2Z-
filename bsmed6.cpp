//we will solve the problem of finding least Capacity To Ship Packages Within D Days using bs
#include <bits/stdc++.h>
    int cal(std::vector<int>&weights,int days,int mid){
        int load=0;
        int day=1;
        for(int weight:weights){
            if(load+weight>mid){
                day=day+1;
                load=weight;
            }
            else{
                load+=weight;
            }
        }
        if (day<=days) return 1;
        else return 0;
    }
    int shipWithinDays(std::vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0; i<weights.size();i++){
            high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans= cal(weights,days,mid);
            if(ans==1)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
int main(){
    std::vector<int>weights;
    for(int i=0; i<10; i++){
        int n; std::cin>>n; weights.push_back(n);
    }
    int k;
    std::cin>>k;
    int capacity=shipWithinDays(weights,k);
    std::cout<<capacity;

    return 0;
}