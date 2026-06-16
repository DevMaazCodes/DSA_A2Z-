//we will solve the problem of set columns and rows of a matrix 0 if an element 0 appears.
//the brute force is using traversing through the array and mark all the elements needed to be set to zero and then traverse again to set it zero, this takes a TC of around n^3.
//the better is using a row and coloumn array if element is 0 mark its row and coloumn inside row and array as 0, then traverse again to set elements inside matrix 0
//the better takes TC O(2*n*m) and space complexity O(N+M) as we are making 2 arrays of size n rows and m coloumns.  It is done in leetcode
//the optimal is having SC of O(1) by not taking addititonal row and col arrays instead utilsing the first row and coloumn inside the matrix itself which is pretty difficult for me
//to understand so skipping it for now
#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    int m;
    std::cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>arr[i][j];
        }           
    }
    int row[n]={0};
    int col[m]={0};
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }           
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (col[j]==1||row[i]==1){
                arr[i][j]=0;
            }
        }           
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cout<<arr[i][j]<<" ";
        }           
        std::cout<<std::endl;
    }
    return 0;

}