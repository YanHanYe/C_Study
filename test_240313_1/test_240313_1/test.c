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
//	//����
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//���
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
//	//�����ֵ
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

//����n�Ľ׳�
// 1*2*3*...*n

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//����
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//����
//	printf("%d�Ľ׳˽����%d", n, ret);
//	return 0;
//}

//����1!+2!+3!+...+10!
//�Ա�_1
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
//	//����
//	printf("�������������ۼӽ���:>");
//	scanf("%d", &m);
//	//����
//	for (i = 1; i <= m; i++)
//	{
//		int c = fac(i);
//		ret = ret + c;
//	}
//	//���
//	printf("%d�׵��ۼӽ׳˽��Ϊ%d", m, ret);
//	return 0;
//}

//��_1
//int main()
//{
//	//��ʼ��
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int tem = 0;
//
//	//����
//	printf("�������������ۼӽ���:>");
//	scanf("%d", &tem);
//
//	//����
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
//	//���
//	printf("%d�׵��ۼӽ׳˽��Ϊ%d", tem, sum);
//
//	return 0;
//}

//�Ż�����
//1!=1
//2!=1*2
//3!=1*2*3
//ÿ�ν׳˶����Ͻ׽׳˽�����Ե�ǰ�׳˽���
//�����Ż��㷨
//int main()
//{
//	//��ʼ��
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int temp = 0;
//	
//	//����
//	printf("�������������ۼӽ���:>");
//	scanf("%d", &temp);
//
//	//����
//	for (i = 1; i <= temp; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//
//	//���
//	printf("%d�׵��ۼӽ׳˽��Ϊ%d", temp, sum);
//
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n
//���ֲ���

//int main()
//{
//	//��ʼ��
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//����
//	printf("������Ҫ���ҵ�����:>");
//	scanf("%d", &k);
//
//	//����+���
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("���ҵ������֣��±�Ϊ:%d\n", i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("�ڸ�������δ�ҵ���Ӧ����\n");
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
//    printf("������Ҫ���ҵ�����:>");
//    scanf("%d", &k);
//
//    // ����+���
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == k)
//        {
//            printf("���ҵ������֣��±�Ϊ:%d\n", i);
//            break;
//        }
//    }
//
//    if (i == sz)
//    {
//        printf("�ڸ�������δ�ҵ���Ӧ����\n");
//    }
//
//    return 0;
//}

//int main()
//{
//	//��ʼ��
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
//			printf("���ҵ����±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	//��ʼ��
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	
//	//����
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//		//�������ֵ��0����ʾ�����ַ������
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}	
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	  if (i == 3)
//	{
//		  printf("�����������������˳�����\n");
//	}
//	return 0;
//}

//���鴫�ε�ʱ�򴫵ݵ���������Ԫ�صĵ�ַ
//sizeof �� 64λ ��8

//��������Ϸʵ��
//���Բ���һ���������1-100��
//������
//�´���
//��С��

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
//	//���������
//	int ret = rand() % 100 + 1;//����������ĺ���
//	//printf("%d\n", ret); 
//	//������
//	while(1)
//	{
//		printf("�������(1-100):>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			//printf("������\n");
//		 	break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ��������´���!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto��� - ���������Ƕ������
//�ػ�����
//1.��������������1���Ӻ�͹ػ�
//2.������룺��������ȡ���ػ�

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("������ȷ����ȡ���ػ�");
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

////�����Ķ���
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
//	//���ú��������ֵ
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//дһ���������Խ����������ͱ���������

//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
//ֻ��ͨ��ȡ��ַ�ķ�ʽ�޸�
//��ַΨһ��
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
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//һ�������п����ж��.c�ļ�
//��ֻ����һ��main����
//�������÷�Ϊ��ֵ���úʹ�ַ����
//��ֵ����
//Swap1(a, b);
//��ַ����
//Swap1(&a, &b);

//дһ�������жϸ����ǲ�������

//��ӡ100-200֮�������
//������ֻ�ܱ�1����������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2 - i-1֮�������ȥ�Գ�i
//		int flag = 1;
//		//flag��1����ʾ������
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

//�㷨�Ż�
//���һ������������
//��ô��������һ����һ��С�����Ŀ���ֵ
//����a��bΪ������mΪ�÷�����
//��ôһ���� (a or b) <= sqrt(m)

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2 - i-1֮�������ȥ�Գ�i
//		int flag = 1;
//		//flag��1����ʾ������
//		int j = 0;
//		//i - 1��Ϊsqrt(i)
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

//дһ������
//�ж�һ�����ǲ�������

//int is_prime(int x)
//{
//	int i = 0;
//	//flagΪ1��Ϊ����
//	int flag = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//
//			//break����д
//			//��return�����
//			//�ú���������
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

//дһ�������ж�һ���ǲ�������
//�����жϵĹ���
//1.�ܱ�4���������Ҳ��ܱ�100����������
//2.�ܱ�400����������
//��ӡ1000-2000��֮�������

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
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
//		//�ж�year�ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���

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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	�ҵ��ˣ������±�
//	�Ҳ���������-1
//	��Ϊarr�����±�Ϊ0������
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}

//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ�Ԫ�ظ����ǲ����׵�

//��������
//bool true false

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1

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

//��������Ƕ�׵��ã�������Ƕ�׶���

//��ʽ���ʵ�ǰ�����з���ֵ
//��������void

//������д����ֵ�������飩��ʱ��Ĭ�Ϸ���������int

//int main(void)
//��ȷ��˵����main��������Ҫ����

//main������3������
// int main(int argc, char* argv[], char *envp[])

//�����������ܾ��������Ƿ���ʵ����
//����������ܾ��������Ƿ����

 //���뾲̬���.h�ļ�������Ǯ

//#pragma comment(lib, "add.lib")

//����ݹ�
//�����������ı�̼��ɳ�Ϊ�ݹ�

//%d�з�������
//%u�޷�������