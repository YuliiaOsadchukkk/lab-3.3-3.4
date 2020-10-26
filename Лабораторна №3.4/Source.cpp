// Lab_03_4.cpp 
// < Осадчук Юлії > 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 20 

#include <iostream> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double y;  // вхідний параметр 

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в скороченій формі
    if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "1) yes" << endl;
    if (!((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3)))
        cout << "1) no" << endl;
    // розгалуження в повній формі 
    if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "2) yes" << endl;
    else
        cout << "2) no" << endl;

    cin.get();
    return 0;
}