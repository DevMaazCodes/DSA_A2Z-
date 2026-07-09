//we will solve the problem of finding single element in sorted array, the brute is using simple for loop
//we wil use binary search to optimize the problem, we will use the logic that even odd pairs for left half and odd even pair for right half for elimination
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int low=1;
    int high=n-2;
    int ans=-1;
    if(n==1) ans=arr[0];
    else if(arr[0]!=arr[1]) ans=arr[0];
    else if(arr[n-1]!=arr[n-2]) ans=arr[n-1];
    else{
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
                ans=arr[mid];
                break;
            }
            else if((mid%2==1&&arr[mid]==arr[mid-1])||(mid%2==0&&arr[mid]==arr[mid+1])){ //if in right half skip  
                low=mid+1;
            }
            else{
                high=mid-1;
            }
    }
}
    std::cout<<ans;
    return 0;
}