#include <iostream>
#include <array>
#include <string>
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
//// //֤�� #include �����Ǹ���ճ��
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
//	for (int i = 0; i < 5; i++) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		std::cout << "Hello World!" << std::endl;
//		std::cout << i << std::endl;
//	}
//	// i����ʱ����
//	// std::cout << i << std::endl;  ->error C2065: ��i��: δ�����ı�ʶ��
//	//  equal
//	int i = 0;
//	for (; i < 5; ) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//	}
//	// equal
//	i = 0;
//	bool flag = true;
//	for (; flag; ) //������������һ��ѭ��ǰ��ִ�еĴ���
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
//	do // ����ִ��һ��
//	{
//		std::cout << "metoo" <<std::endl;
//	} while (false);
//	std::cin.get();
//}

// 15 continue break return
//int main()
//{
//	for (int i = 0; i < 5; i++) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		if (i > 2)
//			continue; // ֻҪ���е� continue �Ϳ�ʼ����һ��ѭ���ĵ���
//		std::cout << "Hello World!"<<std::endl;
//		std::cout << i << std::endl;
//	}   
//}
// 16 pointer  �������͵�ָ�붼��һ�����������һ���ڴ��ַ,�������޹�
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
//	// Ϊָ������������� ptr,data,size
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
//	Increment(a); // aû�����ӣ�ֻ��value������
//	std::cout << a << std::endl;
//	Increment2(&a); // a����,����ַ
//	std::cout << a << std::endl;
//	Increment3(a); // a����,����ֵ������
//	std::cout << a << std::endl;
//
//	int& ref = a; // ����,��� ref ���������������ڣ���ֻ���������ǵ�Դ����
//	int b = 8;
//	std::cout << ref << std::endl;
//	// ����һ����Ҫ���¾���һ����������һ�����ã���Ͳ��ܸ����������õĶ���
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

// 18 class:����һ�ֽ����ݺͺ�����֯��һ��ķ�ʽ
//
//class Player
//{ // Ĭ������£����еĳ�Ա�ķ��ʿ��ƶ���˽�е�,��ζ��ֻ�����ڲ��ĺ������ܷ�����Щ����,��Ҫpublic
//public:
//	int x, y;
//	int Speed;
//	// ���ڵĺ������� method (����)
//	void Move(int xa, int ya) 
//	{
//		x += xa;
//		y += ya;
//	}
//};
//int main() 
//{
//	Player player; // ���������Ƴɵı�����������,�´����Ĺ��̽���ʵ����
//	player.x = 0;
//	player.y = 0;
//	player.Move(1, 1);
//}
//// Cֻ�нṹ����ҽṹ�岻���з�����C++�Ľṹ������з���,C++�ṹ���Class��Ψһ������ǰ��Ĭ��public������Ĭ��private

// 20 Log Class
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = LogLevelInfo; // m ǰ׺ A һ��������Ǹ�˽�е����Ա����
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
// 21 static: ����� static ���εķ����� link �׶��Ǿֲ��� , Ҳ������ֻ�Զ������ı��뵥Ԫ (. ob) �ɼ�
//    ������߽ṹ������� static , ��ʾ�ⲿ���ڴ�������������ʵ�������,����˵��������ʵ�����˺ܶ�
//    ��������ṹ�� , ���Ǹ���̬ (static) ����ֻ����һ��ʵ��
// s ��ͷ��������ʾ��������� staticl ��

/*��C++�У�static�ؼ����ж�����;������Ҫ���ڿ��Ʊ����Ĵ洢�ںͿɼ��ԡ��������۵���static�����������ʹ��ʱ�Ĳ�ͬ���塣
�����static
��static���������ȫ�ֱ�������ʱ�������ñ��������������Դ��ⲿ�����Ը�Ϊ�ڲ������ԡ�����ζ����Щ��̬ȫ�ֱ�������
ֻ�ڶ������ǵı��뵥Ԫ��ͨ����һ��.cpp�ļ����������ͷ�ļ����ڿɼ�����ʹ�������뵥Ԫ��������ͬ���Ƶ��ⲿ������������
��Ҳ�ǲ�ͬ��ʵ�塣�������ڱ���ȫ�������ռ����Ⱦ��ͬʱ�����ڲ�ͬ�ı��뵥Ԫ��ʹ����ͬ�����ơ�
���ڵ�static
��static�������ṹ���ڲ��ĳ�Ա����ʱ�����ı��˳�Ա�����Ĵ洢�ں������������ľ�̬��Ա��������������κε���ʵ������
���ɸ��������ʵ���������۴����˶��ٸ����ʵ������̬��Ա����ֻ��һ������������ڴ洢�༶���״̬�����磬�������ʵ��
�������ǳ����á�
��̬��Ա����Ҳ���ƣ����ǲ���������κε���ʵ������ˣ���̬��Ա����ֻ�ܷ�����ľ�̬��Ա������������̬��Ա���������ǲ���
������ķǾ�̬��Ա������������Ϊ��Щ��Ա��Ҫһ�����ʵ�����ܴ��ڡ�*/

//extern int s_Variable; // If Static.cpp contains the static keyword, there will be an error.
//void Function()
//{
//
//}
//// ������ȫ�ֺ����ͱ����� static ���
//int main() 
//{
//	
//	std::cout << s_Variable << std::endl;
//	std::cin.get();
//}

//struct Entity
//{
//	static int x;
//	static int y;
//	static void Print() // ��̬�������ܷ��ʷǾ�̬����
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//int Entity::x;
//int Entity::y;
//int main()
//{
//	Entity e;
//	Entity::x = 2;
//	Entity::y = 3;
//	Entity::Print();
//
//	Entity e1;
//	Entity::x = 5;
//	Entity::y = 8;
//	Entity::Print();
//
//	std::cin.get();
//}
// 22
//struct Entity
//{
//	int x;
//	int y;
//	static void Print() // ��̬�������ܷ��ʷǾ�̬����  ��̬����û���Ǹ����ز��� (this)
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//static void Print(Entity e) // �Ǿ�̬�������������з�ʽ
//{
//   std::cout << e.x << ", " << e.y << std::endl;
//}
//
//int main()
//{
//	Entity e;
//	e.x = 2;
//	e.y = 3;
//	Print(e); 
//
//	Entity e1;
//	e1.x = 5;
//	e1.y = 8;
//	Print(e1);
//
//	std::cin.get();
//}

