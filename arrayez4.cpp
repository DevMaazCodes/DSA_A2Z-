//we will remove duplicates from array
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int i=0;
    for(int j=1; j<n; j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        for(int i=0; i<n; i++){
      std::cout<<arr[i]<<" ";
        }
    return 0;
}