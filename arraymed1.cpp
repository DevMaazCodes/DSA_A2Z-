//we will solve the 2 sum problem.
//the brute is using simple nested loops with TC of O(N^2), the better is using hashing like we did for longest subarray question
//the optimal is using 2 pointer greedy approach but only works to confirm if sum exists but to return indices it doesnt work as we need to sort the array
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    int k;
    std::cin>>k;
    /* the hashing method
    std::map<int, int>count;
    int rem=0;
    for (int i=0; i<n; i++){
        rem=k-arr[i];
        if(count.find(rem)!=count.end()){
            std::cout<<i<<" "<<count[rem];
            break;
        }
        count[arr[i]]=i;
    }*/
   //the greedy method
   int left=0;
   int right=n-1;
   int cnt=0;
   std::sort(arr, arr+n);
   bool found=false;
   while(left<right){
    int sum= arr[left]+arr[right];
    if(sum==k){
        std::cout<<"YES";
        found=true;
        break;
    }
    else if(sum<k){
        left++;
    }
    else{
        right--;
    }
    
   }
   if(!found){
   std::cout<<"NO";
   }

    return 0;
}