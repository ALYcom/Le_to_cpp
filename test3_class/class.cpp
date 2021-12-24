#include <iostream>
class Student{
public:
    const char *name;
    int age;
    float score;

};
int main(){
     using namespace std;
     Student *pStu = new Student;
     pStu -> name = "a";
     pStu -> age = 15;
     pStu -> score = 92.5f;
    cout<<pStu ->name<<"age is"<<pStu->age<<"/nscore"<<pStu->score<<endl;
    delete pStu;  //删除对象
    cout<<"C语言中文网"<<endl;
    return 0;
}