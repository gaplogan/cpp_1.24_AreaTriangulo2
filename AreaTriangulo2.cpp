#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double a, b, c, p, area;

    cout << "Digite o primeiro lado do tri�ngulo: ";
    cin >> a;

    cout << "Digite o segundo lado do tri�ngulo: ";
    cin >> b;

    cout << "Digite o terceiro lado do tri�ngulo: ";
    cin >> c;

    cout << endl;

    a = abs(a);
    b = abs(b);
    c = abs(c);
    p = (a + b + c) / 2;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "\n�rea do tri�ngulo " << area << endl;

    return 0;
}