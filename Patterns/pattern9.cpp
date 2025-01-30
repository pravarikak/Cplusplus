#include<iostream>
using namespace std;
void printing(int countOfStars){
    for(int i=0;i<countOfStars;i++){
        for(char ch='A';ch<'A'+countOfStars-i;ch++){
            cout<<ch;
            
        }
        cout<<endl;
    }
}
int main(){
    int countOfStars;
    cin>>countOfStars;
    printing(countOfStars);
}