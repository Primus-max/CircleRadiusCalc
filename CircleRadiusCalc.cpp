
#include <iostream>
using namespace  std;

/// <summary>
/// Метод для вычисления радиуса по длине окружности
/// </summary>
/// <param name="C"></param>
/// <returns>Радиус</returns>
double RadiusCalc(double C)
{ 
    double R = C / (2 * 3.14);
    return R;
}

/// <summary>
/// Метод для вычисления площади круга по радиусу
/// </summary>
/// <param name="R"></param>
/// <returns>Площадь</returns>
double AareaCalc(double R)
{
    double S = 3.14 * (R * R);
    return S;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // Длина окружности полученная от пользователя
    double curceOfCurcle;

    cout << "Чтобы рассчитать площадь круга введите длину окражности : ";
    cin >> curceOfCurcle;

    double radius = RadiusCalc(curceOfCurcle);
    double area = AareaCalc(radius);

    cout << "Исходя из указанной вами длины окружности, площадь круга составляет : " << area << endl;
    cout << "-------------------" << endl;
    cout << "-------------------" << endl;
}

