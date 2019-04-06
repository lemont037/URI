#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int num, hours;
    double perHuor, sal;

    cin >> num
        >> hours
        >> perHuor;

    sal = hours * perHuor;
    
    cout << "NUMBER = " << num << endl
         << fixed << setprecision(2) <<"SALARY = U$ " << sal << endl;
    return 0;
}
