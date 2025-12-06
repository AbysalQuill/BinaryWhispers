#include <iostream>  
using namespace std;
int main(){
    struct 
    {   int mynum;
        string mystring;

        
    }mystruct;

    mystruct.mynum = 1;
    mystruct.mystring = "hello world";
    cout << mystruct.mynum << "\n" << mystruct.mystring;
    return 0;
    
}