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

int main()
{
	// 0 - 数字0
	//  '0' - 字符0 - ASCII码是48
	//  '/0' - 字符 - ASCII码是0
	// EOF - end of file的缩写，是文件结束的标志 - ASCII码是-1
	printf("c:\test\121\n"); //最终会输出c:	estQ,其中\t输出为水平制表符，\121输出为Q，各为一个字节。
	printf("%d\n", strlen("c:\test\121"));
	return 0;
}