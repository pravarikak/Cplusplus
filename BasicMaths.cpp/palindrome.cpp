#include<iostream>
using namespace std;
bool ret(int x){
 int rev=0;
 int rem=0;
 bool b=true;
 int dup=x;//store x in duplicate
 while(x>0){
  rem=x%10;
  rev=rev*10+rem;
  x=x/10;
 }
 if(dup==rev){
    b=true;
}
 else{
    b=false;
 }
 return b;
}
int main(){
    bool b1=ret(123);
    cout<<b1;
}