//we will do the 4 sum problem, the brute is simple 4 loops nested, the better is similar to hashset method in 3 sum taking 2 sets, one hashset and one set to store
//the optimal method is 2 pointer which eliminates all the sets as we initially sort the array to get in order and thus we can just have unique elements like in 3 sum
//we fix 2 elements out of 4 here like we fixed one in 3 sum and apply same logic. This is done below too
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    std::vector<std::vector<int>>ans;
    for(int i=0; i<n; i++){
        if (i>0&&arr[i]==arr[i-1]) continue;
        for (int j=i+1; j<n; j++){
        if(j!=i+1&&arr[j]==arr[j-1]) continue;
        int k=j+1;
        int l=n-1;
        while(k<l){
            int sum=arr[i]+arr[j]+arr[k]+arr[l];
            if (sum<0) k++;
            else if (sum>0) l--;
            else{
                std::vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                ans.push_back(temp);
                k++; l--;
                while(k<l&&arr[k]==arr[k-1]){
                    k++;
                }
                while(k<l&&arr[l]==arr[l+1]){
                    l--;
                }
            }
        }
        }
        
    }
    for(auto it:ans){
        for(int i=0; i<it.size(); i++){
            std::cout<<it[i]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}