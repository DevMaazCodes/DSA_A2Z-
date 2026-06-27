//we solve the problem of finding reverse pairs i.e pairs in which i<j but arr[i]>2*arr[j]
//the brute force is using nested loops which would give a big TLE error
//the optimal is similar to count inversion i.e using merge sort but this time before performing merge we count pairs using additional function
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
int countpairs(int arr[], int low, int mid, int high){
    int cnt=0;
    int right=mid+1;
    for(int i=low; i<=mid; i++){
        while(right<=high&&arr[i]>2*(long long)arr[right]){
            right++;
        }
        cnt+=right-(mid+1);
    }
    return cnt;
}
int mergesort(int arr[],int low,int high){
    int cnt=0;
    if(low>=high)return cnt;
    int mid=(low+high)/2;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=countpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
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