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
    double x1, y1, x2, y2;

    cin >> x1
        >> y1;
    cin >> x2
        >> y2;
    
    cout << fixed << setprecision(4) << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << endl;
    return 0;
}
