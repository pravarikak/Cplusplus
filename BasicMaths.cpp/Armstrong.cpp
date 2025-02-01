#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int num){
    int rev=0;
    int rem=0;
    int dup=num;
    int dump2=num;
    int rev1=0;
    int rem1=0;
    int count=0;
    bool b=true;
    while(dump2>0){
        count++;
        dump2=dump2/10;
    }
    
    while(num>0){
        rem=num%10;
        rev=rev+(pow(rem,count));
        num=num/10;
        
    }
    //cout<<rev;
    return dup==rev?true:false;
    

}
int main(){
    int num;
    cout<<"enter the number?"<<endl;
    cin>>num;
    bool b1=armstrong(num);
    cout<<b1;
}