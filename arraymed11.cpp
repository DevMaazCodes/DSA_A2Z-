//we will solve the problem of rotating matrix by 90 degree
//the brute is simply using another ans matrix and putting all the elements to its right place in the ans array, which can easily be figured out using observation by writing
//the brute using TC of O(N^2), which is fine as we are iterating over a matrix but issue is it is using a O(N^2) SC which is not good
//the better/optimal eliminates the high SC, theres no better theres directly an optimal.
//the optimal is transposing (coloumns become rows and rows become coloums) the matrix and then reversing the rows taking TC of O(N^2) and SC of just 1 as no extra space is there
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cin>>arr[i][j];
        }           
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            std::swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        std::reverse(arr[i], arr[i]+n);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout<<arr[i][j]<<" ";
        }           
        std::cout<<std::endl;
    }
    return 0;
}