#include<iostream>
using namespace std;
void extract(int num){
   int count=0;
   int digit;
   while(num>0){
   count=count+1;
   digit=num%10;
   num=num/10;
   cout<<digit<<endl;
   }
   
}
int main(){
    int num;
    cout<<"enter the number to which you want to extract digits?"<<endl;
    cin>>num;
    extract(num);
    return 0;
}