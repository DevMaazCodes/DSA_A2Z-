//we will solve the problem of finding the largest element in an array
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int large=arr[0];
    for (int i=1; i<n; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    std::cout<<"Largest element is "<<large;
    return 0;
}