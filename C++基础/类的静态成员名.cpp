// 类的静态成员名访问：
// 方式一：类名::静态成员名  student::teacherName
// 方式二：对象名.静态成员名 student s1; s1.teacherName


#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
public:
	Employee(const char * name_str);
	static void acc_total(float f);  // 静态成员函数
	//void print();
	
private:
	char name[50];
	int id;
	static int next_id;
	static float total_pay;
	
};

// 类的静态成员变量必须在类外初始化
int Employee::next_id = 0;
float Employee::total_pay = 0;

Employee::Employee(const char * name_str){
	next_id++;
	id = next_id;
	strcpy(name, name_str);   // 有了空间不能赋值 不能这么写name=name_str;  有了空间用strcpy拷贝内容
	cout<<"id:"<<id<<"  name:"<<name<<endl;
};

void Employee::acc_total(float f){
	total_pay += f;
	cout<<"total_pay:"<<total_pay<<endl;
};

//void Employee::print(){
//	cout<<"id:"<<id<<"  name:"<<name<<endl;
//};


int main()
{
	Employee li("li");
	Employee wong("wong");
	Employee zhao("zhao");
	
	//li.print();
	//wong.print();
	//zhao.print();
	
	li.acc_total(10000);
	wong.acc_total(20000);
	zhao.acc_total(30000);			// 方式一：类名::静态成员名  student::teacherName
	Employee::acc_total(40000);		// 方式二：对象名.静态成员名 student s1; s1.teacherName
	Employee::acc_total(50000);
	Employee::acc_total(60000);
	
	return 0;
}