// git:
/* ��ȡ��fetch������Զ�̻�ȡ���°汾�ļ������أ����Զ��ϲ������°汾�ڡ���֧��ѡ����
��remotes/origin���ļ����¿��Բ鿴������ѡ����ϲ���master��֧�ϡ�

��ȡ��pull����Զ�ֿ̲���ȡ���°汾�ļ������أ��Զ��ϲ�/merge��

����ߵ���������ȡ��pull�������Զ��ϲ��򸲸Ǳ��ش��룬���ǽ��䴢���ڷ�֧ѡ��У�
������������ѡ��ϲ������Ա����ƶ��뱾��һЩ�������ͻʱ�����ݶ�ʧ��

����ȡ��pull�����Ǳ����ϲ����������Ŀ������һ�˽��п�������ô����ȡ��pull�������㣬
��Ϊû�������˵ĸĶ���������Ǻ��Ŷ�һ��Э��������������ȡ��fetch�����������𲻱�
Ҫ�ĳ�ͻ��

���ͼ������زֿ��ϴ����ƶˣ�ͬ��������ȡ�������������衣

ͬ���أ������һ�˿�����Ŀ�����߽�������ͬ�����ش��뵽�ƶˣ������;��㹻�ˡ�

��������Ŷ�Э����������ôǿ�ҽ���ʹ��ͬ����������ȡ�����ͣ���Ȼ���ܻ������Ŀ������
����δ�����µ��ƶ˲ֿⱣ��һ�µ���ʾ��*/

// 23 Local Static 
// ����̬�ֲ� (local static) ����������������һ������,�����������������������������,
// �������������������������

/*
���� ������Ҫȫ�ֱ���
�ֲ���Ҫ�κ��˶��ܷ��ʵ��������ʱ
������ھֲ�����������������̬����*/
//void Function ()
//{
//	static int i = 0;
//	int j = 0;
//	i++;
//	j++;
//	std::cout << i << std::endl;
//	std::cout << j << std::endl;
//}
//
//int main()
//{
//	Function();
//	Function();
//	std::cin.get();
//}

// 24 ENUMS ö�� 
// Ĭ������£���һ��������ֵ�� 0��Ȼ�������������һ����һ���ĵ��� (1,2,3.)
//enum Example :int 
//{
//	A = 5, B, C
//};
//int main()
//{
//	if (B == 6) 
//	{
//		std::cout << A << std::endl;
//	}
//	std::cin.get();
//}


//class Log
//{
//public:
//	enum level // ������ͨ��ö����˵��Level ����һ�������ռ�
//	{
//		levelError, levelWarning , levelInfo
//	};
//private:
//	level m_LogLevel = levelInfo; // m ǰ׺ A һ��������Ǹ�˽�е����Ա����
//public:
//	void SetLevel(level level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= levelError)
//			std::cout << "[ERROR]:" << message << std::endl;
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= levelWarning)
//			std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= levelInfo)
//			std::cout << "[INFO]:" << message << std::endl;
//	}
//};
//int main()
//{
//
//	Log log;
//	log.SetLevel(Log::levelError);
//	log.Warn("Hello!");
//	log.Error("World!");
//	log.Info("Iloveyou!");
//	std::cin.get();
//}

// 25 ���캯�� : ���캯����һ������ķ�����������ÿ��ʵ������ʱ������,�����������������
// һ��

//class Entity
//{
//public:
//	float X, Y;
//
//	Entity() // Ĭ�ϻ���һ��ʲôҲ�����Ĺ��캯��
//	{
//		X = 0.0f;
//		Y = 0.0f;
//	}
//// �ҿ���д�ܶ�����캯��,����Ҫ�������ṩ��ͬ�Ĳ����������дͬ��������һ
////  ����,��ʵ��к������أ�������ͬ�ĺ������в�ͬ�Ĳ����Ĳ�ͬ�汾����,
//	Entity(float x, float y) 
//	{
//
//		X = x;
//		Y = y;
//	}
//	void Print()
//	{
//		std::cout << X << "," << Y << std::endl;
//	}
//};
//class Log
//{
////���ع��캯��
////1.
//private:
//	Log(){}
////2.
//	Log() = delete;
//};
//int main()
//{
//	Log l;
//	Entity e(10,5);
//	e.Print();
//
//}

// 26 ��������(destructor)
// ���κ�ʱ�򣬵�һ���������ٵ�ʱ�������������ᱻ����
//class Entity
//{
//public:
//	float X, Y;
//
//	Entity() // Ĭ�ϻ���һ��ʲôҲ�����Ĺ��캯��
//	{
//		X = 0.0f;
//		Y = 0.0f;
//		std::cout << "Created Entity !" << std::endl;
//	}
//	
//
//	~Entity()
//	{
//		std::cout << "Destroyed Entity !" << std::endl;
//	}
//	void Print()
//	{
//		std::cout << X << "," << Y << std::endl;
//	}
//};
//void Function()
//{
//	Entity e;
//	e.Print();
//}
//int main()
//{
//	Function();
//	std::cin.get();
//}
//
// 27 �̳�
//class Entity
//{
//public:
//	float X, Y;
//
//	void Move(float xa, float ya)
//	{
//		X = X + xa;
//		Y = Y + ya;
//	}
//};
//class Player : public Entity
//{
//public:
//	const char* Name;
//
//	void PrintName()
//	{
//		std::cout << Name << std::endl;
//	}
//};
//int main()
//{
//	std::cout << sizeof(Player) << std::endl;
//	Player e;
//	e.Move(1,2);
//	e.PrintName();
//
//
//
//	std::cin.get();
//
//}

// 28 �麯�� ���麯����������������������д������B��A�����࣬���������A�����½�һ����
// �����������Ϊ�麯�������ǿ�Ҳ�� B ������д���������ȥ��Щ���������顣
//class Entity
//{
//public:
//	virtual std::string GetName() { return "Entity"; }
//	// ���û�� virtual�����ӡ����"Entity",ԭ������������������������������򷽷�,���������
//	// ������ʱ�������ǻ�ȥ��������������͵ķ���,�������PrintName���������Ĳ���
//	// ������Entity*,��ζ���������Entity�ڲ���GetName��������ֻ����Entity���ڲ�Ѱ
//	// �Һ͵���GetName
//
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//int  main ()
//{
//	Entity* e = new Entity();
//	PrintName(e);
//
//	Player* p = new Player("YUAN");
//	PrintName(p);
//	std::cin.get();
//
//}
// 29 ���麯��:����������������У�����һ��ֻ����δʵ�ַ���,Ȼ��������ȥʵ��ʵ�ֹ��ܵ����Ƿǳ��ձ��

