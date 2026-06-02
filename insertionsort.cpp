//Insertion Sort moves backward (right to left). It grabs a new element and drags it backward into the already sorted left portion until it finds its correct home.
#include <bits/stdc++.h>
int main(){
    int arr[]={1,4,3,6,5,7,8,9,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp= arr [j];
            arr [j]=arr[j-1];
            arr [j-1]= temp;
            j--;
        }
    }
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
//The Tc for worst and average case is O(N^2) and best is O(N) because no swaps happens and while loop is completely skipped in best case.