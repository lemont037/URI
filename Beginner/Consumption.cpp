#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int x;
    double y;

    cin >> x;
    cin >> y;

    cout << fixed << setprecision(3) << x/y << " km/l" << endl;
    return 0;
}
