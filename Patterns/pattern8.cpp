#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(char ch='A';ch<'A'+i+1;ch++){
            cout<<i;
            cout<<ch;
        }
        
        cout<<endl;
    }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
}