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



int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}//1/1-1/2+1/3-1/4+1/5......+1/99-1/100



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}//求10个整数中最大值



int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}//乘法口诀表打印（对齐）"%2d右对齐，%-2d左对齐，2d打印两位"



#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void menu()
{
	printf("********************\n");
	printf("*** 1.play 0.exit***\n");
	printf("********************\n");
}
void game()
{
	int ret = rand()%100+1;//生成随机数(取模100的余数为0~99，加1为1~100) 
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//拿时间戳设置生成起点
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}//循环猜数字游戏



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	//shutdown -s -t 60
	//system() 执行系统命令
	again:
	printf("电脑将在1分钟内关机，如果输入：取消，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}//用goto again 执行循环
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	//shutdown -s -t 60
	//system() 执行系统命令
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入：取消，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "取消") == 0)//比较两个字符串-strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}//用while（1）执行循环



int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max= get_max(a, b);
	printf("%d\n", max);
	max = get_max(100, 300);
	printf("%d\n", max);
	return 0;
}//自定义函数，比大小

void Swap(int* pa, int* pb)//形参实例化之后其实相当于实参的一份临时拷贝
//void声明函数返回值为0（没有返回值）
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}//交换相应地址里的内容
int main()
{
int a = 10;
int b = 20;

printf("a=%d b=%d\n", a, b);
Swap(&a, &b);
printf("a=%d b=%d\n", a, b);
	return 0;
}//建立函数，交换数据 



#include<stdio.h>
#include<math.h>
int is_prime(int n)//是素数返回1，不是素数返回0
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}//判断素数的自定义函数，自除至平方根



int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否为闰年
		if (1 == is_leap_year(year))
		{
			printf("%d  ", year);
		}
	}
	return 0;
}//自定义函数判断是否为闰年



int binary_search(int arr[], int k,int sz)//二分查找自定义函数
{

	int left = 0;
 	int right = sz - 1;
	while (left<=right)
	{

		int mid = (left + right) / 2;
		if (arr[mid] < 7)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return  mid;
		}
	}
	return -1;
}

int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了返回，这个数的下标。找不到的返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("can not find\n");
	}
	else
	{
		printf("find it the subscript is:%d\n", ret);
	}
	return 0;
}



void Add(int* p)//每调用一次这个函数，就会将num的值增加1
{
	(*p)++;//++的优先级更高，因此，*p需要先括号
}
int main()
{
	int num = 0;
	for (int i = 0; num < 4; i++)
	{
		Add(&num);
		printf("num=%d\n", num);
	}
	return 0;
}



#ifndef __ADD_H__
#define __ADD_H__
//函数的声明
int Add(int x, int y);
#endif//函数头文件的声明，防止过度引用（add.h）


int Add(int x, int y)
{
	return x+y;
}//函数文件（add.c）



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}//引用自定义函数（test.c）



void print(int n)//接受一个整型值（无符号），按照顺序打印它的每一位。输入：1234，输出1 2 3 4。递归
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10); 
}
int main()
{
	unsigned int num = 123;
	print(num);
	return 0;
}



#include<stdio.h>
#include<string.h>
int my_strlen(char* str)//str指针变量
{//计算字符串的长度(模拟实现strlen函数)
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//地址+1向后走一步
	}
	return count;
}
int main()
{
	char arr[] = "biteee";
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("%d\n", len);
	return 0;
}

#include<string.h>
int my_strlen(char* str)//递归的方法解决上述问题
{
	if (*str != '\n')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "biteee";
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("%d\n", len);
	return 0;
}



int Facl(int n)//计算n!的函数定义
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Facl(n);
	printf("%d\n", ret);
	return 0;
}



int Facl(int n)//计算n!采用递归方法
{
	if (n <= 1)
		return 1;
	else
		return n * Facl(n - 1);

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Facl(n);
	printf("%d\n", ret);
	return 0;
}



int count = 0;
int Fib(int n)
{
	//测试第三个斐波那契数的计算次数(当使用递归算法)
	if (n == 3)
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n-2) + Fib(n-1);

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Fib(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
}



int Fib(int n)//求第n个斐波那契数列通过循环，正解
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Fib(n);
	printf("%d\n", ret);
	return 0;
}



int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//打印二维数组
	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
	return 0; 
}



int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };//打印二维数组地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p ",i,j,&arr[i][j]);
		}
		printf("\n");
	}
	return 0; 
}



