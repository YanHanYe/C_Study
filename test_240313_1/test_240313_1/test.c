#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�ù���\n");
//	}
//	else
//	{
//		printf("�ؼ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("�õ���offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	int sum = n1 + n2;
//	//��ӡ
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
//	// 0 - ����0
//	//  '0' - �ַ�0 - ASCII����48
//	//  '/0' - �ַ� - ASCII����0
//	// EOF - end of file����д�����ļ������ı�־ - ASCII����-1
//	//printf("c:\test\121\n"); //���ջ����c:	estQ,����\t���Ϊˮƽ�Ʊ����\121���ΪQ����Ϊһ���ֽڡ�
//	//printf("%d\n", strlen("c:\test\121"));
//	//char arr[4] = { 'b', 'i', 't' };
//	//printf("%d\n", arr[3]);
//	//printf("%d\n", strlen(arr));
//	//'/0'��0����ͬ�ģ�ASCII�붼��0��ֻ��'0'��ͬ����Ϊ�ַ�����ASCII����48
//	 //arr[]����������Ҫ�������������ܸ��븳ֵ�ı���
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d %d", &a, &b);
//	//int r = Max(a, b);
//	//printf("%d\n", r);
//	// / - ���� ���˶�������ʱ��ִ�е�ʱ�����������������ֻҪ��һ����������ִ�и������ĳ�����
//	// % - ȡģ ���˲�����ֻ��������
//	// sizeof�ǲ������������ǵ�Ŀ������
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	//int a = 10;
//	//int b = a++; //����++����ʹ�ã���++
//	//int a = 10;
//	//int b = ++a; //ǰ��++����++����ʹ��
//	//printf("%d %d", b, a);
//	//int a = (int)3.14;//ǿ��ת�����ͣ�������Ҫ������д������������ǰ�ת����д�������
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
//	//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//	//���ű��ʽ���ص��ǣ����������Դ˼��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	//int d = (c = a - 2, a = b + c, c - 3);
//	//printf("%d\n", d);
//	//�ؼ��� - C���Ա������õģ��ؼ��ֲ����Լ���������ģ�Ҳ�����Լ�����
//	//auto - �Զ�����
//	//break - ����ѭ��
//	//const - ������
//	//enum - ö��
//	//struct - �ṹ��
//	//union - �����壨�����壩
//	//extern - �����ⲿ����
//	//register - �Ĵ���
//	//return - ��������ֵ
//	//signed - �з��ŵ�
//	//unsigned - �޷��ŵ�
//	//sizeof - �����ڴ�ռ��С
//	//static - ��̬��
//	//typedef - ����������
//	//void - �ޣ������ķ������ͣ������Ĳ�����
//	//����������
//	//1.������ 
//	//int age
//	//float salary
//	//2.���ֱ�������ĸ�����֡��»������
//	//�����������ַ���ͬʱ���������ֿ�ͷ
//	//int 2b; - err
//	//int _2b�� - ok
//	//3.�����������ǹؼ���
//	//������main����typedef unsigned int unit���ܹ�����������
//	//static
//	//1.���ξֲ�����
//	// static���ξֲ�������ʱ�򣬾ֲ��������������򲢲����١�
//	//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�á�
//	// ӡ���˱������������ڣ��������ڱ䳤���ͳ������������һ����
//	//2.����ȫ�ֱ��� 
//	// ȫ�ֱ��������ⲿ�������Ե�
//	// ��static����ȫ�ֱ���ʱ
//	// �ⲿ�������Ծͱ�Ϊ���ڲ���������
//	// ����Դ�ļ�(.c)�Ͳ�����ͨ��extern���ø�ȫ�ֱ�����
//	// extern ���������ⲿ���ţ������ʹ��
//	//3.���κ���
//	//һ�����������Ǿ����ⲿ�������Ե�
//	//���Ǳ�static����ʱ����Ϊ�ڲ���������
//	//�Ĵ����ڴ� register - ���齫����������ڼĴ���
//	//define - ���峣���ͺ�
//	//define�����ʶ������
//	//#define MAX 1000
//	//define�����
//	//�����в�����
//	//#define ADD (x,y) ((x) + (y))
//	//ADD - ����
//	// (x,y) - ��Ĳ����������������͵�
//	//((x) + (y)) - ����
//	//& - ȡ��ַ������
//	//�ڴ浥Ԫ
//	//���->��ַ->��ַҲ����Ϊָ��
//	//���ָ�루��ַ���ı�������ָ�����
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int * p = &a;
//	//p����ָ�����
//	//*p - �����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���
//	//*p����pָ��Ķ���
//	//&��*Ϊһ�Բ�����
//	//����ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ���ڴ��һ����ַ��Ҫ���ռ�
//	//32λ�����ϵĵ�ַ 32bitλ - 4byte
//	//64λ�����ϵĵ�ַ 64bitλ - 8byte
////printf("%zd\n", sizeof(char*));
////printf("%zd\n", sizeof(int*));
////printf("%zd\n", sizeof(float*));
//
//
//	return 0;
// }

//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	//�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//�ṹ��ָ�����->��Ա��
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
//һ��{}����һ�������
//else��������if���䣬���Ƕ���Ŵ��䣨�ڱ�������ͬʱ������
// 5 == num ��Ϊ������ num == 5 ����

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("ѡ�����\n");
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
//break - ����ѭ��
//continue - ��������ѭ�����ж��´�ѭ���Ƿ����
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
//	//printf("%c\n", ch);//��һ��
//	//putchar(ch);//�ڶ���
//	//return 0;
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//���鱾������һ����ַ�������Ҫscanf���ü�&
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	//getchar();//��ȡ��\n����������뻺����������
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
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