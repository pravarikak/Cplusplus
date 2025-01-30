#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(int j=0;j<numberOfStars;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
    return 0;
}
//* * * * * 
//* * * * * 
//* * * * * 
//* * * * * 
//* * * * * 