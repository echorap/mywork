#include <iostream>

class Node
{
public:
	int data;
	Node* next;
};


class LinkList
{
public:
	LinkList(){
		head = new Node;
		head->data = 0;
		head->next = NULL;
	}
	~LinkList(){
		delete head;
	}

	void CreatLinkList(int n);
	void InsertNode(int position, int d);
	void TraverseLinkList();
	bool IsEmpty();
	int GetLength();
	void DeleteNode(int position);
	void DeleteLinkList();

private:
	Node *head;
};

void LinkList::CreatLinkList(int n){
	if (n < 0){
		std::cout << "输入结点个数错误！" << std::endl;
	}
	else
	{
		Node *pnew, *ptemp;
		ptemp = head;
		int i = n;
		while (n-- >0)
		{
			pnew = new Node;
			std::cout << "输入第" << i - n << "个结点值\n";
			std::cin >> pnew->data;
			pnew->next = NULL;
			ptemp->next = pnew;
			ptemp = pnew;
		}
	}
}

void LinkList::TraverseLinkList()
{
	Node* p = head->next;
	while (p != NULL)
	{
		std::cout << p->data << std::endl;
		p = p->next;
	}
}

bool LinkList::IsEmpty()
{
	if (head->next == NULL){
		return true;
	}
	else{
		return false;
	}
}

int LinkList::GetLength()
{
	Node* p = head->next;
	int n = 0;
	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	return n;
}

void LinkList::InsertNode(int position, int d)
{
	if (position < 0 || position >GetLength() + 1)
	{
		std::cout << "输入错误！" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		Node *pnew, *ptemp;
		pnew = new Node;
		pnew->data = d;
		pnew->next = NULL;
		ptemp = head;

		while (position-- > 1)
		{
			ptemp = ptemp->next;
		}
		pnew->next = ptemp->next;
		ptemp->next = pnew;
	}
}

void LinkList::DeleteNode(int position)
{
	if (position<0 || position>GetLength() + 1)
	{
		std::cout << "输入错误！" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		Node *pdelete, *ptemp;
		ptemp = head;
		while (position-- >1)
		{
			ptemp = ptemp->next;
		}
		pdelete = ptemp->next;
		ptemp->next = pdelete->next;
		delete pdelete;
		pdelete = NULL;
	}
}

void LinkList::DeleteLinkList()
{
	Node *pdelete, *ptemp;
	pdelete = head->next;
	while (pdelete != NULL)
	{
		ptemp = pdelete->next;
		head->next = ptemp;
		delete pdelete;
		pdelete = ptemp;
	}
}


int main(){
	LinkList linklist;
	int position = 0, value = 0, n = 0;
	bool flag = false;

	std::cout << "请输入需要创建单向链表的结点个数：";
	std::cin >> n;
	linklist.CreatLinkList(n);

	std::cout << "请输入插入的位置和值：\n";
	std::cin >> position >> value;
	linklist.InsertNode(position, value);

	std::cout << "打印链表值如下：\n";
	linklist.TraverseLinkList();


	return 0;
}