#include<iostream>
using namespace std;
//Time complexity is O(n) because the function is calling 'n' times
//Space complexity is O(n) beacause the 'n' functions are stored in stack overflow
void print(int num,int num1){
    int num2=num;
    int num3=num1;
    if(num3>num2){
        return;
    }
    cout<<"numbers are: "<<num3<<endl;
    num3++;
    print(num2,num3);
}
int main(){
    int num;
    int num1=1;
    cout<<"enter the number?"<<endl;
    cin>>num;
    print(num,num1);
    return 0;

}