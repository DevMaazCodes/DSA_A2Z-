//we will solve the problem of finding the maximum consecutive ones in an array
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int cnt=0;
    int max=0;
    for (int i=0; i<n; i++){
        if (arr[i]==1){
            cnt++;
        }
        else {
            cnt=0;
        }
        if (max<cnt){
            max=cnt;
        }
    }
    std::cout<<max;
    return 0;
}