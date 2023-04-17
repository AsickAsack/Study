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

	LinkedList(); //생성자
	void InitList(); //리스트 초기화

	Node* Find(List* list,Node* node); //같은 노드 찾기
	void InsertHeadNode(int value); //맨 앞에 노드 삽입
	void InsertTailNode(int value); //맨 끝에 노드 삽입
	void RemoveHeadNode(); // 맨 앞 노드 삭제
	void RemoveTailNode(); // 맨 끝 노드 삭제
	void RemoveCurNode(); // 현재 선택한 노드 삭제
	void Clear(); // List 지우기
	void PrintCurNode(); // 현재 선택노드 출력
	void PrintAllNode(); //모든 노드 출력

};

