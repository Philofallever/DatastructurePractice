#include "pratice.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void to_binary(unsigned long);
int getnights(void);
int sump(int *, int *);
int getp(int *);

//int main(void)
//{
//	//char c = 'ABCD';
//	//printf("%c\n", c);
//	//short si = 65536;
//	//to_binary(65535);
//	//printf("\n");
//	//printf("%d\n", si);
//	//printf("max int = %d,min int = %d\n", INT_MAX, INT_MIN);
//	//int nights = getnights();
//	//printf("nights = %d",nights);
//	//char no_data[10] = {[6]=65};
//	//for (int i = 0;i < 10;i++)
//	//	printf("%c\n", no_data[i]);
//	//int arr[6] = { [4] = 2 };
//	//int marbles[10] = { 9,2,1,5,2,4,1,6,7,9 };
//	//int arr[4][2] = { {2,2},{3,4},{5,6},{7,9} };
//	//getp(arr[0]);
//
//
//	//int answer = 0;
//	//int * pz =&answer;			//pz是指向int 的指针
//	//int ** px = &pz;			//px是指向int指针的指针
//	//int *** pc = &px;			//pc是指向int指针的指针的指针
//	//answer = sump(marbles, marbles + 15);
//	//printf("%p %p\n", marbles, marbles + 1);
//
//	int ar[10];
//	int * ptr;
//	ptr = (int [2]) { 2, 2 };
//	//ar = (int[]) { 1, 2, 3 };
//
//	return 0;
//}

void  to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n/2);
	putchar('0'+ r);
	return;
}
int getnights(void)
{
	int nights;

	printf("How many nights do you needed?");
	while (scanf("%d",&nights)!=1)
	{
		scanf("%*s");
		printf("Please enter an integer,such as 2\n");
	}
	return nights;
}
int sump(int * start, int * end)
{
	int total = 0;
	while (start < end)
	{
		total += *start++;
	}
	return total;
}

int getp(int * ptr)
{
	int * ptz = ptr;
	for(int i =0;i<8;i++)
		printf("*ptz = %d\n", *ptr++);
	return 0;
}	


/*
第八章 字符输入/输出和输入确认
缓冲分为两类，完全缓冲I/O和行缓冲I/O。
对于完全缓冲来说，缓冲区满时被清空，这种类型的缓冲通常出现在文件输入中。缓冲区的大小取决于系统。
对于行缓冲来说，遇到一个换行字符时将被清空缓冲区。键盘输入是标准的行缓冲。
出入输出重定向 < >
scanf会跳过空格 换行 和制表符 而getchar 则不会
第九章 函数
void 函数隐式的 return 发生在函数的最后一个语句完成时。
递归的几个基本要点
- 每一级的函数调用都有自己的变量。
- 每一次的函数调用都会有一次返回。
- 递归函数中，位于递归调用前的语句和各级被调函数具有相同的执行顺序。
- 递归函数中，位于递归调用后的语句的执行顺序和各个别调函数的顺序相反。
- 虽然每一级递归都有自己的变量，但是函数代码并不会得到复制。
- 递归函数中必须包含可以终止递归调用的语句。
尾递归
递归的代价

第十章 数组和指针
未初始化的数组的元素数值是不确定的。
如果初始化部分数组，未初始化的元素则被设置为0。
一元运算符 *和++ 具有相同的优先级，但它在结合时是从右往左进行的。*ptr++
在C中，两个表达式ar[i]和*(ar+i)是等价的。而且不管ar是一个数组名还是一个指针变量，两个表达式都可以工作，然而只有ar是一个指针变量时，才可以使用ar++这样的表达式。
指向常量的指针(pointer to constant) 和 指针常量
int sum( int ar[][],int rows)				//错误的声明，编译器会将数据符号转化为指针。这样转化的时候需要知道指针指向所指对象的数据大小。
int sum( int ar[][4],int rows				//合法声明， ar指向4个int值构成的数组。

一般地，声明N维数组的指针时，除了最左边的方括号可以留空之外，其他都需要填写数值。
变长数组的意思是数组的维度可以用变量来指定。


//
*/

