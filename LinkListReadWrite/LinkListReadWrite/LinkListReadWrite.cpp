

#include "stdafx.h"


#include<iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
};



void CreateList(ListNode * L, int n)
{
	printf("清输入链表的数据:");
	cin >> L->value;//输入第一个结点的数据值
	n--;
	
	for (int i = 0; i < n; i++)
	{
		ListNode * p = new ListNode;
		
		cin >> p->value;
		p->next = nullptr;
		L->next = p;//将表尾终端结点的指针指向新结点
		L = p;//将当前的新结点定义为表尾终端结点
	}
	
}
ListNode* GetElem(ListNode * L, int i)
{
	int j;
	ListNode *p = L;
	j = 1;
	while (p && j<i)
	{
		p = p->next;
		j++;
	}
	if (!p || j>i)
	{
		return nullptr;
	}
	return p;
}

int main()
{
	ListNode * L = new ListNode;
	L->next = nullptr;
	int n;
	int m;
	printf("清输入链表的长度:");
	scanf("%d", &n);
	CreateList(L, n);

	printf("清输入获取链表的位置:");
	scanf("%d",&m);
	ListNode* elem = GetElem(L, m)
		;
	if (elem == nullptr)
	{
		cout << "error" << endl;
	}
	else
	{
		cout << elem->value << endl;
	}

	system("pause");
	return 0;
	
}