#include <iostream>



int main() {

    //1. C++ 程序的模块叫什么 ? 函数
    //2. #include <iostream> 引入iostream库,在当前文件引入iostream文件,在最终编译前，使用iostream文件替换该编译指令
    //3. using namespace std 使用C++标准库 std,程序可以直接使用std的函数或变量而不需要使用std::
            //namespace是命名空间 用于标识库，防止和第三方的库冲突
    //4. 
        std::cout << "Hello world" << std::endl;
        std::cout << "Hello world\n";
    //5. 
        int chesses;
    //6.
        chesses = 32;
    //7.
        std::cin >> chesses;
    //8.
        std::cout << "We have" + std::to_string(chesses) + "of chesse";
        std::cout << "We have" << chesses << "of chesse";
    //9. 
        //int froop(double t); 返回值是int 函数名 参数是double类型
        //void rattle(int n); 没有返回值 函数名 rattle 参数是int类型
        //int prune(void); 返回值是int 函数名 参数是空
    //10. 函数定义需要返回值
    //11. main方法外 using namespace std; std::cout; main方法内使用 using namespace std;
}