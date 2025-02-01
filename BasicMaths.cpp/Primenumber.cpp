#include<iostream>
using namespace std;
void print(int num){
    int count=0;
  for(int i=0;i*i<=num;i++){
    if(num%i==0){
        count++;
    }
  }
  
  if(count<=2) cout<<"is prime";
  else cout<<"not prime";
}
// Time complexity is O(sqrt(n))
int main(){
    int num;
    cout<<"Enter the number?"<<endl;
    cin>>num;
    print(num);
}