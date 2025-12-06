#include <iostream>
using namespace std;
class MyClass {  
  public:    // 公共访问说明符  
    int x;   // 公共属性  
  private:   // 私有访问说明符  
    int y;   // 私有属性  
};  
int main() {  
  MyClass myObj;  
  myObj.x = 25;  // 允许（公共的）  
  //myObj.y = 50;不允许（私有的）  
  return 0;
}