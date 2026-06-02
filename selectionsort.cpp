//The concept behind Selection Sort is super straightforward: Find the minimum element in the unsorted array and swap it with the element at the beginning.
#include <bits/stdc++.h>
int main(){
    int arr[]={1,4,3,5,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mini;
    for(int i=0; i<n-1; i++){
        mini= i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[mini]){
                mini= j;
            }
        }
        int temp= arr[i];
        arr [i]= arr[mini];
        arr[mini]=temp;
    }
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
//The time complexity is O(N^2) as the outer loop is running for n times and the inner loop is running for n times first then n-1 and n-2 and so on till 2.
//so the innner loop TC is just sum of first n numbers i.e n^2/2+n/2, we ignore constants and lower values so TC becomes n^2 for inner loop
//we also ignore the TC for outer loop as it is just n, which is insignificant compared to n^2