//we will solve the merge two sorted array in place using an optimal solution of 2 pointer
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr1[n];
    for (int i=0; i<n; i++){
        std::cin>>arr1[i];
    }
    int m;
    std::cin>>m;
    int arr2[m];
    for (int i=0; i<m; i++){
        std::cin>>arr2[i];
    }
    int i=n-1;
    int j=0;
    while(j<m&&i>=0){
        if(arr1[i]>arr2[j]){
            std::swap(arr1[i],arr2[j]);
            i--; j++;
        }
        else{
            break;
        }
    }
    std::sort(arr1, arr1 + n);
    std::sort(arr2, arr2 + m);
    
    // Print checking code
    for(int x=0; x<n; x++) std::cout << arr1[x] << " ";
    std::cout << "\n";
    for(int x=0; x<m; x++) std::cout << arr2[x] << " ";
    
    return 0;
}