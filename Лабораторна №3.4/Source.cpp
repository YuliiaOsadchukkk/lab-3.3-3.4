// Lab_03_4.cpp 
// < ������� �볿 > 
// ����������� ������ � 3.4 
// ������������, ������ ������� �������. 
// ������ 20 

#include <iostream> 

using namespace std;

int main()
{
    double x;  // ������� �������� 
    double y;  // ������� �������� 

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // ������������ � ��������� ����
    if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "1) yes" << endl;
    if (!((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3)))
        cout << "1) no" << endl;
    // ������������ � ����� ���� 
    if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "2) yes" << endl;
    else
        cout << "2) no" << endl;

    cin.get();
    return 0;
}