#include<iostream>
using namespace std;
void printing(int numberOfStars){
for(int i=0;i<numberOfStars;i++){
    char ch = 'A'+i;
    for(int j=0;j<i+1;j++){
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