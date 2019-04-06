#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int spentTime, speed;

    cin >> spentTime >> speed;

    cout << fixed << setprecision(3) << (spentTime*(double)speed)/12 << endl;
    return 0;
}
