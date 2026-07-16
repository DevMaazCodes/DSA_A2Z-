//we will find the kth missing number in a sorted array, the brute is using a typical for loop taking O(N) time;
//we will optimise using bs as below
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int k; std::cin>>k;
    int low=0;
    int high=n-1;
    while(low<=high){
            int mid=(high+low)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k) low=mid+1;
            else high=mid-1;
         }
    std::cout<<high+1+k;
}