//class Entity
//{
//public:
//	virtual std::string GetName() = 0; // =0 ʵ���Ͻ��������һ�����麯��,����ʵ����,�������ʵ��������࣬��ô�����������
//									   // ��������ʵ��,δʵ�ִ˷���������Ҳ������ʵ����,��ֻ��ʵ����һ��ʵ�������д��麯������
//
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//	void Sample() 
//	{
//
//	}
//
//};
//
//void PrintName(Entity* entity)
//{
//	std::cout << entity->GetName() << std::endl;
//}
//int  main ()
//{
//
//
//	Player* p = new Player("YUAN");
//	PrintName(p);
//	std::cin.get();
//
//}
// -------------------------
//class Printable
//{
//public:
//	virtual std::string GetClassName() = 0;
//};
//class Entity : public Printable
//{
//public:
//	virtual std::string GetName() { return "Entity"; }
//	std::string GetClassName() override { return "Entity"; }
//};
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name) { m_Name = name; }
//	std::string GetName() { return m_Name; }
//	std::string GetClassName () override {return "Player";}
//	// �������û����д����ķ������Ͱ�����ķ�����ӡ
//};
//void Print(Printable* obj)
//{
//	std::cout << obj->GetClassName() << std :: endl;
//}
//
//int main()
//{
//	Entity* e = new Entity();
//	Entity* p = new Player("YUAN");
//	Print(e);
//	Print(p);
//	//Print(new A());
//	std::cin.get();
//}
// 30 �ɼ��� private, protected, public
// �����privateֻ���Լ���friend���Է��ʣ�������Ҳ����
// protected����˼���������Լ��������������඼���Է��ʵ���Щ��Ա

// 31 ����
//class Entity
//{
//public:
//	int* MemoryIndirection = new int[5];
//	Entity ()
//	{
//		int a[5];
//		int count = sizeof(a) / sizeof(int); // ջ���������ַ�ʽ�����С��sizeof(a)�õ�20
//		int MemoryIndirectioncount = sizeof(MemoryIndirection) / sizeof(int); // �Ѳ��������ַ�ʽ�����С
//		// sizeof(MemoryIndirection) �õ������ָ���С4
//	    for (int i = 0; i < 5; i++)
//		{
//			MemoryIndirection[i] = 2;
//			
//		}
//		std::cout << count << std::endl;
//		std::cout << MemoryIndirectioncount << std::endl;
//	}
//
//};
//int main()
//{
//	int example[5];
//	int* ptr = example;
//
//	for (int i = 0; i < 5; i++)
//	{
//		example[i] = 2;
//	}
//	example[2] = 5;
//	*(ptr + 2) = 6; // ��ô������Ϊ������ָ��ʱ��ֻҪ��ָ���ϼ�����2������ֵ
//					//���������������������ʵ�ʵ��ֽ���������������Ϊ���ָ
//					// ��������ָ�����Ի��Ǽ���2����4����Ϊÿ��������4�ֽ�
//	*(int*)((char*)ptr + 8) = 9;
//
//	std::cout << example[2] << std::endl;
//	std::cout << example << std::endl;
//	int* another = new int[5]; //�����ڶ��ϣ�����һֱ��ֱ�����ǰ������ٻ��߳������
//	delete[] another;
// /* ������и�����Ҫ�����´��������飬��ô�����Ҫʹ��new�����䣬
//�����㴫��Ĳ�����һ���ڴ��ַ */
//// ��һ��Ҫ���ǵ���memory indirection(�ڴ���Ѱַ) 
//	Entity e;
//
////  Cherno's method
//	static const int exampleSize = 5;
//	int chernoexample[exampleSize];
//
////  std::array 
//	std::array<int, 100> stdarray;
//	std::cout << stdarray.size() << std::endl;
//	std::cin.get();
//}
// 32 �ַ��� �ַ�����char��ɵ�����
//void Printstring(std::string string)
//{
//	string + "h";
//	std::cout << string << std::endl;
//	// ���������ַ����Ŀ���
//}
//
//void Printstring(const std::string& string)
//{
//	string + "h";
//	std::cout << string << std::endl;
//	// ���������ַ����Ŀ���
//}
//
//int main()
//{
//	std::cout << sizeof(char) << std::endl;
//	std::cout << sizeof(int) << std::endl;
//	const char* name = "ch";  // C++�е��ַ����õ����ţ�����˫���ţ�˫����Ĭ���� char ָ��
//	// �ڴ�Ϊ ab a9 00 �и�����ֹ��,�ڴ������λ��
//	char name2[7] = { '0','h','\0','r','n','o', 0};
//	std::cout << name2 << std::endl;
//
//	std::string name3 = "BAGA";
//	std::cout << name3 << std::endl;
//	// �ַ���׷�� 
//	std::string name4 = "Cherno"; // ��ʼ���ַ���
//	name4 += "hello!"; // ʹ�� += �����ƴ���ַ���
//	std::cout << name4 << std::endl;
//	std::string name5 = std::string("Cherno") + "hello!";
//	std::cout << name5 << std::endl;
//
//
//}
//// 33 �ַ���������
//int main()
//{
//	const char* name = "Cherno";  // ָ�붨��
//	std::cout << name << std::endl;
//
//	char name2[] = "Cherno"; // ���鶨��
//	name2[2] = 'a';
//	//name[2] = 'a'; �������޸�const char*�Լ�char*
//	std::cout << name2 << std::endl;
//	
//	const wchar_t* name3 = L"cherno"; //���ַ�
//	const char16_t* name4 = u"Cherno"; 
//	//or
//	const char* name5 = u8"Cherno";  // ָ�붨��
//	const char32_t* name6 = U"Cherno";
//	using namespace std::string_literals;
//	std::string name7 = "Cherno"s + "yuan";
//	const char* name8 = R"(line1
//line2)";
//	// ==
//	const char* name9 = "Line1\n"
//		"Line2\n"
//		"Line3\n";
//	std::cout << name8 << std::endl;
//	std::cout << name9 << std::endl;
//
//	std::cin.get();
//}
//// 34 const : ��ŵ����
////    1. ���ֳ�������
////		const int MAX AGE 90;
////    2. ��ָ֤������ݲ��䣨����ָ֤��ָ���λ�ò��䣩
////      const int* a = new int;
////       ��ָ֤���λ�ò��䣨����֤���ݣ�
////      int* const a = new int;
////      const int���� int const����ͬһ����˼
////      const int* const a 
////    3. ���е�const
////      ��const���ڷ��������ұߣ��ڲ����б�ĺ���д��const
////      ˳��˵һ�£���ֻ�������������ô�ã���ζ���������ֻ
////      �ܴ����ж�ȡ���ݣ������޸�����
//class Entity {
//private:
//	int m_X, m_Y;
//	int* m_x, * m_y; //����������ָ��
//	int* x, y;//������1��ָ��,1��int
//	mutable int var; //������ǰ�var����Ϊmutable����ῴ����ʹ��const����������Ҳ�����޸ĵ�
//public:
//	int GetX() const 
//	{
//		var = 3;
//		return m_X;
//	}
//	int GetX() 
//	{
//		return m_X;
//	}
//};
//void PrintEntity(const Entity& e) 
//{
//	std::cout << e.GetX() << std::endl;
//}
//// ��û��ֱ���޸�Entity, �����ҵ�����һ�������޸�Entity�ķ��������ǲ������
//// ����������£�����ʹ��GetX��const�汾��������������һ��

