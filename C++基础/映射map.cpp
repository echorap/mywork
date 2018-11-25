#include<iostream>
#include<map>
#include <cstring>

using namespace std;

class Strings
{
	friend ostream& operator<<(ostream& out, const Strings& s);

public:
	Strings();
	Strings(char* s);
	Strings(const Strings& s);
	~Strings();
	Strings& operator=(Strings& s);
	bool operator<(const Strings& s) const;

private:
	char* str;
};


//#include"String.h"

Strings::Strings() :str(new char[1]){
	str[0] = '\0';
};
Strings::Strings(char* s){
	if (!s)
	{
		str = NULL;
	}
	else
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
};

Strings::Strings(const Strings& s){
	if (!s.str)
	{
		str = NULL;
	}
	else
	{
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}


};

Strings::~Strings(){
	if (str!=NULL)
	{
		delete[]str;
		str = NULL;
	}

};


Strings& Strings::operator=(Strings& s){
	if (this == &s){ return *this; }
	delete[]str;
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
	return *this;
};

bool Strings::operator<(const Strings& s) const{
	bool less = false;
	if (strcmp(str, s.str)<0){
		less = true;
	}

	return less;
};

ostream &operator<<(ostream& out, const Strings& s){
	out << s.str;
	return out;
};

#include"String.h"

int main()
{
	map<Strings, double> m;  // 定义一个映射key:String, value:double

	m.insert(map<Strings, double>::value_type("pi", 3));
	m.insert(map<Strings, double>::value_type("e", 2.7183));
	m.insert(map<Strings, double>::value_type("zero", 0));

	// 因为key:e已经存在，再添加会被忽略
	m.insert(map<Strings, double>::value_type("e", 1));
	m[(char*)"one"] = 1.0;    // 通过下标插入新的键值对
	m[Strings((char*)"pi")] = 3.1416;
	map<Strings, double>::iterator itor = m.begin();
	while (itor!=m.end())
	{
		cout << itor->first << " " << itor->second << endl;
		itor++;
	}

	cout << "The value of pi is " << m.find(Strings((char*)"pi"))->second 
		<< endl;

	return 0;
}