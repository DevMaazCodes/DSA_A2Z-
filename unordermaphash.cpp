//we can use unordered map for hashing as well because we dont need the key in order for fetching, the benefit is that in most of the cases the TC of unordered map is O(1),
// for the worst case (which is very rare and is caused by internal collisions) it is linear O(n^2) unlike map which is log n, where n is the no of elements.
#include <bits/stdc++.h>
int main(){ 
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    std::unordered_map<int, int> hash;
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