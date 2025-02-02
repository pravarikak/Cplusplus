#include<iostream>
using namespace std;
//these can be done in both methods one is parametrized and other is functional
void print(int num1,int sum1,int i1){
    if(i1>num1){
        cout<<sum1;
        return;
    }
    print(num1,sum1+i1,i1+1);

}
int print2(int num9){
    if(num9==0){
      return 0;
    }
    return num9+print2(num9-1);
}
int main(){
    int num;
    cout<<"Enter the number?";
    cin>>num;
    int sum=0;
    int i=0;
    //print(num,sum,i);
    cout<<print2(num);
    return 0;
}