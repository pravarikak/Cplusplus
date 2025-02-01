#include <iostream>   // For input-output
#include <vector>     // For vector operations
#include <map>        // For maps
#include <algorithm>  // For sorting and algorithms
using namespace std;
//Arrays size can't be increased so we use vectors
void vectors(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    //emplaceback is faster than pushback
    vector<pair<int,int> > vec;
    vec.emplace_back(1,2);
    vector<int> v1(5,100); //{100,100,100,100,100}
    vector<int> v2(5);//{0,0,0,0,0}
    vector<int> v3(5,20);//{20,20,20,20,20}
    vector<int> v4(v1);//copying of v4 in v1
    cout<<v4[0]<<endl;
    // we can also use iterator to traverse over vector
    vector<int>::iterator it =v1.begin();
    //it--> gives the adress(memory)
    //*it--> to get the element we need the star.
    it++;
    cout<<*it<<endl;
    // end location with point after last element to access last element we need to do it--
    cout<<v1.back()<<" "<<endl;
    //for loop through iterator
    for(vector<int>::iterator it =v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //"auto "--> it automatically defines the datatype
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    //for each loop
    for(auto it:v1){
        cout<<(it)<<endl;
    }

    // erase is used for deletion we can give address
    v.erase(v.begin()+1);
    // we want to delete the couple of elements
    //Deletes from first element to last element and doesn't include the last element but deletes before it
    //{10,20,12,23,35}
    v1.erase(v.begin()+2,v.begin()+4);//{10,20,35}
    
    //Insert Function
    vector<int>v5(2,100);//{100,100}
    v5.insert(v5.begin(),300);//{300,100,100}
    v5.insert(v5.begin()+1,2,10);//{300,10,100,100}

    //copy
    vector<int> copy(2,50);//{50,50}
    v5.insert(v5.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
    
    //size
    cout<<v5.size()<<endl;

    v5.pop_back();

    v1.swap(v2);
    v1.clear();
    cout<<v1.empty();


}
int main(){
    vectors();
    
}