#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=numberOfStars-i-1;j>0;j--){
            cout<<"-";
        }
        for(int j=numberOfStars-i-1;j>0;j--){
            cout<<"-";
        }
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
    return 0;
}
//1--------1
//12------21
//123----321
//1234--4321
//1234554321