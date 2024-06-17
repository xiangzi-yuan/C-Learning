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
// //证明 #include 仅仅是复制粘贴
int main()
{
	int a = 8;
	a++;
	const char* c = nullptr;
	if (c)
	{
		std::cout << c << std::endl;
	}
	else if(a==9)
	{
		a++;
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << a << std::endl;
	}
	std::cin.get();
} 