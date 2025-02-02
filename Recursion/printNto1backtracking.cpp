#include<iostream>
using namespace std;
void print(int num2,int num3){
if(num3>num2){
    return;
}
print(num2,num3+1);
cout<<num3;
}
int main(){
    int num;
    int num1;
    cout<<"enter the number?";
    cin>>num;
    num1=1;
    print(num,num1);
}