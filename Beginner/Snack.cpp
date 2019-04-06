#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int cod, qtt;
    double snacks[] = {4.00,4.50,5.00,2.00,1.50};

    cin >> cod
        >> qtt;

    cout << fixed << setprecision(2) << "Total: R$ " << snacks[cod-1]*qtt << endl;
    return 0;
}
