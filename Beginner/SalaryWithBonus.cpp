#include <iostream>
#include <string>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::string,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    string name;
    double salary, sales, finalSalary;

    cin >> name;
    cin >> salary >> sales;
    
    finalSalary = salary + (sales*15/100);

    cout << fixed << setprecision(2) << "TOTAL = R$ " << finalSalary << endl; 
    return 0;
}
