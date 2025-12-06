#include <iostream>
using namespace std;
class myClass{
    public:
    void myFunction() {
      cout << "父类中一些内容。" ;
    }
};
class myOtherClass{
    public:
    void myOtherFunction() {
      cout << "另一个类中一些内容。" ;
    }
};
class myChild: public myClass, public myOtherClass{
};
int main(){ 
    myChild myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}