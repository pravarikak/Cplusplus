#include <iostream>   // For input-output
#include <vector>
#include<queue> 
using namespace std;
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    
    q.back() += 5;
    cout<<q.back();// 9

    cout<<q.front(); //1

    q.pop();//2,9

    cout<< q.front();//2


}
int main(){
    explainQueue();
    return 0;
}