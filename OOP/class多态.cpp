#include <iostream>
using namespace std;
class Animal {
  public:
    void animalSound() {
      cout << "动物发出声音 \n";
    }
};

// 派生类
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "猪说：wee wee \n";
    }
};

// 派生类
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "狗说：bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}