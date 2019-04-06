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
    double  r, vol, pi = 3.14159;
    
    cin >> r;

    vol = (4.0/3) * pi * pow(r,3);

    cout << fixed << setprecision(3) << "VOLUME = " << vol << endl;
    return 0;
}