void bubble_sort(int arr[],int sz)//参数接收数组元素个数
{//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{//每一趟冒泡排序
		int flag = 1;//假设这一趟要排序的数据已经有序
		int j = 0;
		for(j = 0; j < sz - 1 - i; j++)
		{
		  if (arr[j] > arr[j + 1])
		  {
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			flag = 0;//本趟排序的数据其实不完全有序
		  }
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 5,8,7,6,9,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;  
} 




//三子棋游戏test.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("******1.play 0.exit*******\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//全部空格
	InitBoard(board, ROW, COL);	//棋盘初始化
	DisplayBoard(board, ROW, COL);//打印棋盘 
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
    if(ret=='*')
	{
	printf("玩家赢\n");
	}
	else if (ret == '#')
	{
	printf("电脑赢\n");
	}
	else
	{
	printf("平局\n");
	}
}
void test()
{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择:>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择");
				break;
			}
		} while (input);
}
int main()
{
	test();
	return 0;  
} 

//三子棋游戏game.h
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
//玩家赢  '*'
//电脑赢  '#'
//平局    'Q'
//继续    'C'

char IsWin(char board[ROW][COL], int row, int col);

//三子棋游戏game.c
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{	
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)    
	{
		//1.打印一行的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
} 
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//返回1表示棋盘满了
//返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//横三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//竖三列
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}


//扫雷游戏game.h
#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

//扫雷游戏game.c
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand()% row + 1;//1-9
		int y = rand()% col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}
get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return    
	mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算X,Y坐标周围有几个雷
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}

}

//扫雷游戏test.c
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************1.play***********\n");
	printf("**************0.exit***********\n");
}
void game()
{
	//雷的信息存储。1.布置好的雷的信息2.排查出的雷的信息
	char mine[ROWS][COLS] = { 0 };//11x11
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;


		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

#include<stdio.h>//不创建临时变量，实现两个数的交换
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a,b);
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a,b);
	return 0;
}



#include<stdio.h>//求一个整数存储在内存中的二进制中1的个数
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}



#include<stdio.h>
int get_max(int x, int y)//三目操作符比较大小
{
	return x > y ? x : y;
}
int main()
{
	int a = 20;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}



#include<stdio.h>
struct Stu//创建一个结构体类型
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	struct Stu s1 = { "张三",20, "20190909" };
		//使用struct Stu这个类型创建了一个学生对象s1,并初始化
	struct Stu* ps = &s1;
	printf("%d\n", s1.age);
	printf("%s\n", s1.name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->name);
		//结构体变量.成员名
	return 0;
}



#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
    char* end = str;
	while (*end != '\0')
	{
		end++;			
	}
	return end - start;
}
int main()
{
	//
	//strlen-求字符串长度
	//递归-模拟实现了strlen-计数器的方式1，递归的方式2
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}



int main()//指针与数组
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%p====%p\n", p + i, &arr[i]);
	}
	return 0;
}




void Reverse(int arr[], int sz)//函数完成数组元素的逆置
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Init(int arr[], int sz)//函数完成数组初始化
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)//函数完成数组的打印
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Print(arr, sz);//打印数组
	Reverse(arr,sz);
	Print(arr, sz);

	return 0;
}




#include<stdio.h>
int main()//数组元素交换
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}



#include<stdio.h>
#include<stdlib.h>
int count_bit_one(unsigned int n)//作为无符号数输入（以补码形式输入）
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
//统计二进制中1的个数
//写一个函数返回参数二进制中1的个数
//写一个函数求其二进制（补码）表示有几个1
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d\n",count);
	system("pause");//system库函数执行系统命令暂停
	return 0;
}



int count_bit_one(int n)//作为无符号数输入（以补码形式输入）
//11111111111111111111111
//00000000000000000000001
//00000000000000000000001 按位与
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
//统计二进制中1的个数
//写一个函数返回参数二进制中1的个数
//写一个函数求其二进制（补码）表示有几个1
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d\n",count);
	system("pause");//system库函数执行系统命令暂停
	return 0;
}




int count_bit_one(int n)//作为无符号数输入（以补码形式输入）
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n
int main()
//统计二进制中1的个数
//写一个函数返回参数二进制中1的个数
//写一个函数求其二进制（补码）表示有几个1
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d\n",count);
	system("pause");//system库函数执行系统命令暂停
	return 0;
}




#include<stdio.h>
#include<stdlib.h>
int get_diff_bit(int m, int n)
//求二进制中不同位的个数
//两个int（32位）整数m和n的二进制表达中，有多少个位bit不同？
//先取按位异或，相同为0，不同为1;再计算含多少个1
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count=get_diff_bit(m, n);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}




