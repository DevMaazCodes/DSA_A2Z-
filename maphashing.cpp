//we can use map STL for efficient hashing like below
//the TC for any operation done on maps is log N , where n is the number of elements inside map.
#include <bits/stdc++.h>
int main(){ 
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    std::map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
    int q;
    std::cin>>q;
    while(q--){
        int number;
        std::cin>>number;
        std::cout<<hash[number]<<std::endl;
    }
    return 0;
}