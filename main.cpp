#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A,B,C,a,b,c,d,e;
    cin >> A >>B >>C;
    a = (.5 * A * C);
    b = (C * C *  3.14159);
    c = (( A + B )/ 2) * C;
    d = B * B;
    e = A * B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << a << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << b << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << c << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << d << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << e << endl;

    return 0;
}
