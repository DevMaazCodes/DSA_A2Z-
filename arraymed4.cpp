//we will solve the problem of returning subarray having maximum sum
//the brute force is using nested loops while the better is just a better nested loop and optimal is using Kadane's Algorithm done below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    //the kadane's algo
    int sum=0;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>max){
          max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    std::cout<<max;
    return 0;
}