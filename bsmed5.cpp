//we will solve the problem min no. of days to make m bouquet
#include <bits/stdc++.h>
bool cal(std::vector<int>& nums, int threshold,int mid){
        int tt=0;
        for(int num:nums){
            if(num%mid==0){
                tt=tt+(num/mid);
            }
            else{
                tt=tt+num/mid;
                tt=tt+1;
            }
        }
        return tt<=threshold;

    }
int smallestDivisor(std::vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            bool ans=cal(nums,threshold,mid);
            if (ans){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
int main(){
    std::vector<int>nums;
    for(int i=0; i<5; i++){
        int n; std::cin>>n; nums.push_back(n);
    }
    int k;
    std::cin>>k;
    int divisor=smallestDivisor(nums,k);
    std::cout<<divisor;

    return 0;
}