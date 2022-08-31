#define _CRT_SECURE_NO_WARNINGS 1
//放在源文件第一行可以避免scanf函数报错
//编辑文件newc++file.cpp复制粘贴 #define _CRT_SECURE_NO_WARNINGS 1，以后所有新建项自带
//scanf_s函数 - VS编译提供，不是C语言标准规定，不能跨平台


//xxxx.c - 源文件
//xxxx.h - 头文件

//printf的使用，需要打招呼（引用头文件 stdio.h）
#include <stdio.h>

//1.写出主函数（main函数），一个工程里有且只有一个main函数
// 一个工程中可以有多个.c文件，但多个.c文件中只能有一个main函数
//C语言是从主函数的第一行开始执行的，所以代码中得有main函数作为程序入口
//int是函数的返回类型 int是整型的意思
//main函数名
//{}函数体

//全局变量 - {}外部定义的
int a = 100;

int main()
{
	//printf - 库函数 - 作用是在屏幕上打印信息的
	//在屏幕上打印：哈哈
	printf("哈哈哈\n");

	//创建一个空间ch来存放字符a
	char ch = 'a';
	//整型
	//int age = 20;
	//短整型
	short num = 10;
	//单精度浮点型
	//float weight = 55.5;
	//双精度浮点型 精度更高
	double d = 0.0;

	printf("%d\n",100);//打印一个整数 - %d

	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小，单位是字节。
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4 C语言标准sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	int age = 20;
	double weight = 75.3;
	age = age + 1;
	weight = weight - 10;
	printf("%d\n",age);
	printf("%lf\n",weight);

	//局部变量 - {}内部定义的
	int a = 10;
	//当局部变量和全局变量名字冲突的情况下，局部优先
	//不建议把局部变量和全局变量名字写成一样的
	printf("%d\n",a);//10


	//写一个代码求2个整数的和
	//scanf函数是输入函数
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);//sum = 5


	return 0;//返回整型
}

//ctrl+F5 编译+链接+运行代码


/*
数据类型
计算机语言用来写程序，程序用来解决生活中的问题，因此计算机语言必须有能力来描述生活中的问题。
商品价格 12.3 - 1.23*10^1 小数C语言中用浮点数表示
年龄 30  整数 C语言中用整型表示
char 字符数据类型
short 短整型
int 整型
long 长整型
long long 更长的整型
float 单精度浮点数
double 双精度浮点数

多种整型类型可以提高空间利用率
存在这么多类型是为了更加丰富的表达生活中的各种值
*/


/*
计算机中的单位
bit - 比特位 - 用来存放一个二进制位
byte - 字节 - 8bit
kb - 1024byte
mb - 1024kb
gb - 1024mb
tb - 1024gb
pb - 1024tb

计算机中识别二进制
1 - 一个1存储的话需要的空间就是一个比特位
0 - 一个0存储的话需要的空间就是一个比特位

8进制：0-7

10进制数字的组成
0-9
*/

/*
变量、常量
用数据类型来做什么呢？
用数据类型是来创建变量的
C语言必须有能力来描述生活中的问题
生活中的一些数据不可变：血型、性别、圆周率
生活中的一些数据可变：工资、年龄、体重
什么是变量？
能被改变的量
什么是常量？
不能改变的量

C语言如何描述变量？
类型 变量的名字 = 赋一个值;
变量分类：
局部变量：在{}内定义的变量
全局变量：在{}外定义的变量
变量如何使用？
当想用空间存放数据时就创建相应的变量

C语言如何描述常量？

打印类型
%d - 整理
%f - float
%lf - double
*/








































































