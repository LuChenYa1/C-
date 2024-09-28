#include <iostream>
#include "Point.h"
#include "Circle.h"
// #include "Multi_Func/Circle.h" ���Ӹ����ļ���Ҳ���ᱨ��

using namespace std;


void isInCircle(Circle C, Point P)
{
    int Distance_2 = (P.ReadX() - C.ReadCenter().ReadX()) * (P.ReadX() - C.ReadCenter().ReadX()) + 
                    (P.ReadY() - C.ReadCenter().ReadY()) * (P.ReadY() - C.ReadCenter().ReadY());
    int R_2 = C.ReadR() * C.ReadR();
    if(Distance_2 == R_2)
        cout << "����Բ��" << endl;
    else if(Distance_2 > R_2)
        cout << "����Բ��" << endl;
    else
        cout << "����Բ��" << endl;
}

int main(void)
{
    Circle C;
    C.SetR(10);
    Point Center;
    Center.SetX(10);
    Center.SetY(0);
    C.SetCenter(Center);

    Point P;
    P.SetX(10);
    P.SetY(9);
    
    isInCircle(C, P);

    return 0;
}


