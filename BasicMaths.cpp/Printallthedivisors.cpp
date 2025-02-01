#include<iostream>
#include<vector>
using namespace std;
void print(int num){
for(int i=0;i<=num;i++){
    if(num%i==0){
        cout<<i<<endl;
    }
//Brute force method to print all the divisors
}
}
//We have a pattern if we loop until square root of 'n' elements and if we divide 'n/i' we will get another divisor
//For example it is '12'. if we get 'i' as 3 and the other divisor will be '12/3' that is 4 and if 'i' is 6 we get an another '6'. So we have to check is i!=n/i because will get another 6.
//we have store that in vector(because we don't know the size of vector) and sort that vector.
void method2(int num){
    vector<int> v;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            v.push_back(i);
            if((num/i)!=i){
                v.push_back(num/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v) cout<<it<<endl;
}
//We are doing method2 because the time complexity is O(sqrt(n))

int main(){
    int num;
    cout<<"Enter the number?"<<endl;
    cin>>num;
    method2(num);
}