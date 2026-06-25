//we will solve the problem of count inversions where we tell how many pairs are there which can be said inversed i.e the index is greater but value is smaller
//the brute is simple nested loops and having cnt variable
//the optimal is using merge sort pretty hard to explain via typing done below
#include <bits/stdc++.h>
int merge(int arr[], int low, int mid, int high){
    std::vector<int>temp;
    int cnt=0;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if (arr[left]>arr[right]){
            temp.push_back(arr[right]);
            cnt=cnt+mid-left+1;
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
int mergesort(int arr[],int low,int high){
    int cnt=0;
    if(low>=high)return cnt;
    int mid=(low+high)/2;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int high=n-1;
    int low=0;
    int cnt=mergesort(arr,low,high);
    std::cout<<cnt;
    return 0;
}