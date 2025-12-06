#include <iostream>
using namespace std;
class employee{
    private:int salary;
    public:void setSalary(int s){salary=s;};
    int getSalary(){
        return salary;
    }
};
int main(){
    employee e1;
    e1.setSalary(5000);
    cout<<e1.getSalary();
    return 0;
}