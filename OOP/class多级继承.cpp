#include <iostream>
using namespace std;
class myClass{
    public:
    void myFunction() {
      cout << "父类中的一些内容。" ;
    }
};
class myChild: public myClass{
};
class myGrandChild: public myChild{
};
int main(){
    myGrandChild myObj;
    myObj.myFunction();
    return 0;
}
