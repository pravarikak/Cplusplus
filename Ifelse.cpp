#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job"<<"/n";
    }
    if(age>=18){
        cout<<"eligible for job"<<"/n";
    }
    if(age>=55&&age<=57){
        cout<<"eligible for job but retirement soon"<<"/n";
    }
    if(age>57){
        cout<<"retirement time"<<"/n";
    }
    return 0;
}