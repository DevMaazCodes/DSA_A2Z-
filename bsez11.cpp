//we will solve the problem of finding how many times a sorted array is rotated, we will use the same logic as we did in finding minimum
//but instead of minimum value ans would be minimum value's index
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int ians=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){  //checking if left is sorted
           if(ans>=arr[low]){
            ans=arr[low];
            ians=low;
           }
           low=mid+1;
        }
        else{ //since left isn't sorted right must be
           if(ans>=arr[mid]){
            ans=arr[mid];
            ians=mid;
           }
           high=mid-1;
        }
    }
    std::cout<<ians;
    return 0;
}
