#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	float  c = 0;
	float result = 0;
	for (a = 1; a <= 100; a++)
	{ 
		if (a % 2 != 0)
			result += (1.0 / a);
		else
		{
			result = result + (-1.0 / a);
		}
	}
	printf("%f", result);
	return 0;
}

#define pi 3.14
int main()
{
	int r = 0;
	float r, volume;
	scanf("%d", &r);
	float volume = 4.0 / 3 * pi * r * r * r;
	printf("volume = %f\n", volume); 
	return 0;
}
#include<string.h>
int main() 
{

	const char* p = "abcdef";

	printf("%d\n", strlen(p));			//	6
	printf("%d\n", strlen(p + 1));		//	5	�ڶ���Ԫ�ؿ�ʼ
	printf("%d\n", strlen(*p));			//	*p=a,�����Ƿ�����
	printf("%d\n", strlen(p[0]));		//	a��ͬ��
	printf("%d\n", strlen(&p));			//	p�ĵ�ַ�����ֵ
	printf("%d\n", strlen(&p + 1));		//	���p�ĵ�ַ�����ֵ
	printf("%d\n", strlen(&p[0] + 1));	//	5���ڶ���Ԫ�ؿ�ʼ

	printf("%d\n", sizeof(p));			// 4/8 ����ָ�����p�Ĵ�С��ʵ����p�����'a'�ĵ�ַ
	printf("%d\n", sizeof(p + 1));		// 4/8 p+1�õ�����'b'�ĵ�ַ
	printf("%d\n", sizeof(*p));			// 1   ���ǵ�һ��Ԫ��a
	printf("%d\n", sizeof(p[0]));		// 1   p[0]=*(p+0),arr[0]=*(arr+0)������Ԫ�صĴ�С
	printf("%d\n", sizeof(&p));			// 4/8 p����ǵ�ַ��&pȡ������p�ĵ�ַ����ַ4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8 p����ǵ�ַ��+1���p�ĵ�ַ�����ǵ�ַ,4/8
	printf("%d\n", sizeof(&p[0] + 1));	// 4/8 p[0]=a,&p[0]=&a�ĵ�ַ��+1����b�ĵ�ַ����ַ4/8

	 char arr[] = "abcdef";
			a b c d e f \0
		 
	printf("%d\n", strlen(arr));		//	6
	printf("%d\n", strlen(arr + 0));	//	6 +0������Ԫ�ص�ַ���ӵ�һ��Ԫ�ص�\0 
	printf("%d\n", strlen(*arr));//err	// *arr = a,ASCII=97,��Ϊһ����ַ��ʼ���ʣ��Ƿ����ʣ�ֱ�ӱ���	
	printf("%d\n", strlen(arr[1]));		// arr[1]=b��ͬ��
	printf("%d\n", strlen(&arr));		//	6 Ч��ͬarr��������������
	printf("%d\n", strlen(&arr + 1));	//	���ֵ������������鿪ʼ������
	printf("%d\n", strlen(&arr[0] + 1));//	5 &arr[0] = a����a��ʼ��������6-1=5��

	printf("%s", arr);
	printf("%d\n", sizeof(arr));		//	7	���������С��7Ԫ��
	printf("%d\n", sizeof(arr + 0));	//	8	��Ԫ�ص�ַ	4/8
	printf("%d\n", sizeof(*arr));		//	1	��һ��Ԫ�ش�С 1
	printf("%d\n", sizeof(arr[1]));		//	1	�ڶ���Ԫ�ش�С 2
	printf("%d\n", sizeof(&arr));		//	8	��Ԫ�� ��ַ	4/8
	printf("%d\n", sizeof(&arr + 1));	//	8	��Խ��������ĵ�ַ 4/8
	printf("%d\n", sizeof(&arr[0] + 1));//	8	�ڶ���Ԫ�صĵ�ַ  4/8
	return 0;
}