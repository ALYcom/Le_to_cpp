#include <iostream>
void func(){
    //必须重新声明
    using namespace std;
    cout<<"http://c.biancheng.net"<<endl;
}
int main(){
    //声明命名空间std
    using namespace std;
   
    cout<<"C语言中文网"<<endl;
    func();
    return 0;
}