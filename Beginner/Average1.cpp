#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    double a, b, avg,
           wA = 3.5,
           wB = 7.5;

    cin >> a
        >> b;

    avg = (a*wA + b*wB)/(wA+wB);

    cout << fixed << setprecision(5) << "MEDIA = " << avg << endl;
    return 0;
}
