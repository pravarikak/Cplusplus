#include<iostream>
using namespace std;
//this can be done in in two methods one is parametrized and functional
void print(int num,int product){
    if(num<1){
        cout<<product;
        return;
    }
    print(num-1,product*num);
}
int print2(int num2){
    if(num2==1){
        return 1;
    }
    return num2*print2(num2-1);
}

int main(){
    int num;
    int product=1;
    cout<<"enter the number?"<<endl;
    cin>>num;
    print(num,product);
    print2(num);
    
}