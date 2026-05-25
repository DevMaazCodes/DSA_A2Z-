//the first algo is sort ins ascending/descending which is written as sort(start, end), end not included ofc, 
//so the end is actual end +1, for entire vector it is .end().
#include <bits/stdc++.h>
bool comp( std::pair<int, int>p1, std::pair<int, int>p2){
    if (p1.second>p2.second){return false;}
    else if(p1.second<p2.second){return true;}
    else {
        if(p1.first>p2.first){return true;}
        else{return false;}
    }
}
int main(){
    std::vector<int>x={1,3,6,2,7,4,8,2,1,9,0};
    sort(x.begin(),x.end()); //sorts entire vector
    //sort(x.begin()+2, x.end()-1); //sorts from begin +2 i.e 6 till end-1 till 0 not including 0 as end value is exclusive unlike begin
    for(auto it:x){
        std::cout<<it<<" ";
    }
    std::cout<<'\n';
   sort(x.begin(),x.end(), std::greater<int>()); //sorts in descending order
     for(auto it:x){
        std::cout<<it<<" ";
    }
    std::cout<<'\n';
    std::pair<int, int>p[]={{1,2},{2,1},{4,1}};
    //lets say we want to sort in our way, we will sort according to second element is ascending order, and if 2 second elements are same
    //we will sort according to first element in descening order. For this we need a comparator function
    sort(p, p+3, comp); //using comparator we made above
      for(int i=0; i<3; i++){
        std::cout<<'{'<<p[i].first<<" "<<p[i].second<<'}';
    } //sorted in our way using comparator
    std::cout<<'\n';
    int num=7;
    int count=__builtin_popcount(num); //returns no. of 1's in binary format aka setbits
    std::cout<<count<<'\n';
    long long  num1= 9798347298086968;
    int count1=__builtin_popcountll(num1); //for long long type this is done we add ll for popcount
    std::cout<<count1<<'\n';
    std::string s="687";
    sort(s.begin(), s.end()); //its important to sort before printing permuatations of a string
    do{
        std::cout<<s<<'\n';
    }while(next_permutation(s.begin(),s.end())); //this fo while prints all possible combinations of a string
    int max= *max_element(x.begin(), x.end()); //this function gives the max element in a range.
    //it goes like max_element(start, end), end not inclusive
    std::cout<<max;
    return 0;
}