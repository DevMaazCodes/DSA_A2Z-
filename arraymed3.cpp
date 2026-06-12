//we will solve the Majority Element problem, the brute is simple nested loops having a count variable if counter is >n/2 return current element
//the better is using hashing and comparing all the counts and returning the majority one
//the optimal is using moore's voting algorithm as below
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int el;
    int cnt=0;
    for(int i=0; i<n; i++){
        if (cnt==0){
            el=arr[i];
            cnt=1;
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    std::cout<<"Majority element is "<<el;
    return 0;
}