#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(int j=1;j<=numberOfStars-i;j++){
            //cout<<j;
            cout<<"*";
        }
        cout <<endl;
    }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
    return 0;
}
//12345
//1234
//123
//12
//1

//*****
//****
//***
//**
//*