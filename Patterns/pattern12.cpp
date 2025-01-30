#include<iostream>
using namespace std;
void printing(int numberOfStars){
   for(int i=0;i<(numberOfStars*2)-1;i++){
      int stars=i+1;
      if(i>numberOfStars-1)stars=2*numberOfStars-i-1;
      for(int j=0;j<stars;j++){
        cout<<"*";
      }
      cout<<endl;
   }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
}
//*
//**
//***
//****
//*****
//****
//***
//**
//*