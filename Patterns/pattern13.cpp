#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        int value = i+1;
        char ch='A'+numberOfStars;
        for(int j=1;j<i+2;j++){
            if(j==i+1){
                cout<<(char)('A'+numberOfStars-i-1);
                }
            else{
            cout<<(char)('A'+numberOfStars+value--);
            }
        }
        cout<<endl;
    }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
}