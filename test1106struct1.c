#define _CRT_SECURE_NO_WARNINGS 1  
//结构体是一些值得集合，这些值称为成员变量。结构体的每一个成员可以是不同类型的变量
//要描述一个学生：名字，年龄，电话，性别
//struct结构体关键字， stu结构体标签，struct stu----结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char table[12];
//	cha sex[5];
//}s1,s2,s3//是三个全局的机构体变量

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char table[12];
//	char sex[5];
//}Stu;//重新命名为Stu
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//struct stu s4;//局部变量
//	Stu s6;
//	Stu s5={"张三",18,"13980453099","男"};//结构体初始化
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit "; 
//	struct T t = { "hehehehe",{10,"w","hello word",3.14},arr };
//	printf("%s\n", t.ch);//hehehehe
//	printf("%s\n", t.s.arr);//hello word
//	printf("%lf\n",t.s.d);//3.140000
//	printf("%s\n", t.pc);//hello bit
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>

typedef struct stu
{
	//成员变量
	char name[20];
	int age;
	char table[12];
	char sex[5];
}Stu;//重新命名为Stu
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);//name:张三
	printf("age:%d\n", tmp.age);//age:18
	printf("table:%s\n", tmp.table);//table:13980345309
	printf("性别：%s\n", tmp.sex);//性别：男
	return 0;
}
void print2(Stu* ps)
{
	printf("name:%s\n", ps->name);//name:张三
	printf("age:%d\n", ps->age);//age:18
	printf("table:%s\n", ps->table);//table:13980345309
	printf("性别：%s\n", ps->sex);//性别：男
	return 0;
}
int main()
{
	Stu s = { "张三",18,"13980345309","男" };
	print1(s);
	print2(&s);
	return 0;
}
//栈区：局部变量。函数的形式参数。函数调用也开辟空间
// 堆区：动态内存分配。涉及的函数malloc/free/realloc/calloc
// //静态区:全局变量，静态变
//函数栈帧的创建和销毁
#include<stdio.h>
#include<string.h>
int add(int x,int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret=add(a, b);
	return 0;
}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	return 0;
//}