#include<iostream>
#include<vector>			// ����
#include<algorithm>			// �㷨
#include<iterator>			// ������

using namespace std;

int main()
{
	const int SIZE = 6;
	int array[SIZE] = {11, 22, 33, 44, 55, 66};
	// ����һ��int���ͼ��ϵ���������������array���������г�ʼ��
	vector<int> v(array, array+SIZE);
	cout << "First element: " <<v.front() <<"\nLast element: " <<v.back()<<endl;
	
	// ͨ���±��at�������޸������е�Ԫ������
	// ��������at����ȫ�������±��Ƿ�Խ�磬Խ���׳��쳣
	cout<<v[3]<<endl;
	v[3] = 444;
	cout<<v[3]<<endl;
	v.at(3) = 4444;
	cout<<v[3]<<endl;
	
	// ����Ԫ��
	v.insert(v.begin() + 1, 99);
	
	// ��β�����Ԫ��
	v.push_back(19);
	
	//����һ��������������������vector<int>::iterator
	vector<int>::iterator iter;
	iter = v.begin();  // ������ָ�������ĵ�һ��Ԫ��
	while(iter!=v.end()){
		cout << *iter<<" ";  // ָ������������
		iter++;				  // ����������ƶ�
	}
	
	// ����Ԫ��22��λ�ã��������������
	iter = find(v.begin(), v.end(), 555);   // ��ͷ��β��22, iterָ��鵽��λ��
	if(iter!=v.end()){
		cout<<"\nlocaltion: "<< (iter-v.begin()) << endl;
	}
	else{
		cout<<"\nnot found"<<endl;
	}
	
	//ϵͳ�������
	cout<<"The max size of the vector is: "<<v.max_size()<<endl;
	
	//��ǰvector�������
	cout<<"The current capacity is: "<<v.capacity()<<endl;
	
	// ���Խ�磬�׳��쳣
	try{
		v.at(1) = 777;
	}
	catch(out_of_range & e){
		cout<<"Exception: "<<e.what();
	}
	
	// �����һ��Ԫ��
	v.erase(v.begin());
	// �����Χ�ڵ�Ԫ�أ������������Ԫ��
	v.erase(v.begin(), v.end());
	
	cout<<"After erase, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	// �ӿ�ʼλ�ð�������뵽������
	v.insert(v.begin(), array, array+SIZE);
	cout<<"After insert, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	// �������
	v.clear();
	cout<<"After clear, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	return 0;
}










