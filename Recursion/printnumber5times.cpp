#include<iostream>
using namespace std;
//Time complexity is O(n) because the function is calling 'n' times
//Space complexity is O(n) beacause the 'n' functions are stored in stack overflow
void print(int count){
 int count1 = count;
 if(count1==5){
    return;
 }
 count1++;
 cout<<"prav"<<endl;
 print(count1);
}
int main(){
    print(count);
    return 0;
}