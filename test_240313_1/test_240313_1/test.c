#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

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

//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char str[] = "Hello";
//	char* p = str;
//	int n = 10;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//int main() 
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//int main() 
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
//	return 0;
//}

//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}

//int main ()
//{
//	printf("printf(\"Hello world!\\n\")");
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3 
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//找最大值
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//}

//}

//计算n的阶乘
// 1*2*3*...*n

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//输入
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//输入
//	printf("%d的阶乘结果是%d", n, ret);
//	return 0;
//}

//计算1!+2!+3!+...+10!
//自编_1
//int fac(int x)
//{
//	int num = 1;
//	int ret1 = 1;
//	for (num = 1; num <= x; num++)
//	{
//		ret1 = ret1 * num;
//	}
//	return ret1;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int ret = 0;
//	//输入
//	printf("请输入期望的累加阶数:>");
//	scanf("%d", &m);
//	//处理
//	for (i = 1; i <= m; i++)
//	{
//		int c = fac(i);
//		ret = ret + c;
//	}
//	//输出
//	printf("%d阶的累加阶乘结果为%d", m, ret);
//	return 0;
//}

//答案_1
//int main()
//{
//	//初始化
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int tem = 0;
//
//	//输入
//	printf("请输入期望的累加阶数:>");
//	scanf("%d", &tem);
//
//	//处理
//	for (i = 1; i <= tem; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			ret = ret * n;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//
//	//输出
//	printf("%d阶的累加阶乘结果为%d", tem, sum);
//
//	return 0;
//}

//优化方案
//1!=1
//2!=1*2
//3!=1*2*3
//每次阶乘都是上阶阶乘结果乘以当前阶乘阶数
//可以优化算法
//int main()
//{
//	//初始化
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int temp = 0;
//	
//	//输入
//	printf("请输入期望的累加阶数:>");
//	scanf("%d", &temp);
//
//	//处理
//	for (i = 1; i <= temp; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	//输出
//	printf("%d阶的累加阶乘结果为%d", temp, sum);
//
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n
//二分查找

//int main()
//{
//	//初始化
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//输入
//	printf("请输入要查找的数字:>");
//	scanf("%d", &k);
//
//	//处理+输出
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("已找到该数字，下标为:%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("在该数组中未找到对应数字\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int k = 0;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    printf("请输入要查找的数字:>");
//    scanf("%d", &k);
//
//    // 处理+输出
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == k)
//        {
//            printf("已找到该数字，下标为:%d\n", i);
//            break;
//        }
//    }
//
//    if (i == sz)
//    {
//        printf("在该数组中未找到对应数字\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	//初始化
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("已找到，下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	//初始化
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	
//	//处理
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//		//如果返回值是0，表示两个字符串相等
//		{
//			printf("登陆成功\n");
//			break;
//		}	
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	  if (i == 3)
//	{
//		  printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}

//数组传参的时候传递的是数组首元素的地址
//sizeof 在 64位 是8

//猜数字游戏实现
//电脑产生一个随机数（1-100）
//猜数字
//猜大了
//猜小了

//void menu()
//{
//	printf("******************************\n");
//	printf("**********  1.play  **********\n");
//	printf("**********  0.exit  **********\n");
//	printf("******************************\n");
//}
//
////0-RAND_MAX
//void game()
//{
//	int guess = 0;
//	RAND_MAX;
//	//生成随机数
//	int ret = rand() % 100 + 1;//生成随机数的函数
//	//printf("%d\n", ret); 
//	//猜数字
//	while(1)
//	{
//		printf("请猜数字(1-100):>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//
//	}
//  
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			//printf("猜数字\n");
//		 	break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新错误!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto语句 - 多用于深度嵌套跳出
//关机程序
//1.电脑运行起来后，1分钟后就关机
//2.如果输入：我是猪，就取消关机

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在60秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("输入正确，已取消关机");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

////函数的定义
//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d, %d", &a, &b);
//	//调用函数求最大值
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//写一个函数可以交换两个整型变量的内容

//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//只能通过取地址的方式修改
//地址唯一性
//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d, %d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a和b叫实参
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//一个工程中可以有多个.c文件
//但只能有一个main函数
//函数调用分为传值调用和传址调用
//传值调用
//Swap1(a, b);
//传址调用
//Swap1(&a, &b);

//写一个函数判断该数是不是素数

//打印100-200之间的素数
//素数是只能被1和它本身整除的数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2 - i-1之间的数字去试除i
//		int flag = 1;
//		//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//算法优化
//如果一个数不是素数
//那么它的因数一定有一个小于它的开方值
//即若a、b为因数，m为该非素数
//那么一定有 (a or b) <= sqrt(m)

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2 - i-1之间的数字去试除i
//		int flag = 1;
//		//flag是1，表示是素数
//		int j = 0;
//		//i - 1改为sqrt(i)
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//写一个函数
//判断一个数是不是素数

//int is_prime(int x)
//{
//	int i = 0;
//	//flag为1是为素数
//	int flag = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//
//			//break不用写
//			//当return输出后
//			//该函数即结束
//			
//			//break;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//写一个函数判断一年是不是闰年
//闰年判断的规则
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除是闰年
//打印1000-2000年之间的闰年

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找

//binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	找到了，返回下标
//	找不到，返回-1
//	因为arr中有下标为0的内容
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//数组传参实际上传递的是数组首元素的地址
//而不是整个数字
//所以在函数内部计算一个函数参数部分的元素个数是不靠谱的

//布尔类型
//bool true false

//写一个函数，每调用一次这个函数，就会将 num 的值增加1

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数可以嵌套调用，但不能嵌套定义

//链式访问的前提是有返回值
//即不能是void

//函数不写返回值（不建议）的时候，默认返回类型是int

//int main(void)
//明确的说明，main函数不需要参数

//main函数有3个参数
// int main(int argc, char* argv[], char *envp[])

//函数声明不能决定函数是否真实存在
//函数定义才能决定函数是否存在

 //导入静态库和.h文件可以卖钱

//#pragma comment(lib, "add.lib")

//程序递归
//程序调用自身的编程技巧称为递归

//%d有符号整数
//%u无符号整数