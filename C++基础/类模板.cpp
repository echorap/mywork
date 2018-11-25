// 类模板表示一组类，即多个类
#include<iostream>
using namespace std;


template<class T=float>
class Stack{
public:
	Stack(int s = 10);
	~Stack();

	int push(const T&);			// 入栈
	int pop(T&);
	int isEmpty() const;
	int isFull() const;
	void print(ostream& output);

private:
	int size;
	int top;
	T *stackPtr;
};

template<class T>
Stack<T>::Stack(int s){
	size = s;
	top = -1;
	stackPtr = new T[size];
};

template<class T>
Stack<T>::~Stack(){
	delete[]stackPtr;
	stackPtr = NULL;
};

template<class T>
int Stack<T>::push(const T& item){
	if (!isFull())
	{
		stackPtr[++top] = item;
		return 1;
	}
	return 0;
}

template<class T>
int Stack<T>::pop(T& item)
{
	if (!isEmpty())
	{
		item = stackPtr[top--];
		return 1;
	}
	return 0;
}

template<class T>
int Stack<T>::isEmpty() const
{
	return top == -1;
}

template<class T>
int Stack<T>::isFull() const
{
	return top == size - 1;
}

template<class T>
void Stack<T>::print(ostream& output)
{
	output << "Stack(";
	for (int i = 0; i < top; i++)
	{
		output << stackPtr[i] << ",";
	}
	output << ")\n";
}


int main()
{
	Stack<>s1;				     // 使用默认值
	for (int i = 0; i < 5; i++)
	{
		s1.push(i * 10.321);
	}
	s1.print(cout);

	float f = 0.0;
	for (int i = 0; i < 2; i++)
	{
		s1.pop(f);
		cout << f << endl;
	}
	s1.print(cout);


	system("pause");
	return 0;
};