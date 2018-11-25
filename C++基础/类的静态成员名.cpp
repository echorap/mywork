// ��ľ�̬��Ա�����ʣ�
// ��ʽһ������::��̬��Ա��  student::teacherName
// ��ʽ����������.��̬��Ա�� student s1; s1.teacherName


#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
public:
	Employee(const char * name_str);
	static void acc_total(float f);  // ��̬��Ա����
	//void print();
	
private:
	char name[50];
	int id;
	static int next_id;
	static float total_pay;
	
};

// ��ľ�̬��Ա���������������ʼ��
int Employee::next_id = 0;
float Employee::total_pay = 0;

Employee::Employee(const char * name_str){
	next_id++;
	id = next_id;
	strcpy(name, name_str);   // ���˿ռ䲻�ܸ�ֵ ������ôдname=name_str;  ���˿ռ���strcpy��������
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
	zhao.acc_total(30000);			// ��ʽһ������::��̬��Ա��  student::teacherName
	Employee::acc_total(40000);		// ��ʽ����������.��̬��Ա�� student s1; s1.teacherName
	Employee::acc_total(50000);
	Employee::acc_total(60000);
	
	return 0;
}









