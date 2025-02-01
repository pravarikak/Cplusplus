#include <iostream> 
#include<deque>
using namespace std;
void explainStack(){
    //Last In first out
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}
    cout<<st.top(); // 5
    

}
int main(){
    explainStack();
    return 0;
}