#include <iostream> 
#include<deque>
using namespace std;
void deques(){
    deque<int> dq;
    dq.push_back(1);//{1}
    
    dq.push_front(4);//{4,1}
    

    dq.pop_back();//{3}

    cout<<dq.back()<<endl;

    cout<<dq.front()<<endl;
}
int main(){
    deques();
    return 0;
}