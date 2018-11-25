#include<iostream>
using namespace std;

class Person
{
public:
	virtual void print(){
		cout<<"I am a  person!"<<endl;
	}
};

class Student:public Person
{
public:
	void print(){
		cout<<"I am a student!"<<endl;
	}
};

class Teacher:public Person
{
public:
	void print(){
		cout<<"I am a teacher!"<<endl;
	}
};


int main()
{
	Student student_tom;
	Student student_jack;
	Teacher teacher_lee;
	Teacher teacher_zhao;
	Teacher teacher_wang;
	
	Person* p[5] = {&student_jack, &student_tom, &teacher_lee, &teacher_zhao, &teacher_wang};
	for(int i=0;i<5;i++)
	{
		if(dynamic_cast<Student*>(p[i]))		// 由父类动态转型到子类，如果成果则打印
			p[i]->print();
	}
	
	
	
	return 0;
}



