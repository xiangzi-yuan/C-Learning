#include <iostream>
//void Log(const char* message);
// int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}
//int main() 
//{
//	/*std::cout << Multiply(5, 8) << std::endl;*/
//	std::cin.get();
//#include "EndBrace.h"
//// //证明 #include 仅仅是复制粘贴
//int main()
//{
//	int a = 8;
//	a++;
//	const char* c = nullptr;
//	if (c)
//	{
//		std::cout << c << std::endl;
//	}
//	else if(a==9) //"else if" is just that "else" and "if" in the same line;
//	{
//		a++;
//		std::cout << a << std::endl;
//	}
//	else
//	{
//		std::cout << a << std::endl;
//	}
//	std::cin.get();
//} 
//int main()
//{
//	for (int i = 0; i < 5; i++) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		std::cout << i << std::endl;
//	}
//	// i是临时变量
//	// std::cout << i << std::endl;  ->error C2065: “i”: 未声明的标识符
//	//  equal
//	int i = 0;
//	for (; i < 5; ) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//	}
//	// equal
//	i = 0;
//	bool flag = true;
//	for (; flag; ) //第三部分是下一次循环前会执行的代码
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//		if (!(i < 5)) flag = false;
//	}
//	std::cin.get();
//}
//int main ()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		std::cout << "iloveyou" << std::endl;
//		i++;
//	}
//	
//	do // 至少执行一次
//	{
//		std::cout << "metoo" <<std::endl;
//	} while (false);
//	std::cin.get();
//}

// 15 continue break return
//int main()
//{
//	for (int i = 0; i < 5; i++) //第三部分是下一次循环前会执行的代码
//	{
//		if (i > 2)
//			continue; // 只要运行到 continue 就开始了下一次循环的迭代
//		std::cout << "Hello World!"<<std::endl;
//		std::cout << i << std::endl;
//	}   
//}
// 16 pointer  所有类型的指针都是一个整数，存放一个内存地址,与类型无关
//int main()
//{ 
//	int var = 8;
//	int* ptr = &var;
//	*ptr = 10; 
//
//	std::cout << var << std::endl;
//	std::cin.get();
//}
//int main()
//{
//	char* buffer = new char[8]; // 8 bytes
//	memset(buffer, 0, 8); // 0x00
//	// 为指定区域分配数据 ptr,data,size
//	char** ptr = &buffer;
//
//	delete[] buffer;
//	
//	std::cin.get();
//}
//-----------------------
//void Increment(int value)
//{
//	value++;
//}
//void Increment2(int* value)
//{
//	(*value)++;
//}
//void Increment3(int& value)
//{
//	value++;
//}
//int main()
//{
//	int a = 8;
//	Increment(a); // a没有增加，只是value增加了
//	std::cout << a << std::endl;
//	Increment2(&a); // a增加,传地址
//	std::cout << a << std::endl;
//	Increment3(a); // a增加,传数值给引用
//	std::cout << a << std::endl;
//
//	int& ref = a; // 别名,这个 ref 变量并不真正存在，它只存在在我们的源码里
//	int b = 8;
//	std::cout << ref << std::endl;
//	// 还有一件重要的事就是一旦你声明了一个引用，你就不能更改它所引用的对象
//	//int& ref = b;
//	//std::cout << ref << std::endl;
//	//std::cin.get();
//	int* ref1 = &a;
//	*ref1 = 2;
//	ref1 = &b;
//	*ref1 = 100;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//}
//----------------

// 18 class:类是一种将数据和函数组织在一起的方式
//
//class Player
//{ // 默认情况下，类中的成员的访问控制都是私有的,意味着只有类内部的函数才能访问这些变量,需要public
//public:
//	int x, y;
//	int Speed;
//	// 类内的函数称作 method (方法)
//	void Move(int xa, int ya) 
//	{
//		x += xa;
//		y += ya;
//	}
//};
//int main() 
//{
//	Player player; // 由类类型制成的变量叫做对象,新创建的过程叫做实例化
//	player.x = 0;
//	player.y = 0;
//	player.Move(1, 1);
//}
//// C只有结构体而且结构体不能有方法，C++的结构体可以有方法,C++结构体和Class的唯一区别是前者默认public，后者默认private

// 20 Log Class
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = LogLevelInfo; // m 前缀 A 一般表明这是个私有的类成员变量
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= LogLevelError)
//		std::cout << "[ERROR]:" << message << std::endl;
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= LogLevelWarning)
//		std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//		std::cout << "[INFO]:" << message << std::endl;
//	}
//
//
//
//
//};
//int main()
//{
//
//	Log log;
//	log.SetLevel(log.LogLevelInfo);
//	log.Warn("Hello!");
//	log.Error("World!");
//	log.Info("Iloveyou!");
//	std::cin.get();
//}
// 21 static: 类外的 static 修饰的符号在 link 阶段是局部的 , 也就是它只对定义它的编译单元 (. ob) 可见
//    而类或者结构体里面的 static , 表示这部分内存是这个类的所有实例共享的,简单来说，就算你实例化了很多
//    次这个类或结构体 , 但那个静态 (static) 变量只会有一个实例
// s 开头的命名表示这个变量是 staticl 的

/*在C++中，static关键字有多种用途，但主要用于控制变量的存储期和可见性。这里讨论的是static在类外和类内使用时的不同含义。
类外的static
当static用于类外的全局变量或函数时，它将该变量或函数的链接性从外部链接性改为内部链接性。这意味着这些静态全局变量或函数
只在定义它们的编译单元（通常是一个.cpp文件及其包含的头文件）内可见。即使其他编译单元声明了相同名称的外部变量或函数，它
们也是不同的实体。这有助于避免全局命名空间的污染，同时允许在不同的编译单元中使用相同的名称。
类内的static
当static用于类或结构体内部的成员变量时，它改变了成员变量的存储期和作用域。这样的静态成员变量不属于类的任何单个实例，而
是由该类的所有实例共享。无论创建了多少个类的实例，静态成员变量只有一个副本。这对于存储类级别的状态（例如，计数类的实例
数量）非常有用。
静态成员函数也类似，它们不属于类的任何单个实例。因此，静态成员函数只能访问类的静态成员变量和其他静态成员函数。它们不能
访问类的非静态成员变量或函数，因为这些成员需要一个类的实例才能存在。*/

//extern int s_Variable; // If Static.cpp contains the static keyword, there will be an error.
//void Function()
//{
//
//}
//// 尽量让全局函数和变量用 static 标记
//int main() 
//{
//	
//	std::cout << s_Variable << std::endl;
//	std::cin.get();
//}

struct 
{

};