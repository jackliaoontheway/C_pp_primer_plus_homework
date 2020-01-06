#include <iostream>
using namespace std;
int main() {
    //1.0 不同的值占的字节数不同 为了节省字节空间
    //2.0
        short sh = 80;
        unsigned in = 42110;
        long long l = 3000000000;
    //3.0 C++没有提供自动防止超出整数限制的功能，可以使用头文件 climits 来确定限制情况
    //4. 33L 和 33的区别  33L 是long 类型 33默认是int 类型
        long x = 33L;
        long long xx = 33LL;
        std::cout << xx << std::endl;
    //5. 不真正等价 在使用 ASCII码的系统上 65 = A； 65是int 常量，A 是 char 常量 
        char grade = 65;
        char grade2 = 'A';
        
        std::cout << (grade == grade2) << std::endl;
    //6. 找出 编码88 表示的字符？ 两种方法
        char c = 88;
        cout << c << endl;
        cout.put(char(88));
        cout << char(88) << endl;
        cout << (char)88 << endl;
    
    //7. 将long赋值给 float，long 赋值给 double，将 long long 赋值给double
        // long 的字节如果是4位则没有损失
        // 对于 double double提供了至少13位有效数字，没有损失
        // long long 超过了 double 的有效数字 有损失

    //8. 74,4,0,4.5,3
        std::cout << 8 * 9 + 2 << " , " << 6*3/4 << " , " << 3/4*6 << " , " << 6.0 * 3 / 4 << " , " << 15 % 4 << " , " << std::endl;
    
    //9. double 转 int 
        double x1 = 4.5;
        double x2 = 3.5;
        //1.0 转 int 后相加
        int x3 = (int)x1 * (int)x2; // == int x3 = int(x1) + int(x2);
        //2.0 double 相加后 转 int
        int x4 = (int)(x1 + x2);// == int x4 = int(x1 + x2);
        cout << x3 << endl;
    //10.
        auto cars = 15;//int
        auto iou = 150.37f;//float
        auto level = 'B'; //char
        //auto crat = '/u000002155'; char32_5
        auto fract = 8.25f / 2.5; // double
}
