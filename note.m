===========================================================
命名空间（Namespace）
    namespace 是C++中的关键字，用来定义一个命名空间，语法格式为：
        namespace name{
            //variables, functions, classes
        }
    使用变量、函数时要指明它们所在的命名空间。
        name::fp = fopen("one.txt", "r"); 
    或者声明
        using name::fp;
    接下来所使用的fp都是name中，使用其他空间的变量仍需要指明所在的命名空间
===========================================================
C++头文件和std命名空间
    标准写法
    #include <cstdio>
    int main(){
        std::printf("http://c.biancheng.net\n");
        return 0;
    }
    不标准写法
        printf("http://c.biancheng.net\n");
