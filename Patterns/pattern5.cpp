#include<iostream>
using namespace std;
void printing(int numberOfStars){
   for(int i=numberOfStars;i>=0;i--){
        for(int j=0;j<numberOfStars-i;j++){
            //for space
            cout<<" ";
        }
        for(int k=0;k<=((i*2)+1)-1;k++){
            //for stars
            cout<<"*";
        }
        for(int l=0;l<numberOfStars-i;l++){
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
//*********** 
// *********  
//  *******   
//   *****    
//    ***     
//     *      