#include <iostream>

using namespace std;

class Test
{
public:
    Test() : y(1), r(y), d(3){} //对于常量型成员变量和引用型成员变量，必须通过参数化列表的方式进行初始化。
    ~Test(){}

    int y;      //普通变量成员
    int &r;     //引用成员变量
    const int d;    //常量成员变量
    static int c;   //静态成员变量
    static const int x = 2.1;   //静态常量整型成员变量
    static const int xx;        //静态常量整型成员变量声明
    static const double z;  //静态常量非整型成员变量声明
    //static const float zz = 6.6;    //静态常量非整型成员变量 - 导致编译不通过
};


const int Test::xx = 4; //静态常量整型成员变量定义
const double Test::z = 5.1; ////静态常量非整型成员变量定义
int Test::c = 2;

int main(void)
{
    cout << Test::x << endl;    

    return 0;
}