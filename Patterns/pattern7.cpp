#include<iostream>
using namespace std;
void printing(int numberOfStars){
    int count=0;
    for(int i=0;i<numberOfStars;i++){
        for(int j=0;j<i+1;j++){
            count++;
            cout<<count <<" ";
        }
        cout<<endl;
    }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
}
//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15 