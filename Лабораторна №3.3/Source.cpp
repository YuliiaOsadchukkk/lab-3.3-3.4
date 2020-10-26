// Lab_03_3.cpp 
// < ������� �볿 > 
// ����������� ������ � 3.3 
// ������������, ������ �������� �������. 
// ������ 20 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // ������� �������� 
    double R;  // ������� �������� 
    double y;  // ��������� ���������� ������ 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    //������������ � ��������� ����
    if (x <= 0)
        y = -1. / 2. * x;
    if (0 < x && x <= R)
        y = R - sqrt(R * R - x * x);
    if (R < x && x <= 2 * R)
        y = sqrt(R * R - (x - R) * (x - R));
    if (x > 2 * R)
        y = -(x - 2 * R) / (6 - 2 * R);

    cout << endl;
    cout << "1) y = " << y << endl;

    // ������������ � ����� ���� 
    if (x <= 0)
        y = -1. / 2. * x;
    else
        if (0 < x && x <= R)
            y = R - sqrt(R * R - x * x);
        else
            if (R < x && x <= 2 * R)
                y = sqrt(R * R - (x - R) * (x - R));
            else
                y = -(x - 2 * R) / (6 - 2 * R);

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
