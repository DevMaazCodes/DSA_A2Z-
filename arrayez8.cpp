//we will be doing basic linear search 
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int q;
    std::cin>>q;
    for (int i=0; i<n; i++){
        if(arr[i]==q){
            std::cout<<"Element is at index "<<i;
            break;
        }

         
    }

    return 0;
}