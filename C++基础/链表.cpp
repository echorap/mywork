#include<iostream>
using namespace std;

typedef struct node
{
	int age;
	char name[20];
	struct node *next;
}Node;

Node *createList(int n)
{
	Node *head = new Node;		//ͷ�ڵ�  һ��ͷ�ڵ㲻�洢����
	Node *pre = head;			// ��һ���ڵ�
	for (int i = 0; i < n; i++)
	{
		Node *p = new Node;
		printf("�������%d��ѧ�������������䣺", i + 1);
		cin >> p->name;
		cin >> p->age;

		pre->next = p;
		pre = p;
		p->next = NULL;
	}
	return head;
}


void display(Node *head)
{
	Node *p = head->next;
	while (p!=NULL)
	{
		cout << p->name << "," << p->age << endl;
		p = p->next;			// ��pָ����һ���ڵ�
	}
}

int length(Node *head)
{
	int count = 0;
	Node *p = head->next;
	while (p!=NULL)
	{
		count++;
		p = p->next;
	}

	return count;
}


void insertElement(Node *head, int index)
{
	if (index<0||index>length(head)){throw "out of range";}

	Node *pre = head;
	for (int i = 0; i < index; i++)
	{
		pre = pre->next;
	}
	//cout << pre->name;

	Node *newNode = new Node;
	cout << "�������½ڵ�����������䣺";
	cin >> newNode->name >> newNode->age;
	newNode->next = pre->next;
	pre->next = newNode;
}

void removeElement(Node *head ,int index)
{
	if (index<0 || index>length(head)-1){ throw "out of range"; }

	Node *pre = head;
	for (int i = 0; i < index; i++)
	{
		pre = pre->next;
	}

	Node *p = pre->next;		//p��Ҫ��ɾ���Ľڵ�
	//pre->next = pre->next->next;
	pre->next = p->next;
	delete p;
}


int main()
{
	int n = 5;
	Node *head = createList(n);
	//cout << length(head) << endl;
	int index = 0;
	cout << "����������½ڵ��λ�ã�";
	cin >> index;
	insertElement(head, index);
	display(head);
	while (1)
	{
		if (length(head)==0) break;
		cout << "������ɾ���½ڵ��λ�ã�";
		cin >> index;
		removeElement(head, index);
		display(head);
	}


	return 0;
}