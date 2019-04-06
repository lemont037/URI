#include <iostream>
#include <math.h>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    double a, b, c, delta, r1, r2;

    cin >> a
        >> b
        >> c;

    delta = pow(b,2) - 4*a*c;

    if(a == 0 or delta < 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    r1 = (-b + sqrt(delta))/(2*a);
    r2 = (-b - sqrt(delta))/(2*a);
    cout << fixed << setprecision(5) << "R1 = " << r1 << endl;
    cout << fixed << setprecision(5) << "R2 = " << r2 << endl;
    return 0;
}
