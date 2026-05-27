#include <bits/stdc++.h>
void swp(int x[], int i,int size){
    if(i>=size/2){
        return;
    }
    std::swap(x[i],x[size-i-1]);
    swp(x, i+1,size);
}
int main(){
    int size=10;
    int x[size]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    swp(x, i, size);
    for (i=0; i<size; i++){
        std::cout<<x[i]<<" ";
    }
    return 0;
}