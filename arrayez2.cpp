//we will solve the problem of finding the second largest element in an array
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int seclarge= INT_MIN;
    int large=arr[0];
    for (int i=1; i<n; i++){
        if(arr[i]>large){
            seclarge= large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>seclarge){
            seclarge=arr[i];
        }

    }
    std::cout<<seclarge;
    return 0;
}