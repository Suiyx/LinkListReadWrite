

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
	printf("���������������:");
	cin >> L->value;//�����һ����������ֵ
	n--;
	
	for (int i = 0; i < n; i++)
	{
		ListNode * p = new ListNode;
		
		cin >> p->value;
		p->next = nullptr;
		L->next = p;//����β�ն˽���ָ��ָ���½��
		L = p;//����ǰ���½�㶨��Ϊ��β�ն˽��
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
	printf("����������ĳ���:");
	scanf("%d", &n);
	CreateList(L, n);

	printf("�������ȡ�����λ��:");
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