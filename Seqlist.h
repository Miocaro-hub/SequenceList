#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

//#define N 10
//˳�����Ч�����������б�����������
//��̬˳������(�̶���С)
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

//��̬˳������(��С�ɱ�)
typedef struct SeqList
{
	SLDataType* a;  //ָ��̬���ٵ�����
	int size;  //��Ч���ݵĸ���
	int capacity;  //�����ռ�Ĵ�С
}SL,SeqList;

//�ṹ���ʼ��
void SeqListInit(SL* ps);

//��ӡ�ṹ��
void SeqListPrint(SL* ps);

//�������������
void SeqListCheckCapacity(SL*ps);

//�ڴ�����
void SeqListDestroy(SL* ps);

//ʵ��β��βɾ��ͷ��ͷɾ
void SeqListPushBack(SL*ps, SLDataType x);
void SeqListPopBack(SL*ps);
void SeqListPushFront(SL*ps, SLDataType x);
void SeqListPopFront(SL*ps);

//ʵ������λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);

//˳������
int SeqListFind(SL*ps, SLDataType x);

//...��������ʵ��
int SeqListSort(SL*ps, SLDataType x);
int SeqListBinaryFind(SL*ps, SLDataType x);


//˳���
//1.�ɶ�̬����������
//2.����������洢ʱ����ʱ������

//ȱ��:
//1.�м����ͷ���Ĳ���ɾ������,��ҪŲ������ʱ,ʱ�临�Ӷ�ʱO(N)
//2.�ռ䲻��ʱ,���ݻ���һ�������ĺͿռ��˷�

//�ŵ�:
//1.�����������
//2.���������ʱȽϸ�(����ռ�����

//�Ƽ�һ����<<�����������ϵͳ>>