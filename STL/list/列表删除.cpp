#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main(){
    list<int> myList = {1,2,3,4,5};
    auto it = myList.begin();
    advance(it,2);
    myList.erase(it);
    //删除一段
    auto first =next(myList.begin(),2);
    auto last =next(myList.begin(),4);
    myList.erase(first, last);
    for (int i:myList){
        cout<<i<<" ";
    }
    return 0;
}