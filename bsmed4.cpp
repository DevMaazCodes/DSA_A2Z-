//we will solve the problem min no. of days to make m bouquet
#include <bits/stdc++.h>
int cal(std::vector<int>& bloomDay, int m, int k,int mid){
        int cnt=0;
        int bouquet=0;
        for(int bloom:bloomDay){
            if(mid>=bloom) cnt++;
            else cnt=0;
            if(cnt==k){
                bouquet++;
                cnt=0;
            }
        }
        if(bouquet>=m) return 1;
        else return 0;
    }
int minDays(std::vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans= cal(bloomDay,m,k,mid);
            if(ans==1){
               high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
int main(){
    std::vector<int>bloomDay;
    for(int i=0; i<7; i++){
        int n; std::cin>>n; bloomDay.push_back(n);
    }
    int m;
    std::cin>>m;
    int k;
    std::cin>>k;
    int speed=minDays(bloomDay,m,k);
    std::cout<<speed;

    return 0;
}