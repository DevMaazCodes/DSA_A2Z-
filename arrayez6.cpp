//we will solve the problem of roatating array by k places, this a complex problem for me so i watched the vid first to solve
//the brute method is to create a temp array to store the first k elements and then shift the rest inside the array and insert the temp arr to last of the initial arr.
//we will do the optimal one using the STL std::reverse to reverse the first k elements and then reverse the d+1 to n elements and then reverse the entire arr again
//to get the rotated one
#include <bits/stdc++.h>
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    k%=n;
    std::reverse(arr, arr+k);
    std::reverse(arr+k, arr+n);
    std::reverse(arr, arr+n);
    for (auto it: arr){
        std::cout<<it<<" ";
    }
    return 0;
}