#include<stdio.h>
#include<stdlib.h>
//打印二进制的奇数位和偶数位
void print(int m)
{
	int i = 0;
	printf("奇数位：\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("偶数位：\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	system("pause");
	return 0;
}



#include<stdio.h>
#include<stdlib.h>
void print(int*p,int sz)//打印一个数组
{
 int i = 0;
 for (i = 0; i < sz; i++)
 {
	 printf("%d ", *(p + i));
 }
 printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	system("pause");
	return 0;
}



//将参数字符串中的字符反向排列
//不能使用C函数库中的字符串操作函数
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;
	while (left < right)
	{
		int tmp = arr[left]; 
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}




//编写一个函数 reverse_string（char*string)递归实现
//将参数字符串中的字符反向排列
//不能使用C函数库中的字符串操作函数
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0]=arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1)>=2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp; 
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}



//编写一个函数, 输入一个非负整数，返回组成它的数字之和
//输入1729，输出1+7+9+2=19
int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else 
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("ret=%d\n", ret);
	return 0;
}



//n的K次方
double Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()// 1！+2！+3！+...n!
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int j = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int ret = 1;//循环中ret需要重置为1开始阶乘
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}   



#include<stdio.h>
#include<stdlib.h>
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//复制'\0'
}
int main()
{
//strcpy	
//字符串拷贝(6分)
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	while (*dest++=*src++)
	{
		;
	}
}
int main()
{
//strcpy	
//字符串拷贝
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, NULL);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}   



#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
//strcpy	
//字符串拷贝(10分)
	char arr1[] = "#################";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	system("pause");
	return 0;
}




#include<assert.h>
int my_strlen(const char* str)
	//计算字符串长度
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}   




int check_sys()
{
	int a = 1;
	return (*(char*)&a);

}
int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	//返回1，小端
	//返回0，大端
	int ret=check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}    



int main()
//255
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}



int main()
{
	//指针数组是 数组，用来存放指针的
	int arr[10] = { 0 };//整型数组
	char ch[5] = { 0 };//字符数组
	int* parr[4];//存放整形指针的数组-指针数组
	char* pch[5];//存放字符指针的数组-指针数组
	return 0;
}



int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 1 };
	int arr3[] = { 1, 2, 3, 1, 1 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}



int main()
{
	int* p = NULL;//p是整形指针-指向整形的指针-可以存放整形的地址
	char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
	int arr[10] = { 0 };
	//arr-首元素地址
	//&arr[0]-首元素的地址
	//&arr-数组的地址
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p)[10] = &arr;//p是数组指针
	


	return 0;
}



#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*pa)[i]);
	}
	return 0;
}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa + i));
	}
	return 0;
}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}



//函数指针-指向函数的指针
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void(*p)(char*) = Print;
	(*p)("hello bit");
	return 0;
}



void(*signal(int, void(*)(int)))(int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int.第二个是函数指针。该函数指针指向的函数的参数是int,返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int,返回类型是void
//简化
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
typedef unsigned int uint;




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("*********************\n");
	printf("****1.add 2.sub******\n");
	printf("****3.mul 4.div******\n");
	printf("***    0.exit     ***\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0, y = 0;
	//pfArr 是一个函数指针数组（函数指针的用途：转移表）
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if(input>=1 && input<=4)
		{
		printf("请输入两个操作数：>");
		scanf("%d%d", &x, &y);
		int ret = pfArr[input](x, y);
		printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		} 
		else
		{
			printf("选择错误\n");
		}
	} while (input);
}




int main()
{
	int(*pf)(int, int);//函数指针
	int(*pfArr[4])(int, int);
	//pfArr是一个数组-函数指针的数组
	int(*(*ppfArr)[4])(int, int) = &pfArr;
	//ppfArr是一个指向 函数指针数组 的指针
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型值
	return (*(int*)e1 - *(int*)e2);
	//return((int)(*(float*)e1 - *(float*)e2)); 数组为浮点型时的强制类型转换
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	//float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
		//printf("%f ",f[j]);
	}
}
int main()
{
	test1();
	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//使用回调函数，模拟实现qsort采用冒泡的方式
int cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void swap(void* p1, void* p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble(void* base, int sz, int width, int(*cmp)(void*, void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}



int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
//ptr1[-1]=*(ptr-1) P142




int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);//p[0]=*(p+0)
	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}//P145




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	gets(arr);//abcdef--->fedcba
	//逆序函数:
	//输入一个字符串，可以有空格；输出逆序的字符串
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求Sn=a+aa+aaa+aaaa+aaaaa
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
 



#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为自幂数(水仙花数)
		//1.计算i的位数 -n位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.比较i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
 


#include<stdio.h>
#include<math.h>
//打印一个菱形图案
int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
 


#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//买回来的汽水喝掉
	total = money;
	empty = money;
	//换回来的汽水
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d ",total);
	return 0;
}
 


#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//买回来的汽水喝掉
	total = money;
	empty = money;
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	printf("%d ",total);
	return 0;
}
 
