#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好工作\n");
//	}
//	else
//	{
//		printf("回家卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入代码\n");
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("得到好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = n1 + n2;
//	//打印
//	printf("%d", sum);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//int i = 0;
//	//while (i < 10)
//	//{
//	//	printf("%d\n", arr[i]);
//	//	i = i + 1;
//	//}
//	printf("abc\\0defg");
//	return 0;
//}

//int main()
//{
//	printf("Test");
//	return 0;
//}

//int main() {
//
//	char a[10];
//
//	char* str = &a;
//
//	strcpy(str, "hello\n");
//
//	printf(str);
//
//	return 0;
//
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	// 0 - 数字0
//	//  '0' - 字符0 - ASCII码是48
//	//  '/0' - 字符 - ASCII码是0
//	// EOF - end of file的缩写，是文件结束的标志 - ASCII码是-1
//	//printf("c:\test\121\n"); //最终会输出c:	estQ,其中\t输出为水平制表符，\121输出为Q，各为一个字节。
//	//printf("%d\n", strlen("c:\test\121"));
//	//char arr[4] = { 'b', 'i', 't' };
//	//printf("%d\n", arr[3]);
//	//printf("%d\n", strlen(arr));
//	//'/0'和0是相同的，ASCII码都是0，只有'0'不同，作为字符，它ASCII码是48
//	 //arr[]的括号中需要给定常量，不能给入赋值的变量
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d %d", &a, &b);
//	//int r = Max(a, b);
//	//printf("%d\n", r);
//	// / - 除号 两端都是整数时，执行的时整数除法，如果两端只要有一个浮点数就执行浮点数的除法。
//	// % - 取模 两端操作符只能是整数
//	// sizeof是操作符，而且是单目操作符
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	//int a = 10;
//	//int b = a++; //后置++，先使用，后++
//	//int a = 10;
//	//int b = ++a; //前置++，先++，后使用
//	//printf("%d %d", b, a);
//	//int a = (int)3.14;//强制转换类型，但是需要把类型写到括号里而不是把转换量写道括号里。
//	//printf("%d\n", a);
//	//int a = 10;
//	//if (a = 3)
//	//{
//	//	printf("hehe\n");
//	//}
//	//int a = 10;
//	//int b = 20;
//	//int r = (a > b ? a : b);
//	//printf("%d\n", r);
//	//逗号表达式就是逗号隔开的一串表达式
//	//逗号表达式的特点是：从左向右以此计算，整个表达式的结果是最后一个表达式的结果
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	//int d = (c = a - 2, a = b + c, c - 3);
//	//printf("%d\n", d);
//	//关键字 - C语言本身内置的，关键字不是自己创造出来的，也不能自己创建
//	//auto - 自动变量
//	//break - 跳出循环
//	//const - 常属性
//	//enum - 枚举
//	//struct - 结构体
//	//union - 联合体（共用体）
//	//extern - 声明外部符号
//	//register - 寄存器
//	//return - 函数返回值
//	//signed - 有符号的
//	//unsigned - 无符号的
//	//sizeof - 计算内存空间大小
//	//static - 静态的
//	//typedef - 类型重命名
//	//void - 无（函数的返回类型，函数的参数）
//	//变量的命名
//	//1.有意义 
//	//int age
//	//float salary
//	//2.名字必须是字母、数字、下划线组成
//	//不能有特殊字符，同时不能以数字开头
//	//int 2b; - err
//	//int _2b； - ok
//	//3.变量名不能是关键字
//	//可以在main以外typedef unsigned int unit，能够重命名类型
//	//static
//	//1.修饰局部变量
//	// static修饰局部变量的时候，局部变量出了作用域并不销毁。
//	//本质上，static修饰局部变量的时候，改变了变量的存储位置。
//	// 印象了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	//2.修饰全局变量 
//	// 全局变量具有外部链接属性的
//	// 当static修饰全局变量时
//	// 外部链接属性就变为了内部链接属性
//	// 其他源文件(.c)就不能再通过extern调用该全局变量了
//	// extern 用于声明外部符号，跨程序使用
//	//3.修饰函数
//	//一个函数本身是具有外部链接属性的
//	//但是被static修饰时，变为内部链接属性
//	//寄存器内存 register - 建议将操作符存放在寄存中
//	//define - 定义常量和宏
//	//define定义标识符常量
//	//#define MAX 1000
//	//define定义宏
//	//宏是有参数的
//	//#define ADD (x,y) ((x) + (y))
//	//ADD - 宏名
//	// (x,y) - 宏的参数，参数是无类型的
//	//((x) + (y)) - 宏体
//	//& - 取地址操作符
//	//内存单元
//	//编号->地址->地址也被成为指针
//	//存放指针（地址）的变量就是指针变量
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int * p = &a;
//	//p就是指针变量
//	//*p - 解引用操作符，意思是通过p中存放的地址，找到p所指向的对象
//	//*p就是p指向的对象
//	//&和*为一对操作符
//	//不管什么类型的指针，都是在创建指针变量
//	//指针变量就是来存放地址的
//	//指针变量的大小取决于存放一个地址需要多大空间
//	//32位机器上的地址 32bit位 - 4byte
//	//64位机器上的地址 64bit位 - 8byte
////printf("%zd\n", sizeof(char*));
////printf("%zd\n", sizeof(int*));
////printf("%zd\n", sizeof(float*));
//
//
//	return 0;
// }

//struct Stu
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	//结构体对象.成员名
//	//printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//结构体指针变量->成员名
//	//printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "man", "15596668862" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//一对{}就是一个代码块
//else会和最近的if搭配，而非对齐才搭配（在编译器中同时成立）
// 5 == num 作为条件比 num == 5 更好

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//break - 跳出循环
//continue - 跳出本次循环，判断下次循环是否成立
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);//第一种
//	//putchar(ch);//第二种
//	//return 0;
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//数组本来就是一个地址，如果想要scanf不用加&
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//getchar();//读取了\n，起到清除输入缓冲区的作用
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n"); 
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//		printf("\n");
//	}
//	return 0;
//}