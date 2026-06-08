//we will solve the question of taking union of arrays
//the brute involves using a set type structre to put all the elements of both arrays into set, all the elements will be unique and sorted by using set giving union
//the TC of Brute will be O(N1logn+n2logn+n1+n2) and space comp is O(n1+n2+n1+n2).
//Using optimal below
#include <iostream>
#include <vector>
int main(){
    int n1;
    std::cin>>n1;
    int arr1[n1];
    for (int i=0; i<n1; i++){
        std::cin>>arr1[i];
    }
    int n2;
    std::cin>>n2;
    int arr2[n2];
    for (int i=0; i<n2; i++){
        std::cin>>arr2[i];
    }
    std::vector<int>uni;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
        if (uni.empty()||arr1[i]!=uni.back()){
            uni.push_back(arr1[i]);
            
        }
        i++;
    }
        else{
            if(uni.empty()||(arr2[j]!=uni.back())){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
         if(uni.back()!=arr1[i]){
            uni.push_back(arr1[i]);
         }
         i++;
    }
        while(j<n2){
         if(uni.back()!=arr2[j]){
            uni.push_back(arr2[j]);
         }
         j++;
    }
    for(auto bt: uni){
        std::cout<<bt<<" ";
    }
    return 0;
}
