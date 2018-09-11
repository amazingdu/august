#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//动态数组结构体
typedef struct _Darray
{
	int *address;
	int capacity;
	int size;
}Darray;

//初始化动态数组
Darray *init_Darray()
{
}

//获得动态数组的长度
int len(Darray *p)
{
}

//判断动态数组是否为空
int isempty(Darray *p)
{
}

//获得动态数组的容量
int D_capacity(Darray *p)
{
}

//插入数据
void D_insert(Darray *p, int pos, int data)
{}

//删除指定位置的数据
void D_rm(Darray *p,int pos)
{}



















