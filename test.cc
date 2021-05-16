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
