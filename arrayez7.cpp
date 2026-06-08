//we will solve the problem of moving zeroes to the end using optimal solution
//the brute is to use a temporary variable to store non-zero numbers and then add into array fil remaining indexes with zeroes
//the optimal is using two pointer AS SHOWN BELOW.
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int i=-1;
    for(int x=0; x<n; x++){
        if(arr[x]==0){
            i=x;
            break;
        }
    }
    for(int j=i+1; j<n; j++){
        if(i==-1) break;
        if (i>j){
            break;
        }
          if(arr[j]!=0){
            std::swap(arr[i], arr[j]);
            i++;
          }
        }
        for(int i=0; i<n; i++){
      std::cout<<arr[i]<<" ";
        }
    return 0;
}