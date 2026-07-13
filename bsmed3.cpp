//we will solve the problem of koko eating banana
#include <bits/stdc++.h>
int minEatingSpeed(std::vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int pile:piles){
                if((pile%mid)==0){
                    hours+=(long long)pile/mid;
                }
                else{
                    hours+=(pile/mid+1);
                }
            }
            if(hours<=h){
                high=mid-1;
            } 
            else low=mid+1; 
        }
        return low;
    }
int main(){
    std::vector<int>piles;
    for(int i=0; i<4; i++){
        int n; std::cin>>n; piles.push_back(n);
    }
    int h;
    std::cin>>h;
    int speed=minEatingSpeed(piles,h);
    std::cout<<speed;

    return 0;
}