/*
第十一章 字符串和字符串函数

字符串常量是指位于一对引号内的任意字符，字符串常量属于静态储存类。
数组初始化是从静态存储区把一个字符串复制给数组，而指针初始化只是复制字符串的地址。数组形式中数组名是一个地址常量，所以不能应用++操作符。
gets:读取换行符之前的所有字符（不包括换行符），在这些字符后添加一个空字符（\0）。它将读取换行符并将丢弃，这样下一次读取就会在新的一行开始。不安全函数。
fgets：需要制定大小n，最多会读取n-1个字符。 
scanf:读取到下一个空白符（空格、换行、制表符），如果制定字符宽度n，则最多读取n个字符。scanf(%10s,name)。
puts:自动添加一个换行符。
fputs：不会自动添加换行符。
strcat:
strncat:
strcmp:
strncmp:
strcpy: strcpy的高级属性 strcpy(copy+7,origin);  第一个参数不需要指向数组的开始，这样就只可以复制数组的一部分。
strncpy:
char * strchar（char * s ,int c):返回一个指向字符创s1中存放c的第一个位置的指针或空指针。
char * strpbrk(const char * s1, const char * s2):返回字符串s1中存放s2字符串任何字符的第一个位置或空指针
char * strrchar(const char * s,int c):返回字符串s中最后一次出现字符c的位置的指针或空指针。
char * strstr(const char * s1,const char * s2):返回字符串s1中第一次出现s2的地方或空指针。

*/

