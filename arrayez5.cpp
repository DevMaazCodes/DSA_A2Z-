//we will solve the problem of roatating array by 1 place.
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for (auto it: arr){
        std::cout<<it<<" ";
    }
    return 0;
}