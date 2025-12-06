#include <iostream>  
#include <fstream>  
using namespace std;  
  
int main() {  
  // 创建并打开一个文本文件  
  ofstream MyFile("filename.txt");  
  
  // 写入文件  
  MyFile << "Files can be tricky, but it is fun enough!";
  
  // 关闭文件  
  MyFile.close();  
}