// 35 mutable : 1.�����Ա���Ϊ mutable����ζ�����е� const ���������޸������Ա
//              2.
	               //int x = 8;
	               //auto f = [=]() mutable {
	               //	x++;
	               //	std::cout << x << std::endl;
	               //};
// 36 ���캯����ʼ���б�
// ��һ�ֳ�ʼ������:����������˷�
//class Entity 
//{
//private:
//	std::string m_Name; //��һ�δ���
//public:
//	Entity() 
//	{
//		m_Name = "Unknown"; //�ڶ��δ���
//	}
//	Entity(const std::string& name)
//	{
//		m_Name = name;
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	Entity e0;
//	std::cout << e0.GetName() << std::endl;
//
//	Entity e1("Cherno");
//	std::cout << e1.GetName() << std::endl;
//
//	std::cin.get();
//}
//
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity():m_Name("Unknown"), m_Score(0) // ���밴�ն���˳���ʼ��
//	{
//
//	}
//
//	Entity(const std::string& name):m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	Entity e0;
//	std::cout << e0.GetName() << std::endl;
//
//	Entity e1("Cherno");
//	std::cout << e1.GetName() << std::endl;
//
//	std::cin.get();
//}
// 37 ��Ԫ�����
// s_Speed = s_Level > 5 ? 10 : 5;
// std:: string rank = s_Level > 10 ? "Master" : "Beginner";
// Ƕ�� s_Speed = s_Level > 5 ? s_Level > 10 ? 15:10:5;
// 38 ��������
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity() :m_Name("Unknown"), m_Score(0) // ���밴�ն���˳���ʼ��
//	{
//
//	}
//
//	Entity(const std::string& name) :m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//
//void Function()
//{
//	Entity entity = Entity("Cherno");
//}
//// ������ú�������ô�����������entity�ͻᱻ����
//// ��������дһЩ������ʧ�ܵĴ��룬������һ����Ҫ
//// �Ǻ���Ҳ������if��䣬�����ǿ������򣬾�������ֻ
//// ��һ�Ի�����{}
//int main()
//{
//	//���÷�ʽ1:ջ�ϵ���
//	//ʲôʱ��ջ���䣿�����κ�ʱ����Ϊ��C++�����ǳ�ʼ���������ķ�ʽ�����ܹܿصķ�ʽ��
//	//ʲôʱ��ջ���䣿 ��������Ķ���̫�󣬻�����Ҫ��ʾ�ؿ��ƶ���������ڣ��Ǿ���Ҫ���ϴ���
//	Entity entity0;
//	std::cout << entity0.GetName() << std::endl;
//	Entity entity1("yuan");
//	std::cout << entity1.GetName() << std::endl;
//	Entity entity2 = Entity("Cherno");
//	std::cout << entity2.GetName() << std::endl;
//
//	Entity* e;
//	{
//		Entity entity3("yuan");
//		e = &entity3;
//
//	}//����e��ʧЧ
//	//���÷�ʽ2�����ϵ���
//	Entity* entity4 = new Entity("CHINESE");
//	
//	{
//		e = entity4;
//
//	}
//	std::cout << e->GetName() << std::endl;
//	delete entity4;// ������e�ű�����
//
//
//	std::cin.get();
//}

// 39-44
// 39 new
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Score;
//public:
//	Entity() :m_Name("Unknown"), m_Score(0) // ���밴�ն���˳���ʼ��
//	{
//
//	}
//
//	Entity(const std::string& name) :m_Name(name)
//	{
//
//	}
//	const std::string& GetName() const
//	{
//		return m_Name;
//	}
//};
//int main()
//{
//	int* a = new int;
//	int* b = new int[50];
//	delete a;
//	delete[] b;
//	Entity* e = new Entity();
//	Entity* e = new Entity;
//	Entity* e0 = new Entity[50];//Entity����
//	delete e;
//	delete[] e0;
//	Entity* e = new Entity();//1.�����ڴ� 2.���ù��캯��
//	Entity* e = (Entity*)malloc(sizeof(Entity);
//	//����ֻ�Ƿ����ڴ�**Ȼ�������һ��ָ���Ǹ��ڴ��ָ��
//	//�����д���֮����е�������ǵ�һ�д���new������
//	// Entity�Ĺ��캯��
//	delete e;//�ֶ����
//
//	int* b = new int[50];
//	Entity* entity = new(b) Entity();
//	// �ֶ������ַ
//}

