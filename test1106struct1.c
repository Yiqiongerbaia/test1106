#define _CRT_SECURE_NO_WARNINGS 1  
//�ṹ����һЩֵ�ü��ϣ���Щֵ��Ϊ��Ա�������ṹ���ÿһ����Ա�����ǲ�ͬ���͵ı���
//Ҫ����һ��ѧ�������֣����䣬�绰���Ա�
//struct�ṹ��ؼ��֣� stu�ṹ���ǩ��struct stu----�ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char table[12];
//	cha sex[5];
//}s1,s2,s3//������ȫ�ֵĻ��������

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char table[12];
//	char sex[5];
//}Stu;//��������ΪStu
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//struct stu s4;//�ֲ�����
//	Stu s6;
//	Stu s5={"����",18,"13980453099","��"};//�ṹ���ʼ��
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
	//��Ա����
	char name[20];
	int age;
	char table[12];
	char sex[5];
}Stu;//��������ΪStu
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);//name:����
	printf("age:%d\n", tmp.age);//age:18
	printf("table:%s\n", tmp.table);//table:13980345309
	printf("�Ա�%s\n", tmp.sex);//�Ա���
	return 0;
}
void print2(Stu* ps)
{
	printf("name:%s\n", ps->name);//name:����
	printf("age:%d\n", ps->age);//age:18
	printf("table:%s\n", ps->table);//table:13980345309
	printf("�Ա�%s\n", ps->sex);//�Ա���
	return 0;
}
int main()
{
	Stu s = { "����",18,"13980345309","��" };
	print1(s);
	print2(&s);
	return 0;
}
//ջ�����ֲ���������������ʽ��������������Ҳ���ٿռ�
// ��������̬�ڴ���䡣�漰�ĺ���malloc/free/realloc/calloc
// //��̬��:ȫ�ֱ�������̬��
//����ջ֡�Ĵ���������
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