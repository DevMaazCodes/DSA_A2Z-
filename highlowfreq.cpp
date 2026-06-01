#include <bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Size of array: ";
    std::cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cout<<"Write element number "<<i+1<<std::endl;
        std::cin>>arr[i];
    }
    std::unordered_map<int, int> hash;
    for (int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    int max=0;
    int min=n+1;
    int high=0;
    int low= 0;
    for (auto it:hash){
        int element= it.first;
        int freq= it.second;
        if (freq>max){
            max= freq;
            high=element;
        }
        if (freq<min){
            min= freq;
            low=element;
        }
    }
    std::cout<<"The mode element is "<<high<<'\n';
    std::cout<<"The lowest occurance element is "<<low<<'\n';
    return 0;
}