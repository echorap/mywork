#include<iostream>
#include<vector>			// 容器
#include<algorithm>			// 算法
#include<iterator>			// 迭代器

using namespace std;

int main()
{
	const int SIZE = 6;
	int array[SIZE] = {11, 22, 33, 44, 55, 66};
	// 声明一个int类型集合的容器，并用数组array对容器进行初始化
	vector<int> v(array, array+SIZE);
	cout << "First element: " <<v.front() <<"\nLast element: " <<v.back()<<endl;
	
	// 通过下标和at函数来修改容器中的元素内容
	// 二者区别：at更安全，会检查下标是否越界，越界抛出异常
	cout<<v[3]<<endl;
	v[3] = 444;
	cout<<v[3]<<endl;
	v.at(3) = 4444;
	cout<<v[3]<<endl;
	
	// 插入元素
	v.insert(v.begin() + 1, 99);
	
	// 从尾部添加元素
	v.push_back(19);
	
	//声明一个迭代器，用来遍历，vector<int>::iterator
	vector<int>::iterator iter;
	iter = v.begin();  // 迭代器指向容器的第一个元素
	while(iter!=v.end()){
		cout << *iter<<" ";  // 指针解引用运算符
		iter++;				  // 迭代器向后移动
	}
	
	// 查找元素22的位置，并返回其迭代器
	iter = find(v.begin(), v.end(), 555);   // 从头到尾查22, iter指向查到的位置
	if(iter!=v.end()){
		cout<<"\nlocaltion: "<< (iter-v.begin()) << endl;
	}
	else{
		cout<<"\nnot found"<<endl;
	}
	
	//系统最大容量
	cout<<"The max size of the vector is: "<<v.max_size()<<endl;
	
	//当前vector最大容量
	cout<<"The current capacity is: "<<v.capacity()<<endl;
	
	// 如果越界，抛出异常
	try{
		v.at(1) = 777;
	}
	catch(out_of_range & e){
		cout<<"Exception: "<<e.what();
	}
	
	// 清除第一个元素
	v.erase(v.begin());
	// 清除范围内的元素，这里清除所有元素
	v.erase(v.begin(), v.end());
	
	cout<<"After erase, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	// 从开始位置把数组插入到容器中
	v.insert(v.begin(), array, array+SIZE);
	cout<<"After insert, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	// 清空容器
	v.clear();
	cout<<"After clear, v "<< (v.empty()?"is":"is not") << " empty." <<endl;
	
	return 0;
}










