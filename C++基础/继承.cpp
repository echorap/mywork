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


// �̳�֮��ӵ�и�������г�Ա�����˹��캯��������������
class Student: public Person
{
public:
	Student(){}
	~Student(){}
	void printName(){
		//cout << name << endl;   // ���಻��ֱ�ӷ��ʸ����˽�г�Ա
		cout <<getName()<< endl;  // ֻ��ͨ���̳и���ĳ�Ա���������
	}
	void print()                  // ��д(overwrite)�򸲸Ǹ���ĳ�Ա����
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
	stu.Person::print();		// ���Ǻ�Ҳ���Ե��ø���ĳ�Ա����
	system("pause");
	return 0;
}