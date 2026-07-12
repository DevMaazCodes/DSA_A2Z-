 //we will sove the first prob of bs on answers that is finding sqr root of a number using bs
 //the concept bs on answers is used when we know the range of answers
 #include <bits/stdc++.h>
 int main(){
    int k;
    std::cin>>k;
    int low=1;
    int ans;
    int high=k;
    while(low<=high){
        int mid=(high+low)/2;
        if(mid*mid<=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    std::cout<<ans;
    return 0;
 }
