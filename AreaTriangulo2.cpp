#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double a, b, c, p, area;

    cout << "Digite o primeiro lado do triângulo: ";
    cin >> a;

    cout << "Digite o segundo lado do triângulo: ";
    cin >> b;

    cout << "Digite o terceiro lado do triângulo: ";
    cin >> c;

    cout << endl;

    a = abs(a);
    b = abs(b);
    c = abs(c);
    p = (a + b + c) / 2;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "\nÁrea do triângulo " << area << endl;

    return 0;
}