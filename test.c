#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�����¼
//int main()
//{
	//printf("%s\n", __FILE__);
	//printf("%s\n", __TIME__);
	//printf("&s\n", __LINE__);
	//printf("%s\n", __DATE__);
/*
c:\users\wwaaaaaaaa\desktop\����\test_2\test_2\test.c
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
//	//һ�δ�����
//	sum = cap*(1 + 5 * 0.03);
//	printf("һ�δ�����ı�Ϣ�ͣ�%lf\n", sum);
//	//�ȴ����꣬�ٴ�����
//	tmp = cap*(1 + 2 * 0.021);
//	sum = tmp*(1 + 3 * 0.0275);
//	printf("�ȴ����꣬�ٴ�����ı�Ϣ�ͣ�%lf\n", sum);
//	//�ȴ����꣬�ٴ�����
//	tmp = cap*(1 + 3 * 0.0275);
//	sum = tmp*(1 + 2 * 0.021);
//	printf("�ȴ����꣬�ٴ�����ı�Ϣ�ͣ�%lf\n", sum);
//	//����������
//	int i = 0;
//	sum = cap;
//	for (i = 0; i < 5; i++)
//	{
//		sum *= (1 + 0.015);
//	}
//	printf("����������ı�Ϣ�ͣ�%lf\n", sum);
//	//���ڴ�һ���Ƚ���һ��
//	sum = cap;
//	for (i = 0; i < 20; i++)
//	{
//		sum *= (1 + 0.035 / 4);
//	}
//	printf("���ڴ�һ���Ƚ���һ�εı�Ϣ��Ϊ��%lf\n", sum);
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
//	printf("��������%lf�ף���ʮ�η�����%lf��\n", sum, h/2);
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
//	printf("���ӹ�ժ�ˣ�%d������\n", m);
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
//c����Ԥ����
//�����
//#define ADD(a,b) (a)+(b)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);//��#define �����ĺ�����Ԥ����׶λᱻ��ȫ�滻 ��int ret=(a)+(b);
//	printf("%d\n", ret);//30
//	return 0;
//}
//#define MAX(a,b) (a)>(b)?(a):(b)//ΪʲôҪ���ţ� ����
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
//	int ret = MUL(a + 1, b + 1);//�滻Ϊ ret=10+1*20+1; �����Ϊ31 ��Ԥ��ֵ��ͬ �����������б�Ҫ��
//	printf("%d\n", ret);//31 ������231
//	return 0;
//}
//��Ŀ
//#define MAX(a,b) ((a)>(b)?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	
//	printf("max=%d a=%d b=%d\n", max, a, b);//��ȫ���Ϊmax = ((a++) > (b++) ? (a++) : (b++));
//	//�ҵĴ𰸣�12 11 13
//	//��ȷ�𰸣�12 11 13
//	return 0;
//}
//ע����ͺ�������ǧ�� ����һ�㲻��ѡ���ú�
//�겻�������
//����  �õݹ�ķ������㺺��������
/*
�ഫ�ڹ�ӡ��ʥ���У���һ�ֱ���Ϊ��ŵ��(Hanoi)����Ϸ������Ϸ����һ��ͭ��װ���ϣ���������(���A��B��C)��
��A�����¶��ϡ��ɴ�С��˳�����n������(��ͼ1)����Ϸ��Ŀ�꣺��A���ϵĽ���ȫ���Ƶ�C���ϣ����Ա���ԭ
��˳����á���������ÿ��ֻ���ƶ�һ�����ӣ��������ƶ��������������϶�ʼ�ձ��ִ������£�С�����ϣ���
�����������ӿ�������A��B��C��һ���ϡ������ƶ�������2^n-1����˳����ӡ�ƶ����̣�
*/
//Ҫ�뽫n��Բ�̴�A�Ƶ�C ����Խ�n-1��Բ�̴�A�Ƶ�B,�ٽ��������Ƶ�C��ΪC�е����������C�п��Է���һԲ�̣������൱�ڿոˣ����Կ��Խ�n-2��Բ���Ƶ�A,�ٽ��ڶ���
//���̷ŵ�C����ʱC���൱�ڿոˣ�һ��ѭ�������õݹ顣
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
//	printf("������Բ�̸�����");
//	scanf("%d", &n);
//	//��A B C����������
//	MOVE(n , 'A', 'B', 'C',p);
//	printf("���ƶ�%d��\n", num);
//	return 0;
//}
//�������루#ifdef #endif  ;#if #endif��
//#define DEBUG 100
//int main()
//{
//#ifdef DEBUG
//	printf("haha\n");//���û�ж���DEBUG������ӡ��������������ӡ
//#endif
//	return 0;
//}
//int main()
//{
//#if 1//��ӡhaha
//#if 0//����ӡhaha
//	printf("haha\n");
//#endif
//	return 0;
//}
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");//��ӡhehe
//#else
//	printf("lala\n");
//#endif
//	return 0;
//}
//offsetof (type,member)
//���س�Ա�ֽ��е�ƫ��ֵ,���ֽ�����ָ����Ա����ṹ�Ŀ�ͷ֮�䡣
//#include<stddef.h>
//typedef struct stu {
//	char name[10];//0-9ƫ����
//	int age;//12-15ƫ����
//	int height;//16-19ƫ����
//}stu;
//int main()
//{
//	printf("%d %d %d\n", (int)offsetof(stu, name), (int)offsetof(stu, age), (int)offsetof(stu, height));//0 12 16
//	return 0;
//}
//�ú�ķ����Լ�����offsetof

//#include<stddef.h>
//#define OFFSETOF(type,member) (int)&(((stu*)0)->member)//�ɹ���
//typedef struct stu {
//	char name[10];//0-9ƫ����
//	int age;//12-15ƫ����
//	int height;//16-19ƫ����
//}stu;
//int main()
//{
//	printf("%d %d %d\n", (int)OFFSETOF(stu, name), (int)OFFSETOF(stu, age), (int)OFFSETOF(stu, height));//0 12 16
//	return 0;
//}
//������Ƶ��ᣡ��������������������������
//������Ƶ��ᣡ��������������������������
//������Ƶ��ᣡ��������������������������
//������������������������������������������������������������������������������������������������������������
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
//}������������������������������������������������������������
//leetcodeˢ���
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//	int x = 0;
//	int x1 = 0, x2 = 0, i, flag;
//	for (i = 0; i<numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//	//�ҵ�x�ж�������Ϊ1��λ��
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
