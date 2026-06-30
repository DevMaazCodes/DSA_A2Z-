//we will be starting with binary search today this is the first question of bs which is simple search in a sorted array
//BS is a searching algorithm that is applied when there's a limited search space in a sorted area
//we use divide and check rule in binary search, we can either iterate using while loop or do recursion, recursion i did on leetcode lets do iterate here
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2; //this is same as low+high/2 but we do this to eliminate overflow problem
        if(arr[mid]==k){
            ans=mid;
            break;
        }
        else if(arr[mid]<k){low=mid+1;}
        else {high=mid-1;}
    }
    std::cout<<ans;
    return 0;
}
//the TC will be simply log base 2 N where N is the no. of elements in array, this is because in each step there are tiny single steps and we are iterating
//by dividing by 2 and at worst case we will be divide and iterate log base 2 N times