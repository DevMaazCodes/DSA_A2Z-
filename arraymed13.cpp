//we will solve the problem of finding no. of subarrays having sum k
//the brute is simply using 3 nested loops which is genuinely counter intuitive, it has a TC of n^3.
//the better is the intuitive approach of using 2 nested loops and optimal is using hashmap and presum like we did in q13 array ez, also done below
#include<bits/stdc++.h>
int main(){
    //the sum way
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    int Narr=0;
    std::unordered_map<int, int>mpp;
    mpp[0]=1;
    int ps=0;
    for(int i=0; i<n; i++){
        ps+=arr[i];
        int rem= ps-k;
        if(mpp.find(rem)!=mpp.end()){
            Narr+=mpp[rem];
        }
        mpp[ps]++;
    }
    std::cout<<Narr;
    return 0;
}
