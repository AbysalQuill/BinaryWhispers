#include <iostream>
#include <memory>
using namespace std;

class TestClass {
public:
    TestClass(int val) : value(val) {
        cout << "TestClass对象创建，值为：" << value << endl;
    }
    
    ~TestClass() {
        cout << "TestClass对象销毁，值为：" << value << endl;
    }
    
    int value;
};

int main()
{
    cout << "创建unique_ptr管理对象..." << endl;
    unique_ptr<TestClass> up(new TestClass(10));
    cout << "对象值：" << up->value << endl;
    
    unique_ptr<TestClass> up2;
    cout << "转移所有权..." << endl;
    up2 = move(up); // 转移所有权
    cout << "up2对象值：" << up2->value << endl;
    
    // 此时up为空，不能访问
    if(up == nullptr) {
        cout << "up现在是空指针" << endl;
    }
    cout << "main函数结束，将自动释放up2管理的对象..." << endl;
} // up2在此处超出作用域，其析构函数会自动调用，释放它管理的对象