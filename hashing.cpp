//Up until now, if you wanted to count how many times a number or character appeared in an array, you had to loop through the entire array over and over again.
//That's a brute-force approach that takes. Hashing is the ultimate shortcut which follows a precompute and fetch method.
//It’s a technique that lets us store data in a way that allows us to search, insert, and count frequencies in constant time: O(1).
#include <bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    //precomputation below
    int hash[13]={0};  //we assume that the max index of initial array is 12 i.e size 13, so we create a hash array of size 13.
    //max int array inside main can only go till 10^6 and globally 10^7.
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int q;
    std::cin>>q;
    while(q--){
        int number;
        std::cin>>number;
        //this is the fetch part
        std::cout<<hash[number]<<std::endl;
    }

    return 0;
}