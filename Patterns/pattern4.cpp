#include<iostream>
using namespace std;
void printing(int numberOfStars){
    for(int i=0;i<numberOfStars;i++){
        for(int j=0;j<((numberOfStars-i)-1);j++){
            //for space
            cout<<" ";
        }
        for(int k=0;k<((i*2)+1);k++){
            //for stars
            cout<<"*";
        }
        for(int l=0;l<((numberOfStars-i)-1);l++){
            //for space
            cout<<" ";
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
//    *    
//   ***   
//  *****  
// ******* 
//*********