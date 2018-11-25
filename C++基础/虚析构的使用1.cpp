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
	void what_am_I()		// 重写
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


// 运行结果：

// I am a thing.			由于是栈结构
// I am an Animal.
// Animal destructor		子类析构
// Thing is destructor 		子类析构会调用父类的析构
// Thing is destructor

















