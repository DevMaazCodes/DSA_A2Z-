//we will solve the last question on 1d arrays that is finding peak element. A peak element is an element that is strictly greater than its neighbors
//The brute is simple O(N) loop but we will use bs to optimise it. The logic is actually a graph gradient logic if the slope is increasing 
//i.e the current mid<mid-1 but mid>m+1 we know peak is to left so we trim the right and vice versa for left
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
    if(n==1) ans=0;
    else if(arr[0]>arr[1]) ans=0;
    else if(arr[n-1]>arr[n-2]) ans=n-1;
    else{
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                ans=mid;
                break;
            }
            else if(arr[mid]>arr[mid-1]){ //curve increasing so trim left
                low=mid+1;
            }
            else{ //else curve decreasing or is a minima so trim right
                high=mid-1;
            }
    }
}
    std::cout<<ans;
    return 0;
}

