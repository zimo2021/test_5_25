#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//做题记录
//int main()
//{
	//printf("%s\n", __FILE__);
	//printf("%s\n", __TIME__);
	//printf("&s\n", __LINE__);
	//printf("%s\n", __DATE__);
/*
c:\users\wwaaaaaaaa\desktop\代码\test_2\test_2\test.c
19:38:05
&s
May  4 2021
*/
	//return 0;
//}
//int main()
//{
//	int cap = 1000;
//	double sum = 0;
//	double tmp = 0;
//	//一次存五年
//	sum = cap*(1 + 5 * 0.03);
//	printf("一次存五年的本息和：%lf\n", sum);
//	//先存两年，再存三年
//	tmp = cap*(1 + 2 * 0.021);
//	sum = tmp*(1 + 3 * 0.0275);
//	printf("先存两年，再存三年的本息和：%lf\n", sum);
//	//先存三年，再存两年
//	tmp = cap*(1 + 3 * 0.0275);
//	sum = tmp*(1 + 2 * 0.021);
//	printf("先存三年，再存两年的本息和：%lf\n", sum);
//	//连续存五年
//	int i = 0;
//	sum = cap;
//	for (i = 0; i < 5; i++)
//	{
//		sum *= (1 + 0.015);
//	}
//	printf("连续存五年的本息和：%lf\n", sum);
//	//活期存款，一季度结算一次
//	sum = cap;
//	for (i = 0; i < 20; i++)
//	{
//		sum *= (1 + 0.035 / 4);
//	}
//	printf("活期存款，一季度结算一次的本息和为：%lf\n", sum);
//	return 0;
//}
//double log (double x);
//#include<math.h>
//int main()
//{
//	double d = 300000, p = 6000, r = 0.01 ;
//	double m = log(p / (p - d*r)) / log(1 + r);
//	printf("%.1lf\n", m);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double arr[21] = { 0 };
//	arr[0] = 1;
//	arr[1] = 2;
//	for (i = 2; i < 21; i++)
//	{
//		arr[i] = arr[i - 2] + arr[i - 1];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		sum += arr[i + 1] / arr[i];
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double h = 100;
//	double sum = 100;
//	for (i = 0; i < 9; i++)
//	{
//		h /= 2;
//		sum += 2 * h;
//	}
//	printf("共经过：%lf米，第十次反弹：%lf米\n", sum, h/2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int m = 1;
//	for (i = 0; i < 9; i++)
//	{
//		m++;
//		m *= 2;
//	}
//	printf("猴子共摘了：%d个桃子\n", m);
//	return 0;
//}
//int main()
//{
//	int hou, min, sec,past;
//	scanf("%d:%d:%d", &hou, &min, &sec);
//	scanf("%d", &past);
//	if ((sec + past) >= 60)
//	{
//		sec = sec + past - 60;
//		min++;
//	}
//	if (min == 60)
//	{
//		min = 0;
//		hou++;
//	}
//	if (hou == 24)
//	{
//		hou = 0;
//	}
//	printf("%02d:%02d:%02d\n", hou, min, sec);
//	return 0;
//}
//typedef struct book {
//	char name[30];
//	double price;
//}book;
//int main()
//{
//	book arr[10] = { 0 };
//	int num,i;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		scanf("%[^\n]", arr[i].name);
//		//	gets(arr[0].name);
//		scanf("%lf", &arr[i].price);
//	}
//	double max, min;
//	int j, k;
//	max = arr[0].price;
//	min = arr[0].price;
//	for (i = 1; i < num ; i++)
//	{
//		if (arr[i].price > max)
//		{
//			max = arr[i].price;
//			j = i;
//		}
//		if (arr[i].price < min)
//		{
//			min = arr[i].price;
//			k = i;
//		}
//	}
//	printf("%6.2lf, %s\n", arr[j].price, arr[j].name);
//	printf("%6.2lf, %s\n", arr[k].price, arr[k].name);
//	return 0;
//}
//int main()
//{
//	book arr[10];
//	int i;
//	//gets(arr[0].name);
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i].name);
//	}
//	
//	printf("%s\n", arr[0].name);
//	return 0;
//}
//c语言预处理
//定义宏
//#define ADD(a,b) (a)+(b)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);//用#define 定义后的函数在预处理阶段会被完全替换 即int ret=(a)+(b);
//	printf("%d\n", ret);//30
//	return 0;
//}
//#define MAX(a,b) (a)>(b)?(a):(b)//为什么要括号？ 见下
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);//20  
//	return 0;
//}
//#define MUL(a,b) a*b
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MUL(a + 1, b + 1);//替换为 ret=10+1*20+1; 即结果为31 与预期值不同 所以括号是有必要的
//	printf("%d\n", ret);//31 而不是231
//	return 0;
//}
//题目
//#define MAX(a,b) ((a)>(b)?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	
//	printf("max=%d a=%d b=%d\n", max, a, b);//完全替代为max = ((a++) > (b++) ? (a++) : (b++));
//	//我的答案：12 11 13
//	//正确答案：12 11 13
//	return 0;
//}
//注：宏和函数各有千秋 不过一般不会选择用宏
//宏不方便调试
//穿插  用递归的方法计算汉洛塔问题
/*
相传在古印度圣庙中，有一种被称为汉诺塔(Hanoi)的游戏。该游戏是在一块铜板装置上，有三根杆(编号A、B、C)，
在A杆自下而上、由大到小按顺序放置n个金盘(如图1)。游戏的目标：把A杆上的金盘全部移到C杆上，并仍保持原
有顺序叠好。操作规则：每次只能移动一个盘子，并且在移动过程中三根杆上都始终保持大盘在下，小盘在上，操
作过程中盘子可以置于A、B、C任一杆上。计算移动次数（2^n-1）（顺带打印移动过程）
*/
//要想将n个圆盘从A移到C 则可以将n-1个圆盘从A移到B,再将最大的盘移到C因为C中的盘最大，所以C中可以放任一圆盘，所以相当于空杆，所以可以将n-2个圆盘移到A,再将第二大
//的盘放到C，此时C还相当于空杆，一次循环，可用递归。
//void move(char a, char c)
//{
//	printf("%c->%c\n", a, c);
//}
//void MOVE(int n ,char a, char b, char c,int* p)
//{
//	if (n == 1)
//	{
//		move(a, c);
//		(*p)++;
//	}
//	else
//	{
//		MOVE(n - 1, a, c, b, p);
//		move(a, c);
//		(*p)++;
//		MOVE(n - 1, b, a, c, p);
//	}
//	
//}
//int main()
//{
//	int n, num = 0;
//	int* p = &num;
//	printf("请输入圆盘个数：");
//	scanf("%d", &n);
//	//用A B C代表三个杆
//	MOVE(n , 'A', 'B', 'C',p);
//	printf("共移动%d次\n", num);
//	return 0;
//}
//条件编译（#ifdef #endif  ;#if #endif）
//#define DEBUG 100
//int main()
//{
//#ifdef DEBUG
//	printf("haha\n");//如果没有定义DEBUG，不打印，如果定义了则打印
//#endif
//	return 0;
//}
//int main()
//{
//#if 1//打印haha
//#if 0//不打印haha
//	printf("haha\n");
//#endif
//	return 0;
//}
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");//打印hehe
//#else
//	printf("lala\n");
//#endif
//	return 0;
//}
//offsetof (type,member)
//返回成员字节中的偏移值,其字节数在指定成员与其结构的开头之间。
//#include<stddef.h>
//typedef struct stu {
//	char name[10];//0-9偏移量
//	int age;//12-15偏移量
//	int height;//16-19偏移量
//}stu;
//int main()
//{
//	printf("%d %d %d\n", (int)offsetof(stu, name), (int)offsetof(stu, age), (int)offsetof(stu, height));//0 12 16
//	return 0;
//}
//用宏的方法自己创建offsetof

