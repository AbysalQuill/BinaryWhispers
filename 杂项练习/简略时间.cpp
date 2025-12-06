#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t now=time(0);
    char* dt=ctime(&now);//获取当前时间
    cout<<"当前时间戳是："<<now<<endl;
    cout<<"当前时间是："<<dt<<endl;
    return 0;
}