// 40 C++��ʽת����explicit�ؼ���
//class Entity
//{
//private:
//    std::string m_Name;
//    int m_Age;
//public:
//    Entity(const std::string& name)
//        : m_Name(name), m_Age(-1) {}
//
//    Entity(int age)
//        : m_Name("Unknown"), m_Age(age) {}
//};
//
//int main()
//{
//    Entity test1("lk");
//    Entity test1(23);
//    Entity test3 = "lk";// ������ʽת��ֻ�ܽ���һ��
//    // const char[] ->string->Entity
//    Entity test4 = std::string("lk");
//    Entity test5 = 23; //������ʽת��
//    // explicit�������ʽת��
//
//}
//
//class Entity
//{
//private:
//    std::string m_Name;
//    int m_Age;
//public:
//    Entity(const std::string& name)
//        : m_Name(name), m_Age(-1) {}
//
//    explicit Entity(int age)  //����Ϊexplicit
//        : m_Name("Unknown"), m_Age(age) {}
//};
//
//int main()
//{
//
//    Entity test5 = 23; //error��������ʽת��
//    Entity test5 = (Entity)23; //û����ʽת��
//
//    std::cin.get();
//}
// 41 C++�����(������)��������
//�����أ�
//struct Vector2
//{
//	float x, y;
//	Vector2(float x, float y):x(x),y(y)
//	{
//
//	}
//	Vector2 Add(const Vector2& other)const
//	{
//		return Vector2(x + other.x, y + other.y);
//	}
//	Vector2 Multiply(const Vector2& other)const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//
//};
//int main()
//{
//	Vector2 position(4.0f, 6.0f);
//	Vector2 speed(0.5f, 1.5f);
//	Vector2 powerup(1.1f, 1.1f);
//	Vector2 result1 = position.Add(speed.Multiply(powerup));// �����ؿɶ��Խϲ�
//
//}
//����+��*
//struct Vector2
//{
//	float x, y;
//	Vector2(float x, float y) :x(x), y(y)
//	{
//
//	}
//	Vector2 Add(const Vector2& other)const
//	{
//		return Vector2(x + other.x, y + other.y);
//	}
//	Vector2 operator+(const Vector2& other)const
//	{
//		return Add(other);//�ѡ�+����ɺ���ʵ�֣��򻯴���
//	}
//	Vector2 Multiply(const Vector2& other)const
//	{
//		return Vector2(x * other.x, y * other.y);
//	}
//	Vector2 operator*(const Vector2& other)const
//	{
//		return Multiply(other);//�ѡ�+����ɺ���ʵ�֣��򻯴���
//	}
//	bool operator== (const Vector2& other) const
//	{
//		return x == other.x && y == other.y;
//	}
//	bool operator!= (const Vector2& other) const
//	{
//		// this ��һ��ָ��
//		return !(*this == other);
//	}
//
//};
//
//std::ostream& operator<< (std::ostream& stream, const Vector2& other)//��һ������cout,�ڶ�������Vector2
//{
//	stream << other.x << "," << other.y;
//	return stream;
//}
//int main()
//{
//	Vector2 position(4.0f, 6.0f);
//	Vector2 speed(0.5f, 1.5f);
//	Vector2 powerup(1.1f, 1.1f);
//	Vector2 result1 = position+speed*powerup;// �����ؿɶ��Խϲ�
//	std::cout << result1 << std::endl; //C++ û������Щ������ƥ�������� ����������Ϊ:  std::ostream << Vector2
//	//���Ҫ����<<
//}
//// == �� != ������
// 
//42 this
//C++����this�ؼ��֣�ͨ�������ǿ��Է��ʳ�Ա��������Ա������������ĳ����ĺ����򷽷���
//this��һ��const�����У�this��һ��const Entity * const������const Entity*, ��һ����const�����У���ô������һ��Entity* ���͵�
//�ں����ڲ������ǿ�������this��this��ָ��������������ĵ�ǰ����ʵ����ָ��
//class Entity 
//{
//public:
//	int x, y;
//	Entity(int x, int y):x(x), y(y) 
//	{
//
//	}
//	//or
//	Entity(int x, int y) 
//	{
//		this->x = x;
//		//�ȼ���
//		Entity* e = this;
//		e->x = x;
//	}
//	int Get() const
//	{
//		const Entity* e = this;//ok
//		e->x = 5;//ERROR���������ܾ����޸Ĺ���
//
//
//	}
//};
//��һ���õ��ĳ������ǣ����������Ҫ�������Entity������ĺ�����
//������Entity�ķ�����������������������ڲ�����һ���ⲿ�ĺ�����
//Ȼ�������������һ��Entity������Ϊ��������ʱ��Ϳ���ʹ��this
//class Entity;  //ǰ��������
//void PrintEntity(Entity* e); //����������
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        PrintEntity(this); //����ϣ����������������PrintEntity,�Ϳ��Դ���this����ͻᴫ�����Ѿ�������x��y�ĵ�ǰʵ��
//    }
//};
//void PrintEntity(Entity* e) //�����ﶨ��
//{
//    //print something
//}

