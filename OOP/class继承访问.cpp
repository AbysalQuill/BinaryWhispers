#include <iostream>
using namespace std;
class employee{
protected:int salary; 
};
class Programmer:public employee{
public:
    int bonus;
    void setSalary(int s){salary=s;}
    int getSalary(){
        return salary;
    }
};
int main(){
    Programmer p1;
    p1.setSalary(50000);
    p1.bonus=5000;
    cout<<p1.getSalary()<<endl;
    cout<<p1.bonus;
    return 0;
}
