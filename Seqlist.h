#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//#define N 10
//顺序表有效数据在数组中必须是连续的
//静态顺序表设计(固定大小)
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};
//
//void SeqListPushBack(struct SeqList*ps, SLDataType x);
//void SeqListPopBack(struct SeqList*ps);
//void SeqListPushFront(struct SeqList*ps, SLDataType x);
//void SeqListPopFront(struct SeqList*ps);

//动态顺序表设计(大小可变)
typedef struct SeqList
{
	SLDataType* a;  //指向动态开辟的数组
	int size;  //有效数据的个数
	int capacity;  //容量空间的大小
}SL,SeqList;

//结构体初始化
void SeqListInit(SL* ps);

//打印结构体
void SeqListPrint(SL* ps);

//检查容量并扩容
void SeqListCheckCapacity(SL*ps);

//内存销毁
void SeqListDestroy(SL* ps);

//实现尾插尾删和头插头删
void SeqListPushBack(SL*ps, SLDataType x);
void SeqListPopBack(SL*ps);
void SeqListPushFront(SL*ps, SLDataType x);
void SeqListPopFront(SL*ps);

//实现任意位置的插入删除
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);

//顺序表查找
int SeqListFind(SL*ps, SLDataType x);

//...其他功能实现
int SeqListSort(SL*ps, SLDataType x);
int SeqListBinaryFind(SL*ps, SLDataType x);


//顺序表
//1.可动态增长的数组
//2.数据在数组存储时必须时连续的

//缺点:
//1.中间或者头部的插入删除很慢,需要挪动数据时,时间复杂度时O(N)
//2.空间不够时,增容会有一定的消耗和空间浪费

//优点:
//1.可以随机访问
//2.缓存命中率比较高(物理空间连续

//推荐一本书<<深入理解计算机系统>>