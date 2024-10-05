#include <iostream>
#include <string>
using namespace std;


//����һ��������
class Building
{
    //! ͨ���ؼ��� friend ʹ���������ߺ�����Ϊ��Ԫ���Ӷ�ʹ��Щ����������������ܹ��������˽������
    friend void GoodFriend_1(Building * building);
    friend class GoodFriend_2;
    //���ﲻ�ܶ����Ա����Ϊ��Ԫ������δ���壬ԭ��δ֪��
    // friend void GoodFriend_3::Visit_2(void);//����Ԫ

private:
    string BedRoom;
public:
    string SittingRoom;

    Building()
    {
        BedRoom = "����";
        SittingRoom = "����";
    }
};

// Tips:���ⲻ��д���캯��������Ա�����ͳ�Ա����������
// Building::Building()
// {
//     this->BedRoom = "����";
//     this->SittingRoom = "����";
// }

//! 1��ȫ�ֺ�������Ԫ
void GoodFriend_1(Building * pBuilding)
{
    cout << "�����Ѻ��������ڷ���" << pBuilding->SittingRoom << endl;//������Ĺ�������
    cout << "�����Ѻ��������ڷ���" << pBuilding->BedRoom << endl;//�������˽������
}

//! 2��������Ԫ
class GoodFriend_2
{
private:
    Building * pBuilding;
public:
    void VisitBuilding(void);
    GoodFriend_2()
    {
        pBuilding = new Building;
    }
};

//! 3����Ա��������Ԫ�������У�ԭ��δ֪��
class GoodFriend_3
{
private:
    Building * pBuilding;
public:
    void Visit(void)//������Ԫ�������Է���Ŀ�����˽�г�Ա
    {
        cout << "����Ԫ�ĳ�Ա��������" << pBuilding->SittingRoom << endl;
    }
    // void Visit_2(void);//����Ԫ
    void Visit_2(void)
    {
        // cout << "��Ԫ��Ա��������" << pBuilding->BedRoom << endl;
        //! �������ɷ���
    }
    GoodFriend_3()
    {
        pBuilding = new Building;
    }
};

//* Tips:����д��Ա����
void GoodFriend_2::VisitBuilding(void)
{
    cout << "�������������ڷ���" << pBuilding->SittingRoom << endl;//������Ĺ�������
    cout << "�������������ڷ���" << pBuilding->BedRoom << endl;//�������˽������
}

int main()
{
    Building building;

    GoodFriend_1(&building);

    GoodFriend_2 Friend;
    Friend.VisitBuilding();

    GoodFriend_3 Fr3;
    Fr3.Visit();

    return 0;
}