/*
## 第十二章 存储类、链接和内存管理

	```
		C为变量提供了5种不同的存储模型，或称存储类。还有基于指针的第六种存储模型。存储时期就是变量在内存中保留的时间，变量的作用域和链接一起表明程序的哪些部分可以通过变量名来使用该变量。
	```
- 作用域：代码块作用域、函数原型作用域或者文件作用域。
	- 函数原型作用域从变量定义处一直到原型声明的末尾。
- 链接：外部链接（external linkage）、内部链接（internal linkage）、空链接（no linkage）.
	- 具有代码块作用域或者函数原型作用域的变量有空链接。用static存储类说明符表明一个文件作用域变量具有内部链接。
- 存储时期：静态存储时期（static storage duration）和自动存储时期（automatic storage duration）。
	- 具有文件作用域的变量具有静态存储时期，注意对于具有文件作用域的变量，关键词static表明链接类型，并非存储时期。
- 自动变量：默认情况下，在代码块或函数的头部定义的任意变量属于自动存储类。
	- 关键字auto成为存储类说明符。
	- 自动变量不会被自动初始化
- 内层定义覆盖
- 寄存器变量：关键字register声明一个寄存器变量。
	- 无法获取寄存器变量的地址。
	- 可以使用register声明的类型是有限的。
	- 可以把一个形式参量请求为寄存器变量。只需要在函数头部使用register关键字。
	``` c
		void macho（register int n）
	```
- 具有代码块作用域的静态变量：使用存储类说明符static在代码块内部声明创建。
	- 静态变量和自动变量拥有相同的作用域，但当包含这些变量的函数消失时，他们并不消失。
	- 静态变量和外部变量在程序调入内存时已经就位了。语句只是告诉函数可以使用该变量。
	- 对函数参量不能使用static。
- 具有外部链接的静态变量具有文件作用域、外部链接和静态存储时期，这一类型有时候被称为外部存储类，这一类型的变量被称为外部变量。
	- 如果变量是在别的文件中定义的，使用extern来声明该变量就是必须的。
	- 外部变量会被代码块作用域的变量内层定义覆盖。
	- 外部变量如果没有被初始化，将被自动初始化。
	- 只可以用常量表达式来初始化外部变量。
	- 定义声明和引用声明。定义声明为变量留出了存储空间，它构成了变量的定义，引用声明不会引起空间分配。
- 具有内部链接的静态变量，只可以被与它在同一个文件中的函数使用。
	- 可以在函数中使用存储类说明符extern来再次声明任何具有文件作用域的变量。

- __存储类和函数__
	- 函数也有存储类型。函数可以是外部的（默认情况下）或者静态的（c99增加了第三种可能性，即内联函数）。
	- 外部函数亦可被其他文件中的函数调用，而静态函数只可以在定义它的文件中使用。
	- 使用static存储类型的原因之一就是创建为一个特定模块所私有的函数，从而避免可能的名字冲突。
	- 通常使用extern关键字来声明在其他文件中定义的函数。
- __分配内存：malloc()和free()__
	- 函数malloc()它接受一个参数：所需内存的字节数，返回内存块的第一个字节的void类型指针或空指针（找不到所需空间时）。
	- 一般，对应没个malloc()调用，应该调用一次free()。
	- 设想malloc()和free()管理一个内存池。每次调用malloc()分配内存给程序使用，每次调用free()归还内存到池中，使内存可被再次使用。
	- free()的参数应该是一个指针，指向由malloc()分配的内存块。
	- 不能使用free()释放通过其他方式分配的内存。
	- 内存分配还可以使用calloc()，函数calloc()将块中所有的位置都置为0。
- __存储类与动态内存分配__
	```
		在编译时就已经知道了静态存储时期变量所需的内存数量，存储在这一部分的数据在整个程序这个运行期间都可用。这一个类型的没个变量在程序开始时就已存在，到程序终止时终止。
		一个自动变量在程序进入包含该变量的代码块时产生，在推出这一代码块时终止。因此伴随着程序对函数的调用和终止，自动变量使用的内存数量也在增加和减少。典型地，将这一部分内存理解为一个堆栈。这意味着在内存中，新变量在创建时按顺序加入，在消亡时按相反顺序移除。
		动态分配的内存在调用malloc()或相关函数时产生，在调用free()时释放。由程序员而不是一系列固定规则控制内存持续时间，因此内存块可在一个函数中创建，而在另一个函数中释放。由于这点，动态内存分配所需的内存部分可能变成碎片状，也就是说，在活动的内存块之间散布着未使用的字节片。不管怎样，使用动态内存往往导致进程比使用堆栈内存慢。
	```
## 第十三章 文件输入/输出
	
	```
		一个文件通常是磁盘上的一段命名的储存区。C将文件看成是连续的字节序列，其中每一个字节都可以单独地读取。
	```
- 文本视图和二进制视图
- exit()、EXIT_SUCCESS与EXIT_FAILURE
- fopen()返回FILE指针或NULL指针
	```
	"r": 读模式；
	"w": 写模式；
	"a": 追加模式；
	"r+": 更新模式，所有之前的数据都保留；
	"w+": 更新模式，所有之前的数据都删除；
	"a+": 追加更新模式，所有之前的数据都保留，只允许在文件尾部做写入。
	```
- getc()与putc()
- 文件结尾EOF
- fclose()成功关闭返回0，否则返回EOF
- fprintf()与fscanf()，FILE指针是第二个参数
- fgets()与fputs()
- fseek()与ftell()
	```
	SEEK_SET:文件开始；
	SEEK_CUR:当前位置；
	SEEK_END：文件结尾。
	```
- fread()与fwrite()

## 第十五章 位运算
- C的位运算符
```
- 逻辑运算符:
`~`:按位取反
`&`:位与(AND)
`|`:位或(OR)
`^`:位异或
用法：掩码、打开位、关闭位、转置位、查看一位的值
- 移位运算符:
`<<`:左移
`>>`:右移
```
- 位字段
```
位字段有一个结构声明简历，该结构声明为每个字段提供标签，并决定字段的宽度。
可以使用未命名的字段宽度“填充”未命名的空洞，使用一个宽度为0的未命名的字段迫使下一个字段与下一个整数对齐。
一个重要的机器依赖性是将字段放置到一个int中的顺序，存在大小端的区别所有位字段往往难以移植。
```

## 第十六章 C预处理器和C库

-  从宏变成最终的替换文本的过程称为宏展开。
```
- 宏常量可以代替char * 的字符串常量(char * 声明的字符串在程序代码和数据区，是只读的，这样声明只是获取到了字符串的指针)。
- 宏常量可以用来指定标准数组的大小。（c99后可以用变量来使用变长数组）。
- 宏常量可以作为const值的初始化值。
- 宏函数
```
-  宏函数
- 宏参数字符串化:#运算符，可以把语言符号转化成相应的字符串。
`#define PTX(X) printf("The value of "#X" is %d\n",X);`
- 预处理器粘合剂：##运算符，这个运算符可以把两个语言符号组成一个单个语言符号
`#define XNAME(n) x##n`
- 可变宏：...和 __VA_ARGS__：宏定义中的参数列表的最后一个参数为省略号，这样，预定义宏__VA_ARGS__就可以被用在替换的部分中，以表明省略号代表什么。
`#define PR(...) printf(__VA_ARGS__);`
- 宏还是函数
- 宏与函数的选择实际上时间与空间的权衡。宏花费更多空间而函数花费更多时间。
- 宏使用注意事项:
	- 宏名称中不能有空格。
	- 用圆括号括住每一个参数，并括住宏整体的定义。
	- 用大写字母表示宏函数名。
	- 如果打算用宏代替函数，先确定用宏替换是否会引起重大速度差异，只是用一次的宏对程序的运行时间不会有太大的改善，在循环嵌套中使用宏更有助于程序的运行。
- \#include指令
```
包含大型头文件并不一定显著增加程序的大小。很多情况下，头文件中的内容是编译器产生最终代码所需的信息，而不是加到最终代码里的具体语句。
头文件最常见的形式包括：
- 明显的常量
- 宏函数
- 函数声明
- 结构模板定义
- 类型定义
```
- 其他指令
- \#undef:取消定义一个给定的\#define，即使宏没有定义也是合法的。
- \#ifdef 和 \#ifndef
- \#if 和 \#elif：后面跟整数常量表达式。
```
`#if defined(x)` 这里defined是一个预处理器运算符。
```

- \#line 和\#error
```
#line 用于重置__LINE__和__FILE__宏报告的行号及文件名；
#error 指令使预处理器发出一条错误消息，该消息包含指令中的文本。
```
- \#pragma
- 内联函数
-　__C库__
- math.h库
- stdlib库：atexit()、qsort()
- string.h库：memcpy()、memmove()
- 可变参数stdarg.h:
```
可变长参数的函数的第一个参数起特殊作用，传给该参数的值将是省略号后面参数的个数。
- va_list ap：声明一个va_list类型的ap变量用于存放可变长参数
- va_start（ap）:将ap初始化为参数列表
- va_arg(ap,int):按照类型迭代获取参数，实参的类型必须与传入va_arg的类型说明符一致,这里并不会做隐式类型转换。
- va_end(ap):释放动态分配的用于存放参数的内存。
- va_copy(apcopy,ap):复制一份参数列表。
```


*/

