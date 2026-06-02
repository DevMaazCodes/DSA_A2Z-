//While Selection Sort looks for the minimum and pulls it to the front, Bubble Sort does the opposite: it pushes the maximum element to the very end of the array in each pass.
//It does this by comparing adjacent (side-by-side) elements from left to right. If the left element is greater than the right element, they swap.
#include <bits/stdc++.h>
int main(){
    int arr[]={1,4,3,5,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    
    for(int i=0; i<n-1; i++){
        bool swap=false;
        for (int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp= arr[j];
                arr[j]=arr[j+1];
                arr [j+1]=temp;
                swap=true; //optimising TC using boolean  
        }  
    }
    if(!swap){
        break;
    }
}
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
//the TC of bubble sort in worst and average case is O(N^2) by the same logic as selection sort but in best case where the arr is already sorted we have O(N) TC 
//as we break out of the loop if swap stays false i.e no swap occured