#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int result = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	printf("%d", result);
	return 0;

}    //n!

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}  //1！+2！+3！...n!

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("find it,subscript:%d\n", mid);
			break;
		}  
	}
	if (left > right)
	{
		printf("cannot find\n");
	}
	return 0;
}  //find a number in the array(binary search)

#include<stdio.h>
#include<string.h>
#include<windows.h>
//#include<>
int main()
{
	char arr1[] = "welcom to alone!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}  //The characters move from both ends and converge towards the middle

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}   //Enter the password three times

#include<stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return(a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
	return 0;
}  // 8,10,12,14,16

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		a = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
} // a b c依大到小排序

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
} //0~100 3的倍数

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (r=m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
} //辗转相除法(欧几里得算法Euclidean algorithm)基于如下原理:
 //两个整数的最大公约数等于其中较小的数和两数的相除余数的最大公约数

int main()
{
	int year;
	int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
} //1000年到2000年之间的闰年
int main()
{
	int year;
    int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
} //1000年到2000年之间的闰年

int main()
{
	int i;
	int count=0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	} 
	printf("\ncount=%d\n", count);
	return 0;
} //质数 素数 PrimeNumber(Trial Division)
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	int j = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}//质数 素数 PrimeNumber(Trial Division),若为素数一定含可除数小于等于原数开平方，若为素数一定非偶数

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
    }
	printf("count=%d\n", count);
	return 0;
}//编写程序数一下1到100的所有整数中出现多少个数字9
