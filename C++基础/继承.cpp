#include<iostream>
using namespace std;

class Person
{
public:
	Person(){}
	~Person(){}
	char *getName(){ return name; }
	void print(){
		cout << "I am a person" << endl;
	}

private:
	char *name;
	int age;
};


// 继承之后，拥有父类的所有成员，除了构造函数、析构函数等
class Student: public Person
{
public:
	Student(){}
	~Student(){}
	void printName(){
		//cout << name << endl;   // 子类不能直接访问父类的私有成员
		cout <<getName()<< endl;  // 只能通过继承父类的成员函数类访问
	}
	void print()                  // 重写(overwrite)或覆盖父类的成员函数
	{
		cout << "I am a student" << endl;
	}


private:
	int id;
};

int main()
{
	cout << sizeof(Person) << endl;
	cout << sizeof(Student) << endl;
	Student stu;
	stu.print();
	stu.Person::print();		// 覆盖后也可以调用父类的成员函数
	system("pause");
	return 0;
}