//Merge sort is a very efficient recursive sorting algo, it follows divide and merge rule.
#include <bits/stdc++.h>
void merge(int arr[], int low, int mid, int high){
    std::vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if (arr[left]>arr[right]){
            temp.push_back(arr[right]);
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
}
void mergesort(int arr[], int low, int high){
    if (low>=high) return;
    int mid= (low+high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[]={1,2,4,8,3,5,9,0,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1;
    int low=0;
    mergesort(arr, low, high);
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
//The TC of merge is O(N) where N is the no. of elements and log base 2 N for MS as we are dividing by 2 each time where N is the no. of elements, for each time we
//divide we will perform merge so the total TC will be O(N*logbase2N).