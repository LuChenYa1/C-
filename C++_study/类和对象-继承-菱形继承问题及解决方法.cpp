#include <iostream>

using namespace std;

//* ����/��ʯ�̳У�����ն��Ƕ���������࣬����������չ�ͬ��������
//! ��Ȼ���յ������Աֻ��Ҫ��һ��������ͨд�������ǻ����ǵĻ����Ƿ���ͬ��ʹ�������Ա��Ϊ����ͬ����Ա
//! ���μ̳е���Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Һ�������
//* �������-��̳У�ʹ��virtual �ؼ����������������Ա�������Ļ�����
//* ԭ������̳и���ʱ��̳е�һ��ָ�룬ָ��ָ����ĸ��࣬ʹ����ֱ�Ӽ̳�үү�࣬�Ӷ������ظ��̳�

//* �����ࣨ����ࣩ
class Animal
{
public:
    int Age;
};

//* ����
class Sheep : virtual public Animal{};
//* ����
class Tuo : virtual public Animal{};

//* ����
class SheepTuo : public Sheep, public Tuo{};

int main()
{
    SheepTuo ST1;
    ST1.Sheep::Age = 20;
    ST1.Tuo::Age = 18;
    cout << "���յ�������" << ST1.Sheep::Age << "��" << endl;
    cout << "���յ�������" << ST1.Tuo::Age << "��" << endl;
    cout << "���յ�������" << ST1.Age << "��" << endl;

    Sheep S1;
    S1.Age = 40;
    cout << "���������" << S1.Age << "��" << endl;

    return 0;
}
