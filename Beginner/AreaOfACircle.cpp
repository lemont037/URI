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
    double pi = 3.14159;
    double r;
    double area;
    cin >> r;

    area = pi * pow(r,2);

    cout << fixed << setprecision(4) << "A=" << area << endl;
    return 0;
}
