// Lab_03_3.cpp 
// < Осадчук Юлії > 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 20 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double R;  // вхідний параметр 
    double y;  // результат обчислення виразу 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    //розгалуження в скороченій формі
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

    // розгалуження в повній формі 
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
