#include <iostream>
using namespace std;

class Car {        // 类  
  public:          // 访问说明符  
    string brand;  // 属性  
    string model;  // 属性  
    int year;      // 属性  
    Car(string x, string y, int z) { // 带有参数的构造函数  
      brand = x;  
      model = y;  
      year = z;  
    }  
};  
  
int main() {  
  // 创建 Car 对象并使用不同的值调用构造函数  
  Car carObj1("BMW", "X5", 1999);  
  Car carObj2("Ford", "Mustang", 1969);  
  
  // 打印值  
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";  
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";  
  return 0;  
}