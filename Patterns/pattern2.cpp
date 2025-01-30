#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(int j=1;j<=i+1;j++){
            //cout<<"*";
            //cout<<j;
            cout<<i+1;
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
//*
//**
//***
//****
//*****
//1
//12
//123
//1234
//12345
//1
//22
//333
//4444
//55555