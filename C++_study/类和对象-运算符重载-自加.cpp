#include <iostream>

using namespace std;

//! ʹ�ó�Ա��������ǰ�úͺ���++��ǰ��++�����غ����β�ֻ����void������++�����غ����β�ֻ����int
//* ǰ��++ �ص����ԼӺ��ֵ���뵱ǰ���㣬�����ԼӲ��������󷵻ص��Ǳ��Լӵ���������ռ䣬�ʷ�������������������
//* ����++ �ص����Լ�ǰ��ֵ���뵱ǰ���㣬�����ԼӲ��������󷵻ص�ֻ������ʱ���������ڴ洢�Լ�ǰ��ֵ�ı����ռ䣬��������������

//* ����һ���µ��������ͣ���������MyInterger
class MyInterger
{
    friend ostream & operator<<(ostream & cout, MyInterger IntNumber);
    // friend MyInterger & operator++(MyInterger & IntNumber);
    // friend MyInterger operator++(MyInterger & IntNumber, int);

private:
    int Num;
public:
    MyInterger()
    {
        Num = 0;
    }

    // //* ǰ��++
    MyInterger & operator++(void)
    {
        Num ++;
        return *this;
    }

    // //* ����++
    MyInterger operator++(int)
    {
        MyInterger Temp = *this;
        Num ++;
        return Temp;//�����¿ռ䣬װ���Լ�ǰ��ֵ
    }
};

//���� << �����
ostream & operator<<(ostream & cout, MyInterger IntNumber)
{
    cout << IntNumber.Num;
    return cout;
}

//* ǰ��++ ���أ�ȫ�ֺ�����
//һ��Ҫ�������ã����򷵻ص���װ��ֵ���¿ռ䣬����ԭ���ı����ռ�
// MyInterger & operator++(MyInterger & IntNumber)
// {
//     IntNumber.Num ++;
//     return IntNumber;
// }

//* �޷�ʹ��ȫ�ֺ���ʵ�ֺ��� ++ ����
// MyInterger operator++(MyInterger & IntNumber, int)
// {
//     MyInterger Temp = IntNumber;
//     IntNumber.Num ++;
//     return Temp;//�����¿ռ䣬װ���Լ�ǰ��ֵ
// }


int main()
{
    MyInterger IntNumber;
    cout << IntNumber << endl;

    //* ����ǰ��++
    ++ (++ IntNumber); 
    cout << ++IntNumber << endl;

    // IntNumber.operator++();//�޲�����ǰ��++

    //* ���Ժ���++
    (IntNumber ++)++; 
    cout << IntNumber++ << endl;

    return 0;
}
