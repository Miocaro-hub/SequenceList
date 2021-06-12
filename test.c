#define _CRT_SECURE_NO_WARNINGS
#include"Seqlist.h"

//����ͷβ����ɾ��
void TestSeqList1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);  //��5��ʼ������������ݾ��Ѿ���ʼԽ�����,����һ���ܼ�����,���û�м�����,Ҳ����˵����û������
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);  //��������(���ݵ�16)
	SeqListPushBack(&s, 10);
    SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPopFront(&s, -1);
	SeqListPopFront(&s, -2);
	SeqListPopFront(&s, -3);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListDestroy(&s);

	int pos = SeqListFind(&s, 5);
	if (pos != -1)
	{
		SeqListErase(&s, pos);
	}
}

int main()
{
	TestSeqList1();
	return 0;
}


