#include <iostream>
using namespace std;
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};
class car :public Vehicle{
  public:
    string model = "Mustang";
    void display(){
        cout<<"brand:"<<brand<<" model:"<<model<<endl;
    }
};
int main() {
  car myCar;
  myCar.honk();
  myCar.display();
  return 0;
}