#define TSIZE 45
#define MAX 5

struct film
{
	char title[TSIZE];
	int rating;
	struct film * next = NULL;
};
int main(int argc, char * argv[])
{
	struct film * head = NULL;
	struct film * prev, *current;
	char input[TSIZE];

	puts("Enter your first film title:");
	while (gets_s(input,TSIZE) !=NULL && input[0] != '\0')
	{
		current = (struct film *) malloc(sizeof(struct film));
		if (head == NULL)
		{
			head = current;
		}
		else
		{
			prev->next = current;
		}
		current->next = NULL;
		strcpy(current->title, input);
		printf("Enter the film rating< 0- 10>:\n");
		
		int tem = scanf("%d", current->title);
		while (tem != 1)
		{
			printf("Your input is not a number,try again\n");
			while (getchar() != '\n') //(跳过换行符，一直在输入缓冲区中，又读不进来)
			{
				;
			}
			tem = scanf("%d", current->title);
		}
		while (getchar() != '\n')
		{
			;
		}
		puts("Enter next film title (empty line to stop)");
		prev = current;
	}

	if (head = NULL)
		puts("no data entered!\n");
	else
		puts("Here is the moives list:\n");
	current = head;
	while (current != NULL)
	{
		printf("Moive: %s\t rating:%d", current->title, current->rating);
		current = current->next;
	}
	// release all memory
	current = head;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}

	printf("bye\n");
}

//}

