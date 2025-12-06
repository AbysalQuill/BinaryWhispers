#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> myVector = {1,2,3,4,5};
    auto it = myVector.begin();
    advance(it,2);
    myVector.erase(it);
    //删除一段
    auto first =next(myVector.begin(),2);
    auto last =next(myVector.begin(),4);
    myVector.erase(first, last);
    cout << "删除后的数组为: "<<endl;
    for (int i:myVector){
        cout<<i<<" ";
    }
    //增加一段
    myVector.insert(myVector.begin(),{1,2,3});
    cout << "增加后的数组为: "<<endl;
    for (int i:myVector){
        cout<<i<<" ";
    }

}