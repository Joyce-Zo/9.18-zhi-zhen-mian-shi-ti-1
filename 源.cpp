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
	printf("%d\n", strlen(p + 1));		//	5	第二个元素开始
	printf("%d\n", strlen(*p));			//	*p=a,报错，非法访问
	printf("%d\n", strlen(p[0]));		//	a，同上
	printf("%d\n", strlen(&p));			//	p的地址，随机值
	printf("%d\n", strlen(&p + 1));		//	跨过p的地址，随机值
	printf("%d\n", strlen(&p[0] + 1));	//	5，第二个元素开始

	printf("%d\n", sizeof(p));			// 4/8 计算指针变量p的大小，实际上p存的是'a'的地址
	printf("%d\n", sizeof(p + 1));		// 4/8 p+1得到的是'b'的地址
	printf("%d\n", sizeof(*p));			// 1   就是第一个元素a
	printf("%d\n", sizeof(p[0]));		// 1   p[0]=*(p+0),arr[0]=*(arr+0)就是首元素的大小
	printf("%d\n", sizeof(&p));			// 4/8 p存的是地址，&p取出的是p的地址，地址4/8
	printf("%d\n", sizeof(&p + 1));		// 4/8 p存的是地址，+1跨过p的地址，还是地址,4/8
	printf("%d\n", sizeof(&p[0] + 1));	// 4/8 p[0]=a,&p[0]=&a的地址，+1就是b的地址，地址4/8

	 char arr[] = "abcdef";
			a b c d e f \0
		 
	printf("%d\n", strlen(arr));		//	6
	printf("%d\n", strlen(arr + 0));	//	6 +0还是首元素地址，从第一个元素到\0 
	printf("%d\n", strlen(*arr));//err	// *arr = a,ASCII=97,作为一个地址开始访问，非法访问，直接报错	
	printf("%d\n", strlen(arr[1]));		// arr[1]=b，同上
	printf("%d\n", strlen(&arr));		//	6 效果同arr，都是整个数组
	printf("%d\n", strlen(&arr + 1));	//	随机值，跨过整个数组开始向后计数
	printf("%d\n", strlen(&arr[0] + 1));//	5 &arr[0] = a，从a开始向后计数，6-1=5个

	printf("%s", arr);
	printf("%d\n", sizeof(arr));		//	7	整个数组大小，7元素
	printf("%d\n", sizeof(arr + 0));	//	8	首元素地址	4/8
	printf("%d\n", sizeof(*arr));		//	1	第一个元素大小 1
	printf("%d\n", sizeof(arr[1]));		//	1	第二个元素大小 2
	printf("%d\n", sizeof(&arr));		//	8	首元素 地址	4/8
	printf("%d\n", sizeof(&arr + 1));	//	8	跨越整个数组的地址 4/8
	printf("%d\n", sizeof(&arr[0] + 1));//	8	第二个元素的地址  4/8
	return 0;
}