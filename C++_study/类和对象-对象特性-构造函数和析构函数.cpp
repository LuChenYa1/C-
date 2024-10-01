#include <iostream>
using namespace std;

//! ����ĳ�ʼ��������
//* ���캯������������


//* ����һ���࣬����û�����ӣ�����������������Ĭ�Ϻ��������ɼ������޲ι��죨�պ������������������պ��������������캯��������ȫ�����Խ���ֵ������
//* ����û��������вι��캯����������������ṩĬ�ϵ��޲ι��캯�������ǻ��ṩ�������캯��
//* ����û������˿������캯����������������ṩ�������й��캯��

class Person
{
private:
    int Age;
    int * pHeight;
public:
    int ReadAge(void)
    {
        return Age;
    }
    int ReadHeight(void)
    {
        return *pHeight;
    }
    //! 1�����캯�� ���г�ʼ���Ĳ���
    //* û�з���ֵ�������в��������Է����������أ� 
    //* ��������������ͬ
    //* ��������ʱ�����Զ�����һ�ι��캯������ֻ����һ��

    //* ���ַ���
    //* �޲κ��в�
    //* ��ͨ�Ϳ���
    Person()
    {
        cout << "Person �޲�/��ͨ���캯����" << endl;
    }
    Person(int a, int Height)
    {
        Age = a;
        pHeight = new int (Height);
        cout << "Person �в�/��ͨ���캯����" << endl;
    }
    Person(int a)
    {
        Age = a;
        cout << "Person ��ʽת���������вι��캯��" << endl;
    }

    Person(const Person &p)//�������캯���������βδ����µĿռ䣨���ܻ����ޣ�������ֻ�ܲ�ȡ����
    {
        Age = p.Age;
        pHeight = new int(*p.pHeight);
        cout << "Person �������캯����" << endl;
    }

    //! 2���������� ��������Ĳ���
    //* û�з���ֵ��û�в���
    //* ��������������ͬ
    //* ���ٶ���֮ǰ�����Զ�����һ��������������ֻ����һ��
    ~Person()
    {
        cout << "Person ����������" << endl;

        //* ���������÷����ͷ��ڶ�������Ŀռ�
        //! ǳ�������������Ա���ж���ָ�룬ʹ��Ĭ�Ͽ���������ʹ�������ָ��ֵ��ͬ��ָ��ͬһ��ռ䣬�����������Ⱥ��ͷţ����ͷŵĶ���ִ����������ʱ�����ٴ� delete ͬһ��ռ䣬���±���
        //* ���(�������))��ʹ���Զ���Ŀ������캯��������һ��ר�ŵĿռ��ԭ����Ķ����ռ����ֿ�
        delete(pHeight);
        pHeight = NULL;
    }
};

void Test_01(void)
{
    //* 1�����ŷ�
    //! �����޲ι���ʱ��Ҫ������
    Person p1;//* �����޲ι���
    //! Person p1();//* ע�⣺��������Ϊ�Ǻ������������ᴴ������
    Person p2(10, 160);//�����вι���
    Person p3(p2);//���ÿ�������
    cout << "p2.Age = " << p2.ReadAge() << endl;
    cout << "p3.Age = " << p3.ReadAge() << endl;

    //* 2����ʾ��
    Person p4 = Person(20, 160);
    Person p5 = Person(p2);
    cout << "aaa" << endl;
    Person(10, 160);//�������󣬵�ǰ��ִ�н�����ϵͳ���Զ����ո���������
    // Person(p3);//��Ҫ���ÿ������캯����ʼ�����������Ҳ���ֵ�������ֵĶ��󣬱�������Ϊ Person(p3) === Person p3�������ض������

    //* 3����ʽת����
    Person p6 = 30;
    Person p7 = p4;
}

//ʲôʱ�����ù���/����������ֻҪ�����˶��󣬰����βΡ�
void DoWork_01(Person p)//* �βδ�������
{
    p.ReadAge();
}

Person DoWork_02(void)//* ����ֵ��������
{
    Person p_in(20, 170);
    cout << &p_in << endl;
    return p_in;
}

void Test_02()
{
    // Person p(10);
    // DoWork_01(p);
    Person p_out = DoWork_02();//ע�⣺����Ķ��� p_out �̳��� DoWork_02 �����ڲ��ļ������ͷŵĶ��� p_in �Ŀռ䣬��˲��ٵ��ù������������
    cout << &p_out << endl;
    cout << p_out.ReadHeight() << endl;
}

int main(void)
{
    Test_01();

    Person p(10, 160);
    Person p2(p);
    cout << p2.ReadHeight() << endl;

    return 0;
}
