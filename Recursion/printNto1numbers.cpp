#include<iostream>
using namespace std;
//Time complexity is O(n) because the function is calling 'n' times
//Space complexity is O(n) beacause the 'n' functions are stored in stack overflow
void print(int num1,int num2){
    int num3=num1;//5
    int num4=num2;//0
    if(num3<num4){
        return;
    }
    cout<<"The numbers are: "<<num3<<endl;
    num3--;
    print(num3,num4);
    
}
int main(){
    int num1;
    cout<<"enter the number?"<<endl;
    cin>>num1;
    int num2=1;
    print(num1,num2);
}