//or
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        PrintEntity(*this); //������
//    }
//};
//void PrintEntity(const Entity& e) //�����ﶨ��
//{
//    //print something
//}
//void PrintEntity(const Entity& e);
//class Entity
//{
//public:
//    int x, y;
//    Entity(int x, int y)
//    {
//        // Entity* e = this;
//        this->x = x;
//        this->y = y;
//        Entity& e = *this;  //�ڷ�const������ͨ��������this�����ǾͿɸ�ֵ��Entity&
//        PrintEntity(*this); //������this
//    }
//    int GetX() const
//    {
//        const Entity& e = *this; //��const�����У����ǻ�õ�һ��const����
//    }
//};
//void PrintEntity(const Entity& e)
//{
//    //print something
//}
// 43 ������
// ���´��룬��Ϊ����û��ʹ��new�ؼ��֣������������ڶ��Ϸ�
// ��ģ�����ֻ����ջ�Ϸ�����������飬�����Ƿ���һ��ָ��
// ����ָ��ʱ(return array)��Ҳ���Ƿ�����һ��ָ��ջ�ڴ�
// ��ָ�룬���뿪���������CreateArray�����������򣩣�
// ���ջ�ڴ�ͻᱻ����
//int CreateArray()
//{
//	int array[50];  //��ջ�ϴ�����
//	return array;
//}
//int main()
//{
//	int* a = CreateArray(); //������������
//}
//
// ��ȷ����1��
//int* CreateArray()
//{
//	int* array = new int[50];  //�ڶ��ϴ�����
//	return array;
//}
//// ��ȷ����2�������������鸳ֵ��һ���������������ı���
//int CreateArray(int* array)
//{
//	//�������
//}
//int main()
//{
//	int array[50];
//	CreateArray(array); //������������
//}
//class Entity
//{
//private:
//
//public:
//    Entity()
//    {
//        std::cout << "Create!" << std::endl;
//    }
//    ~Entity()
//    {
//        std::cout << "Destroy!" << std::endl;
//    }
//};
//
//class ScopedPtr
//{
//private:
//    Entity* m_Ptr;
//public:
//    ScopedPtr(Entity* ptr)
//        : m_Ptr(ptr)
//    {
//    }
//
//    ~ScopedPtr()
//    {
//        delete m_Ptr;
//    }
//};
//
//int main()
//{
//    {
//        ScopedPtr test = new Entity();  
//        //������ʽת��  ����Ȼ������new�����ģ����ǲ�ͬ����һ���������������
//        // ���ͻᱻ���١���Ϊ���ScopedPtr��Ķ�������ջ�Ϸ����
//    }
//    //ScopedPtr test = new Entity();
//    //����� new Entity() ������һ�� Entity ���󲢷���һ��ָ��ö����ָ�룬����Ϊ Entity* ��Ȼ�����ָ�뱻��ʽת��Ϊһ�� ScopedPtr ����
//    //������˵�����﷢���˴� Entity* �� ScopedPtr ����ʽת��������ת��ͨ�� ScopedPtr ��Ĺ��캯����ʵ�֣�
//    //ScopedPtr(Entity * ptr)
//    //    : m_Ptr(ptr)
//    //{
//    //}
//    //����ζ�� new Entity() ���ص�ָ�뱻���ݸ� ScopedPtr �Ĺ��캯�������캯������ָ�븳ֵ�����Ա���� m_Ptr���� test ��� ScopedPtr ���󳬳�
//    //������ʱ�����������������ã�����ɾ�� m_Ptr ָ��� Entity ����ȷ����Դ����ȷ�ͷš�
//    std::cin.get();
//}
// 44 ����ָ��
//1.unique_ptr
// Ҫ����������Щ����ָ�룬������Ҫ�����ǰ���memoryͷ�ļ�
// unique_ptr��������ָ�룬��ζ�ų���������ʱ�����ᱻ����
//    Ȼ�����delete��
// unique_ptr��Ψһ�ģ����ɸ��ƣ����ɷ���
// unique_ptr���캯��ʵ������explicit�ģ�û�й��캯����
//    ��ʽת��,��Ҫ��ʽ���ù��캯����
//#include <memory>
//class Entity
//{
//private:
//
//public:
//    Entity()
//    {
//        std::cout << "Create!" << std::endl;
//    }
//
//    ~Entity()
//    {
//        std::cout << "Destroy!" << std::endl;
//    }
//    void Print() {}
//};
//
//int main()
//{
//    {
//        std::unique_ptr<Entity> entity = new Entity(); //error!unique_ptr������ʽת��
//        std::unique_ptr<Entity> entity(new Entity()); //���Ե�������
//        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//        entity->Print();  //��һ��ԭʼָ��ʹ��
//
//
//    }
//}
// 2.shared_ptr
//std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();//ok
//3. weak_ptr
//std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
// --------------------------
//45 C++�Ŀ����뿽�����캯��
// ������ʽ
////������
//T(const T& var);
////����
//T(const T& var) {
//	//�����壬������� ����ռ�Ÿ���
//}
////��ʹ�ÿ�����������ֹ��ֵ
//T(const T& var) = delete;
// -----------------------
// ǳ����
// ǳ��������������������б�������ָ�루�����ã�,��ᷢ��
// ����.��Ϊ����ָ��ָ��ͬһ���ڴ�,һ�������޸�,��һ������
// ��ֵҲ��������. ����������ʱ��,�ᷢ������free (double
// free)ͬһ���ڴ棬��ɴ���
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size+1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	char& operator[] (const unsigned index) //����������,��Ϊ�����Լ��ع���String��,���Թ���String�����в����޷�ʹ��
//	{
//		return m_Buffer[index];
//	}
//	friend std::ostream& operator<< (std::ostream& stream, const String& string);
//	//��<<���������غ�������ΪString�����Ԫ�������Ϳ����ڸ����غ����з���m_Buffer
//
//};
//std::ostream& operator<< (std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//int main()
//{
//	String string = "Cherno";
//	String second = string;
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get(); //ǳ�������³������
//}
//Ϊ�˽��������⣬����Ҫʹ�ÿ������캯��
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned m_Size;
//public:
//	String(const char* string)
//	{
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, string, m_Size);
//		m_Buffer[m_Size] = 0;
//	}
//	String(const String& other):m_Size(other.m_Size)
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//	~String()
//	{
//		delete[] m_Buffer;
//	}
//	char& operator[] (const unsigned index) //����������,��Ϊ�����Լ��ع���String��,���Թ���String�����в����޷�ʹ��
//	{
//		return m_Buffer[index];
//	}
//	friend std::ostream& operator<< (std::ostream& stream, const String& string);
//	//��<<���������غ�������ΪString�����Ԫ�������Ϳ����ڸ����غ����з���m_Buffer
//
//};
//std::ostream& operator<< (std::ostream& stream, const String& string)
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//int main()
//{
//	String string = "Cherno";
//	String second = string;
//	second[2] = 'a';
//	std::cout << string << std::endl;
//	std::cout << second << std::endl;
//	std::cin.get(); //���
//}
// --------------------------
// 46 ->
// ��ͷ�������������ĳ�Ա��
// һ�㽫��ͷ������������const��Ա��������Ϊ������͵�
// ���������һ������ȡһ��Ԫ�ز�����ı�������״̬��
//1. p->x �ȼ� (*p).x
//2. ���ز�����
//class Entity
//{
//private: 
//	int x;
//public:
//	void Print() const
//	{
//		std::cout << "Hello!" << std::endl;
//	}
//};
//class ScopedPtr
//{
//private:
//	Entity* m_Ptr;
//public:
//	ScopedPtr(Entity* ptr)
//		:m_Ptr(ptr)
//	{
//
//	}
//	~ScopedPtr()
//	{
//		delete m_Ptr;
//	}
//	Entity* operator->() const
//	{
//		return m_Ptr;
//	}
//};//
//int main()
//{
//	{
//		const ScopedPtr entity = new Entity();
//		entity->Print();
//		// ��Ч�� entity.operator->()->Print();
/*�����д entity->Print(); ʱ��

��һ�������������� entity->������ entity �� operator->() ��Ա������
�ڶ�����operator->() ����һ�� Entity* ���͵�ָ�루�� m_Ptr����
���������������Է��ص� Entity* �ٴ�Ӧ�ü�ͷ������ ->�������� Print() ��Ա������
Ҳ����˵���������Ὣ entity->Print(); ����Ϊ entity.operator->()->Print();�����Զ��ݹ������ֱ���ҵ�ʵ�ʵĶ����Ա�����ֵݹ�����õ���Ϊ����ʹ���Զ�������ָ������ʱ����ͷ��������ʹ�÷�ʽ��ԭ��ָ�뱣��һ�¡�

���û�����ֵݹ�����û��ƣ��㽫���ò��ֶ���ε��� operator->()���⽫���´���Ŀɶ��ԺͿ�ά���Խ��͡�

��ˣ�entity->Print(); ���Զ�����Ϊ entity.operator->()->Print();�������Ϊʲô entity ����ֱ�ӵ��� Print() ��ԭ��
*/
//	}
//	std::cin.get();
//}
//3.�����Ա������offset
//struct vec2
//{
//	int x, y;
//	float pos, v;
//};
//int main()
//{
//	int offset = (int)&((vec2*)nullptr)->v; // x,y,pos,v��offset�ֱ�Ϊ0,4,8,12
//	std::cout << offset << std::endl;
//	std::cin.get();
//}
// 47 ��̬����
#include <vector>
/*
1.vector��������һ����̬����,���ڴ�����������
2.����ʹ����Ҫ����ͷ�ļ�#include <vector>
3.ʹ�ø�ʽ��
���;���ʹ�ö������ָ�롣
std::vector<T> a��//T��һ��ģ�����ͣ�����ʹ�ö���
����ָ��
*/
// ���� a.push_back(element);
/*
struct Vertex
{
    float x, y, x;
}

std::vector<Vertex> vertices; //����һ��Vertex���͵Ķ�̬����
vertices.push_back({ 1, 2, 3 });//�б��ʼ�����ṹ������࣬���԰���Ա������˳�����б��죩
vertices.push_back({ 4, 5, 6 });//ͬ��vertices.push_back(Vertex(4, 5, 6)
vertices.push_back({ 7, 8, 9 });
*/
//������ʽ
//1.
//for (int i = 0; i < vertices.size(); i++)
//{
//	std::cout << vertices[i] << std::endl;
//}
//2.
// for (Vertex& v : vertices)
//{
//	std::cout << v << std::endl;
//}
// ���:vertices.clear();
// ���ָ��Ԫ��: vertices.erase(vertices.begin()+1)
// ���޸�ʱʹ�����ô���void Function(const std::vector<T>&vec) {};
//-----------------------
//48 ��̬������Ż�
//int i = 0;
//#define GLFW_DLL
//struct Vertex
//{
//    float x, y, z;
//    
//    Vertex(float x, float y, float z)
//        : x(x), y(y), z(z)
//    {
//    }
//
//    Vertex(const Vertex& vertex)
//        : x(vertex.x), y(vertex.y), z(vertex.z)
//    {
//        i++;
//        std::cout << i << std::endl;
//    }
//};

