//we will solve the next permutation question i.e generating a combination that is greater than our current number if there's no combination then we return the smallest combi
//the brute force is generating all combination in ascending order via recursion and checking which is greater and if none is greater returnn first combi
//the brute is using a time complexity of (N!*N) which is a lot so we just conceptually know this and dont implement 
//the better is using STL next_permutation(.begin(), .end()) and the optimal is below;
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int breakp=-1;
    if(n==1){
        std::cout<<arr[0];
    }
    if(n!=1){
    for(int i=n-1; i>0; i++){
        if (arr[i]>arr[i-1]){
            breakp=i-1;
            break;
        }
    }
    int max=breakp+1;
    for(int i=breakp+1; i<n; i++){
        if (arr[i]>arr[breakp]&&arr[i]<arr[max]){
            max=i;
        }
    }
    std::swap(arr[max], arr[breakp]);
    std::reverse(arr+breakp+1, arr+n);
    for(auto it: arr){
        std::cout<<it<<" ";
    }
}
   
    return 0;

}