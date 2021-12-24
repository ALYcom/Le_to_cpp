#include <stdio.h>
//将类定义在命名空间中
namespace Diy{
    class Student{
    public:
          int age;
        float score;
  
    public:
        void say(){
            printf("wi%d,%f\n", age, score);
        }
    };
}
int main(){
    Diy::Student stu1;
    stu1.age = 15;
    stu1.score = 92.5f;
    stu1.say();
    return 0;
}