//int main()
//{
//    std::vector<Vertex> vertices;
//    vertices.push_back(Vertex(1, 2, 3)); // ͬvertices.push_back({ 1, 2, 3 });
//    vertices.push_back(Vertex(4, 5, 6));
//    vertices.push_back(Vertex(7, 8, 9));
//    //vertices.push_back(Vertex(7, 8, 9)); // ����10��
//    std::cin.get();
//}
// ����������
/*
std::vector<Entity> e;
    Entity data1 = { 1,2,3 };
    e.push_back( data1); // data1->��vector�ڴ�
    Entity data2 = { 1,2,3 };
    e.push_back( data2 ); //data1->��vector�ڴ�   data2->vector��vector�ڴ�  ɾ����vector�ڴ�
    Entity data3 = { 1,2,3 };
    e.push_back(data3);  // data1->��vector�ڴ�  data2->vector��vector�ڴ�  data3->vector��vector�ڴ�  ɾ����vector�ڴ�
������������Ĵ����ֱ���1��3��6
���ĸ��ƴ�������������������� 1+2+3+4+5+....
*/
/*
����1������vector�����������Ԫ��ʱ��Ϊ��������������ǰ��vector�����ݻ���ڴ��еľ�λ�ø��Ƶ��ڴ��е���λ��(����һ�θ���)��Ȼ��ɾ����λ�õ��ڴ档 ��˵��push_backʱ���������������Զ�������С�����·����ڴ档����ǽ�����������ԭ��֮һ�� ����취�� vertices.reserve(n) ��ֱ��ָ��������С�������ظ���������ĸ����˷ѡ�
����2���ڷ�vector�ڴ��д���������г�ʼ��ʱ����push_back() ������β�����Ԫ��ʱ�����Ȼᴴ��һ����ʱ�������󣨲����Ѿ�������ڴ��vector�У�������׷��Ԫ�أ�Ȼ���ٽ�������󿽱������ƶ������������������Ԫ�ص��������� �������У��������һ�θ����˷ѡ� ����취�� emplace_back��ֱ��������β������Ԫ�أ���ֱ�����Ѿ�������ڴ���Ǹ�������ֱ�����Ԫ�أ���������ʱ����
*/
//int main()
//{
//    std::vector<Vertex> vertices;
//    //ver 1 : copy 6 times
//    vertices.push_back({ 1,2,3 });
//    vertices.push_back({ 4,5,6 });
//    vertices.push_back({ 7,8,9 });
//    i = 0;
//    //ver 2 : copy 3 times
//    vertices.reserve(3);
//    vertices.push_back({ 1,2,3 });
//    vertices.push_back({ 4,5,6 });
//    vertices.push_back({ 7,8,9 });
//    i = 0;
//    //ver 3 : copy 0 times
//    vertices.reserve(3);
//    vertices.emplace_back(1, 2, 3);
//    vertices.emplace_back(4, 5, 6);
//    vertices.emplace_back(7, 8, 9);
//
//    std::cin.get();
//}
// 49 ��̬��
//#include "GLFW/glfw3.h"
//int main() 
//{
//    int a = glfwInit();
//    std::cin.get();
//}
// 52 �෵��ֵ
// ��һ:������Ȼ���޸�,������ֱ�ӷ��ض��
#if 0
void GetUserAge(const std::string& user_name, bool& work_status, int& age)
{
    if (user_name.compare("Cherno") == 0)
    {
        work_status = true;
        age = 18;
    }
    else
    {
        work_status = false;
        age = -1;
    }
}
int main()
{
    bool work_status = false;
    int age = -1;
    GetUserAge("Cherno", work_status, age);
    std::cout << work_status<< '\n' << age << std::endl;  // ȷʵ�����work_status �� age ���޸�
    std::cin.get();

}


//-------ʹ��ָ��ͬ��---------
void GetUserAge(const std::string& user_name, bool* work_status, int* age)
{
    if (user_name.compare("Cherno") == 0)
    {
        *work_status = true;
        *age = 18;
    }
    else
    {
        *work_status = false;
        *age = -1;
    }
}
int main()
{
    bool work_status_value; // ��ջ����������
    int age_value;
    bool* work_status = &work_status_value; // ��ȡ�����ĵ�ַ
    int* age = &age_value;
    GetUserAge("Cherno", work_status, age);
    std::cout << *work_status << '\n' << *age << std::endl;
    std::cin.get();
}
+
#endif

#if 0
// ����:ͨ�������ķ���ֵ��һ��array�����飩��vector(array�����)
std::array<std::string, 2> ChangeString() {
    std::string a = "ssss";
    std::string b = "2";

    std::array<std::string, 2> result;
    result[0] = a;
    result[1] = b;
    return result;
    //Ҳ����return std::array<std::string, 2>(a, b);
}
#endif 

