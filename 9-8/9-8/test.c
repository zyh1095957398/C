#define _CRT_SECURE_NO_WARNINGS 1

#include"common.h"
#include"seqlist.h"

int main(int argc, char* argv[])
{
	SeqList mylist;
	SeqListInit(&mylist, DEFAULT_SIZE);

	DataType item;
	int pos, index;
	BOOL flag;
	int select = 1;
	while (select)
	{
		printf("************************************\n");
		printf("* [1] push_back     [2] push_front *\n");
		printf("* [3] show_list     [0] quit_system*\n");
		printf("* [4] pop_back      [5] pop_front  *\n");
		printf("* [6] find_pos      [7] find_val   *\n");
		printf("* [8] insert_pos    [9] delete_val *\n");
		printf("* [10] delete_pos   [11]length     *\n");
		printf("* [12] remove_all   [13] reverse   *\n");
		printf("* [14] sort         [15] clear     *\n");
		printf("************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ���������(��-1����):>");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("������Ҫ���������(��-1����):>");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushFront(&mylist, item);
			}
			break;
		case 3:
			SeqListShow(&mylist);
			break;
		case 4:
			SeqListPopBack(&mylist);
			break;
		case 5:
			SeqListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ��ѯ��λ��:>");
			scanf("%d", &pos);
			printf("Ҫ��ѯ������:%d\n", SeqListFindByPos(&mylist, pos));
			break;
		case 7:
			printf("������Ҫ��ѯ������:>");
			scanf("%d", &item);
			index = SeqListFindByVal(&mylist, item);
			if (index == -1)
				printf("Ҫ��ѯ������%d������.\n", item);
			else
				printf("Ҫ��ѯ���ݵ��±�Ϊ:>%d\n", index);
			break;
		case 8:
			printf("������Ҫ�����λ��:>");
			scanf("%d", &pos);
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			flag = SeqListInsertByPos(&mylist, pos, item);
			if (flag)
				printf("����ɹ�.\n");
			else
				printf("����ʧ��.\n");
			break;
		case 9:
			printf("������Ҫɾ��������:>");
			scanf("%d", &item);
			flag = SeqListEraseByVal(&mylist, item);
			if (flag)
				printf("ɾ��%d�ɹ�.\n", item);
			else
				printf("ɾ��%dʧ��.\n", item);
			break;
		case 10:
			printf("������Ҫɾ����λ��:>");
			scanf("%d", &pos);
			flag = SeqListEraseByPos(&mylist, pos);
			if (flag)
				printf("ɾ���ɹ�.\n");
			else
				printf("ɾ��ʧ��.\n");
			break;
		case 11:
			printf("SeqList Length = %d\n", SeqListLength(&mylist));
			break;
		case 12:
			printf("������Ҫɾ��������:>");
			scanf("%d", &item);
			SeqListRemoveAll(&mylist, item);
			break;
		case 13:
			SeqListReverse(&mylist);
			break;
		case 14:
			SeqListSort(&mylist);
			break;
		case 15:
			SeqListClear(&mylist);
			break;
		}
	}

	SeqListDestroy(&mylist);
	return 0;
}