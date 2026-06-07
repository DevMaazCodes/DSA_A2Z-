//we will check if array is sorted
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    bool sorted= true;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if (arr[i]<=arr[i+1]){
            continue;
        }
        else{
            sorted=false;
            break;
        }
    }
    if (sorted){
        std::cout<<"Sorted";
    }
    else{
         std::cout<<"Not Sorted";
    }
    return 0;
}
