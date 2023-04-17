#include<iostream>
#pragma once

struct Node
{
	int data;
	Node* nextNode;

	Node()
	{
		data = 0;
		nextNode = nullptr;
	}
};

struct List
{
	Node* headNode;
	Node* curNode;
};

class LinkedList
{

public:

	List* list;

	LinkedList(); //������
	void InitList(); //����Ʈ �ʱ�ȭ

	Node* Find(List* list,Node* node); //���� ��� ã��
	void InsertHeadNode(int value); //�� �տ� ��� ����
	void InsertTailNode(int value); //�� ���� ��� ����
	void RemoveHeadNode(); // �� �� ��� ����
	void RemoveTailNode(); // �� �� ��� ����
	void RemoveCurNode(); // ���� ������ ��� ����
	void Clear(); // List �����
	void PrintCurNode(); // ���� ���ó�� ���
	void PrintAllNode(); //��� ��� ���

};

