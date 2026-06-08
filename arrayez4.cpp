//we will check if array is sorted
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

                arr [i+1]=arr[j];
                i++;
            }
        }
    
      std::cout<<i+1;
    return 0;
}