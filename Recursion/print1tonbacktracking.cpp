#include<iostream>
using namespace std;
//back tracking means we should not use ++ when we print from 1 to n but instead n,n and while print executing the function back.
void print(int num,int num3){
    int num1=num;
    int num2=num3;
    if(num1<1){
        return;
    }
    print(num1-1,num2);
    cout<<"The number is "<<num1<<endl;
}
int main(){
    
    int num;
    cout<<"Enter the number?"<<endl;
    cin>>num;
    int num3=num;
    print(num,num3);
    return 0;
}

