#include<iostream>

using namespace std;

class Test
{
public:
	Test(){
		pvar = new int[5];
		for(int i=0; i<5; i++)
		{
			pvar[i] = i;
		}
	}
	
	~Test(){
		delete []pvar;
		pvar = NULL;
	}
	
	void print(){
		for(int i=0; i<5; i++)
		{
			cout<<pvar[i]<<" ";
		}
		cout<<endl;
	}
	
private:
	int * pvar;
};

int main()
{
	Test t1; t1.print();
	Test t2; t2.print();
	
	return 0;
}









