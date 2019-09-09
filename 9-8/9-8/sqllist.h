#ifndef _SEQLIST_H_
#define _SEQLIST_H_

typedef struct SeqList
{
	DataType* base;
	size_t    capacity;
	size_t    size;
}SeqList;

void SeqListInit(SeqList* psl, size_t capacity);
void SeqListPushBack(SeqList* psl, DataType x);
void SeqListShow(SeqList* psl);

////////////////////////////////////////////////////////////
void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->base = (DataType*)malloc(sizeof(DataType) * capacity);
	psl->capacity = capacity;
	psl->size = 0;
}

void SeqListPushBack(SeqList* psl, DataType x)
{
	if (psl->size >= psl->capacity)
	{
		printf("顺序表空间已满,%d不能插入.\n", x);
		return;
	}
	psl->base[psl->size++] = x;
}
void SeqListPushFront(SeqList* psl, DataType x)
{
	if (psl->size >= psl->capacity)
	{
		printf("顺序表空间已满,%d不能插入.\n", x);
		return;
	}

	for (int i = psl->size; i > 0; --i)
	{
		psl->base[i] = psl->base[i - 1];
	}
	psl->base[0] = x;
	psl->size++;
}

void SeqListShow(SeqList* psl)
{
	for (int i = 0; i < psl->size; ++i)
	{
		printf("%d ", psl->base[i]);
	}
	printf("\n");
}

#endif /* _SEQLIST_H_ */