#if 0
//---------------------------
std::vector<std::string> ChangeString() {
    std::string a = "Cherno";
    std::string b = "yuan";

    std::vector<std::string> result;
    result.push_back(a);
    result.push_back(b);
    return result;
    //Ҳ����return std::array<std::string, 2>(a, b);
}
#endif 

#if 0
int main()
{
    std::array<std::string,2> vec = ChangeString();
    std::cout << vec[0] << vec[1] << std::endl;
    std::cin.get();
}
#endif

// ����:ʹ��std::pair
// ֻ��������Ԫ�ء�
//����Ԫ�ص����Ϳ��Բ�ͬ��
//�ṩ�˼򵥵Ľӿ������ʵ�һ���͵ڶ���Ԫ�ء�
#if 0
std::pair<bool, int> GetUserAge(const std::string& user_name)
{
    std::pair<bool, int> result;
    if (user_name.compare("Cherno") == 0)
    {
        result = std::make_pair(true, 18);
    }
    else
    {
        result = std::make_pair(false, -1);
    }
    return result;
}

int main()
{
    std::pair<bool, int> result = GetUserAge("Cherno");
    std::cout << result.first << result.second << std::endl;
    std::cin.get();
}


#endif

// ����:ʹ��std::tuple
// ���԰�������������Ԫ�ء�
// ÿ��Ԫ�ص����Ϳ��Բ�ͬ��
// �ṩ�˷���Ԫ�صķ���������ͨ�� std::get��std::tie��
#include <tuple>
#if 0
 std::tuple<bool, int, int> GetUserAge(const std::string& user_name)
{
    std::tuple<bool, int, int> result;

    if (user_name.compare("Cherno") == 0)
    {
        result = std::make_tuple(true, 18, 0);
    }
    else
    {
        result = std::make_tuple(false, -1, 0);
    }
    return result;
}

int main()
{
    std::tuple<bool, int, int> result = GetUserAge("Cherno");
    bool work_status;
    int age;
    int user_id;

    std::tie(work_status, age, user_id) = result;
    std::cout << "��ѯ�����" << work_status << "    " << "���䣺" << age << "   " << "�û�id:" << user_id << std::endl;
    getchar();
    return 0;
}
#endif

// ����:����һ���ṹ��
#if 0
struct result {
    std::string str;
    int val;
};
result Function() {
    return { "1",1 };
    //C++�����ԣ�����ֱ���������ú����Զ���ȫ�ɽṹ��
}
int main() {
    auto temp = Function();
    std::cout << temp.str << ' ' << temp.val << std::endl;
}

# endif

// 53 ģ��
#if 0
// ����ģ��
template<typename T>
void Print(T value)
{
    std::cout << value << std::endl;
}

int main() 
{
    Print(1);
    Print("hello");
    Print(5.5);
    std::cin.get();
    Print(96);//������ʵ����ʽ�Ĵ�����Ϣ��ģ�壬�ɶ��Բ���
    Print<int>(96);//������ʾ�Ķ���ģ������������������ܵ��βε����ͣ�����
    Print<char>(96);//����Ŀ��������֣�Ҳ�������ַ��������Ĳ�����ǿ�˺ܶ࣡
}
#endif

// ��ģ��
#if 0
template <int N> 
class Array {
private:
    int m_Array[N];
};
int main() {
    Array<5> array;
}
#endif

#if 0
template<typename T, int size> class Array {
private:
    T m_Array[size];
};
int main() {
    Array<int, 5> array;
}
#endif

//55 C++�ĺ�
#if 0 
#defind WAIT std::cin.get()
//������Բ��÷ŷֺţ�����ŷֺžͻ�����������
int main() {
    WAIT;
    //��Ч��std::cin.get()�����ڴ��ı��滻
    //�����������ֲ����Ǻ��޴��ģ������Լ�������˶�������ر�ʹ��
}
#endif
#if 0
//���ǿ��Դ��ݲ����ģ���Ȼ����Ҳ�Ǹ���ճ���滻��ȥ�ģ���û��������������
#define log(x) std::cout << x << std::endl
int main() {
    log("hello");
    //�����ӻ������hello��
    return 0;
}
#endif
#if 0
#include <iostream>

#defind PR_DEBUG 1 //�����������л���0����Ϊһ������
#if PR_DEBUG == 1   //���PR_DEBUGΪ1
#defind LOG(x) std::cout << x << std::endl  //��ִ�������
#else   //��֮
#defind LOG(x)   //�����ʲôҲ�����壬����������
#endif    //����

int main() {
    LOG("hello");
    return 0;
}
#endif

// 56 auto
// 57 ��̬����,��С���ɱ�
//1.std::array��һ��ʵ�ʵı�׼�����࣬��C++��׼ģ����һ���֡�
//
//2.��̬����ָ�����������飬������arrayʱ��Ҫ��ʼ�����С�������ٸı䡣
//
//3.ʹ�ø�ʽ
#if 0
int main()
{
    std::array<int, 5> data;
    data[0] = 1;
    data[4] = 10;
    return 0;
}
#endif

//4.array��ԭ�����鶼�Ǵ�����ջ�ϵģ�vector���ڶ��ϴ����ײ����ݴ���ģ�
//
//5.ԭ������Խ���ʱ�򲻻ᱨ����array����Խ���飬�ᱨ�����ѡ�
//
//6.ʹ��std::array�ĺô��ǿ��Է������Ĵ�С��ͨ��size()������������һ���ࡣ
#if 0
void PrintArray(const std::array<int, 5>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;

    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
// ��δ���һ����׼������Ϊ����������֪������Ĵ�С��
// typenameΪT
#if 0
template <typename T>
void PrintArray(const T& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;
        // �ٶ� size �� [] ����,������
    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
#if 0
template <typename T,int size>
void PrintArray(const std::array<T,size>& data)
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << std::endl;
        // �ٶ� size �� [] ����,������
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << std::endl;
        // �ٶ� size �� [] ����,������
    }
}
int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
    {
        data[i] = i;
    }
    PrintArray(data);
}
#endif
// 58 C���Է��ĺ���ָ��
#if 0
#endif
#if 0
#endif
#if 0
#endif
// 59 lamda
#if 0
#endif
// 60 using namespace std
// using namespace xxx���Խ�xxx::yyy ��Ϊ yyy
// ��������,����ͷ�ļ���
// ʹ��namespace���ܻ�ʹԭ��������ʽת���л��ɲ���Ҫ��ʽת������һ����ĺ���