#include<iostream>
using namespace std;
void reverse(int num){
    int rem=0;
    int sum=0;
    while(num!=0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    cout<<sum;

}
int main(){
    int num;
    cout<<"Enter the number you want to reverse?"<<endl;
    cin>>num;
    reverse(num);
}