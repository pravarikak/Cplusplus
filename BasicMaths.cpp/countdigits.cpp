#include<iostream>
using namespace std;
//Time complexity for this problem is O(log10(N)) because the problem is divided by 10;
// whenever if the problem is divided by 2 then the complexity will be O(log2(N))
void countdigits(int num){
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    //cout<<count<<endl;
}
void method2(int num){
    int count2=(int)(log10(num)+1);
    cout<<count2<<endl;
}
int main(){
    int num;
    cout<<"Enter the number where you want to count the number of digits for a number?"<<endl;
    cin>>num;
    method2(num);
    countdigits(num);
}