//#include<stddef.h>
//#define OFFSETOF(type,member) (int)&(((stu*)0)->member)//成功！
//typedef struct stu {
//	char name[10];//0-9偏移量
//	int age;//12-15偏移量
//	int height;//16-19偏移量
//}stu;
//int main()
//{
//	printf("%d %d %d\n", (int)OFFSETOF(stu, name), (int)OFFSETOF(stu, age), (int)OFFSETOF(stu, height));//0 12 16
//	return 0;
//}
//鹏哥视频完结！！！！！！！！！！！！！！
//鹏哥视频完结！！！！！！！！！！！！！！
//鹏哥视频完结！！！！！！！！！！！！！！
//——————————————————————————————————————————————————————
//int main()
//{
//	FILE* pf = fopen("in.txt", "wb");
//	int arr[10] = { 0 };
//	int arr1[10] = { 0 };
//	scanf("%d%d", &arr[0], &arr[1]);
//	fwrite(arr, sizeof(int), 2, pf);
//	fclose(pf);
//	pf = NULL;
//	FILE* pf1 = fopen("in.txt", "rb");
//	fread(arr1, sizeof(int), 2, pf1);
//	int sum = arr1[0] + arr1[1];
//	FILE* pf2 = fopen("out.txt", "wb");
//	fwrite(&sum, sizeof(int), 1, pf2);
//	printf("%d\n", sum);
//	fclose(pf1);
//	pf1 = NULL;
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
////}
//int main(int argc, char const *argv[])
//{
//	int a, b;
//	FILE* pf = fopen("in.txt", "r");
//	fscanf(pf, "%d %d", &a, &b);
//	rewind(pf);
//	pf = fopen("out.txt", "w");
//	fprintf(pf, "%d", (a + b));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("out.txt", "w");
//	fprintf(pf, "%d", 30);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}——————————————————————————————
//leetcode刷题记
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//	int x = 0;
//	int x1 = 0, x2 = 0, i, flag;
//	for (i = 0; i<numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//	//找到x中二进制数为1的位数
//	for (i = 0; i<32; i++)
//	{
//		if ((x >> i) & 1)
//		{
//			flag = i;
//			break;
//		}
//	}
//	for (i = 0; i<numsSize; i++)
//	{
//		if ((nums[i] >> flag) & 1 == 1)
//		{
//			x1 ^= nums[i];
//		}
//		else
//		{
//			x2 ^= nums[i];
//		}
//	}
//	int* arr = (int*)malloc(sizeof(int) * 2);
//	arr[0] = x1;
//	arr[1] = x2;
//	*returnSize = 2;
//	return arr;
//}
//int main()
//{
//	int nums[] = { 1,2,10,4,1,4,3,3 };
//	int sz = sizeof(nums);
//	int x1, x2, returnSize;
//	x1 = singleNumbers(nums, sz, &returnSize)[0];
//	x2 = singleNumbers(nums, sz, &returnSize)[1];
//	printf("%d %d\n", x1, x2);
//	return 0;
//}
//int removeDuplicates(int* nums, int numsSize) {
//	int des = 0, front = 0, back = 1, i;
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	for (i = 0; i<numsSize; i++)
//	{
//		if (nums[front] == nums[back])
//		{
//			front++;
//			back++;
//		}
//		else
//		{
//			nums[des] = nums[front];
//			des++;
//			front++;
//			back++;
//		}
//	}
//	/*front++;
//	nums[des] = nums[front];
//	des++;*/
//	return des;
//}
//int main()
//{
//	int i;
//	int arr[] = { 1,1,2 };
//	int sz = sizeof(arr)/sizeof(int);
//	int* p = (int*)malloc(sz * sizeof(int));
//	for (i = 0; i < sz; i++)
//	{
//		p[i] = arr[i];
//	}
//	int des = removeDuplicates(p, sz);
//	for (i = 0; i < des; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	return 0;
//}
