#include<iostream>

using namespace std;

class Thing
{
public:
	virtual void what_am_I(){
		cout<<"I am a Thing.\n";
	}
	
	virtual ~Thing(){
		cout<<"Thing destructor\n";
	}
};

class Animal:public Thing
{
public:
	void what_am_I(){
		cout<<"I am an Animal.\n";
	}
	
	~Animal(){
		cout<<"Animal destructor\n";
	}
};


int main()
{
	Thing* t = new Thing();				// 声明一个父类指针，指向父类的堆空间
	Animal* a = new Animal();			// 声明一个子类指针，指向子类的堆空间
	
	Thing* array[2]; 
	array[0] = t;
	array[1] = a;
	for(int i=0;i<2;i++)
	{
		array[i]->what_am_I();
	}
	
	delete array[0];
	delete array[1];
	
	return 0;
}






















