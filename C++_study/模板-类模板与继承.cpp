#include <iostream>

using namespace std;

//* ֻҪ����ģ����������������ģ���࣬����Ϊ�ǵ������ģ���࣬��������̳и�������

template<typename T>
class Base
{
	T m;
};

//* ������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
//class Son:public Base  //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
class Son :public Base<int> //����ָ��һ������
{
};

//* ��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//* ��ģ��̳���ģ�� ,������T2ָ�������е�T����
template<typename T2>
//������ģ���࣬�䱻������ã�����ѭ����ģ������򣬼�ָ�������д��ڵķ��͵�����
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << typeid(T2).name() << endl;
	}
};

int main() 
{
    Son c;

	Son2<int> child1;

	return 0;
}
