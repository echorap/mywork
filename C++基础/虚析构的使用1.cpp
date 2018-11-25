#include<iostream>
using namespace std;

class Thing
{
public:
	virtual void what_am_I(){
		cout<<"I am a thing.\n";
	}
	
	~Thing(){
		cout<<"Thing is destructor"<<endl;
	}
};

class Animal: public Thing
{
public:
	void what_am_I()		// ��д
	{
		cout<<"I am an Animal.\n";
	}
	
	~Animal()
	{
		cout<<"Animal destructor"<<endl;
	}
};


int main()
{
	Thing t;
	Animal a;
	
	Thing* array[2];
	array[0] = &t;
	array[1] = &a;
	
	for(int i=0;i<2;i++)
	{
		array[i] ->what_am_I();
	}
	
	//array[0]->what_am_I();
	//array[1]->what_am_I();
	
	return 0;
}


// ���н����

// I am a thing.			������ջ�ṹ
// I am an Animal.
// Animal destructor		��������
// Thing is destructor 		������������ø��������
// Thing is destructor

















