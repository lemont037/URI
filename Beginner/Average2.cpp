#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    double a, b, c, avg;
    int wA = 2,
        wB = 3,
        wC = 5;

    cin >> a
        >> b
        >> c;

    avg = (a*wA + b*wB + c*wC)/(wA+wB+wC);

    cout << fixed << setprecision(1) << "MEDIA = " << avg << endl;
    return 0;
}
