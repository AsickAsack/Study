#include "LinkedList.h"

LinkedList::LinkedList() //생성자
{
    InitList();
}

void LinkedList::InitList() //초기화
{
    list = new List();
    list->curNode = nullptr;
    list->headNode = nullptr;
}

Node* LinkedList::Find(List* list, Node* node)
{
    
    if (list->headNode == nullptr)
    {
        std::cout << "Find 함수 - 현재 노드가 하나도 없습니다!" << std::endl;
        return nullptr;
    }
        
    Node* tempNode = list->headNode;

    while (tempNode != nullptr)
    {
        if (tempNode != node && tempNode->data == node->data)
        {
            list->curNode = tempNode;

            return tempNode;
        }
        else
        {
            tempNode = tempNode->nextNode;
        }
    }

    return nullptr;
}

void LinkedList::InsertHeadNode(int value)
{
    Node* newNode = new Node();
    newNode->data = value;

    newNode->nextNode = list->headNode;
    list->headNode = list->curNode = newNode;
}

void LinkedList::InsertTailNode(int value)
{
    Node* newNode = new Node();
    newNode->data = value;

    if (list->headNode == nullptr)
    {
        list->headNode = newNode;
        list->curNode = newNode;
    }
    else
    {
        Node* tempNode = list->headNode;

        while (true)
        {
            if (tempNode->nextNode == nullptr)
            {
                tempNode->nextNode = newNode;
                list->curNode = newNode;
                 
                break;
            }

            tempNode = tempNode->nextNode;
        }
    }
}

void LinkedList::RemoveHeadNode()
{
    if (list->headNode == nullptr)
    {
        std::cout << "RemoveHeadNode 함수 - 현재 노드가 하나도 없습니다!" << std::endl;
        return;
    }
    else
    {
        Node* tempNode = list->headNode;

        if (tempNode->nextNode != nullptr)
        {
            list->headNode = list->headNode->nextNode;
            list->curNode = list->headNode;

        }
        else
        {
            list->headNode = nullptr;
            list->curNode = nullptr;
        }
            
        delete tempNode;
    }
}

void LinkedList::RemoveTailNode()
{
    if (list->headNode == nullptr)
    {
        std::cout << "RemoveTailNode 함수 - 현재 노드가 하나도 없습니다!" << std::endl;
        list->curNode = nullptr;
        return;
    }
        
    Node* preNode = nullptr;
    Node* tempNode = list->headNode;

    while (tempNode->nextNode != nullptr)
    {
        preNode = tempNode;
        tempNode = tempNode->nextNode;
    }

    if (preNode != nullptr)
        preNode->nextNode = nullptr;
    else //노드가 1개일경우
    {
        list->headNode = nullptr;
        list->curNode = nullptr;
    }

    delete tempNode;
}

void LinkedList::RemoveCurNode()
{
    if (list->curNode == nullptr)
    {
        std::cout << "RemoveCurNode 함수 - 현재 노드가 없습니다!" << std::endl;
        return;
    }
     
    Node* tempNode = list->headNode;

    if (tempNode == list->curNode)
    {
        RemoveHeadNode();
        return;
    }

    while (true)
    {
        if (tempNode->nextNode == list->curNode)
        {
            tempNode->nextNode = list->curNode->nextNode;
            delete list->curNode;
            list->curNode = tempNode;

            break;
        }

        tempNode = tempNode->nextNode;
    }
}

void LinkedList::Clear()
{
    if (list->headNode == nullptr)
    {
        std::cout << "클리어 함수 - 현재 노드가 하나도 없습니다!" << std::endl;
        return;
    }
        
    Node* tempNode = list->headNode;

    while (tempNode != nullptr)
    {
        Node* deleteNode = tempNode;
        tempNode = tempNode->nextNode;

        delete deleteNode;
    }

    list->headNode = list->curNode = nullptr;
}

void LinkedList::PrintCurNode()
{
    if (list->curNode != nullptr) 
    {
        std::cout << "현재 노드 : " << list->curNode->data << std::endl;
    }
    else //현재 노드가 없다면
    {
        std::cout << "프린트curNode 함수 - 현재 노드가 없습니다!" << std::endl;
    }
}

void LinkedList::PrintAllNode()
{

    if (list->headNode == nullptr) //노드가 하나도 없다면
    {
        std::cout << "프린트AllNode 함수 - 현재 노드가 하나도 없습니다!" << std::endl;
        return;
    }
        
    Node* tempNode = list->headNode;

    std::cout << "========= 전체노드 출력 시작 ==========" << std::endl;

    while (tempNode != nullptr)
    {
        std::cout << tempNode->data << std::endl;
        tempNode = tempNode->nextNode;
    }

    std::cout << "========= 전체노드 출력 끝 ==========" << std::endl;
}
