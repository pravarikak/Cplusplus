//Algorithms
//Containers
//Functions
//Iterators
#include <iostream>   // For input-output
#include <vector>     // For vector operations
#include <map>        // For maps
#include <algorithm>  // For sorting and algorithms
using namespace std;
//Pairs are used to store couple of integers
void Pairs(){
pair<int,int> prav = make_pair(2, 24);
//cout<< prav.first<<endl;
//cout<<prav.second<<endl;

pair<int, pair<int, int> > p = make_pair(3, make_pair(2, 24));
//cout << "First value: " << p.first << endl << p.second.second<<endl << p.second.first; 

pair<int, int> arr[] = {make_pair(2, 3), make_pair(4, 5), make_pair(7, 8)};
cout<<arr[1].first<<endl;

}
int main(){
Pairs();
}