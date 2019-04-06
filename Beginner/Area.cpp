#include <iostream>
#include <iomanip>
#include <math.h>

using std::cout,
      std::cin,
      std::endl,
      std::setprecision,
      std::fixed;

int main(int argc, char const *argv[])
{
    double a, b, c, aTri, aCir, aTra, aSqr, aRec, pi = 3.14159;

    cin >> a
        >> b
        >> c;

    aTri = (a*c)/2;
    aCir = pi*pow(c,2);
    aTra = ((a+b)/2)*c;
    aSqr = pow(b,2);
    aRec = a*b;

    cout << fixed << setprecision(3) << "TRIANGULO: " << aTri << endl
         << fixed << setprecision(3) << "CIRCULO: " << aCir << endl
         << fixed << setprecision(3) << "TRAPEZIO: " << aTra << endl
         << fixed << setprecision(3) << "QUADRADO: " << aSqr << endl
         << fixed << setprecision(3) << "RETANGULO: " << aRec << endl;
    return 0;
}
