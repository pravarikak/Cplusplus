#include <iostream>
using namespace std;
void printing(int numberOfStars){
 for(int i=0;i<numberOfStars;i++){
    
    for(int j=0;j<numberOfStars-i;j++){
        cout<<" ";
    }
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
    cout<<endl;
 }
    
        
        
}
int main(){
    int numberOfStars;
    cin>>numberOfStars;
    printing(numberOfStars);
}