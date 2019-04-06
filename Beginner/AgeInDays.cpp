#include <iostream>

using std::cin,
      std::cout,
      std::endl;

int main(int argc, char const *argv[])
{
    int n, year, month, days;

    cin >> n;

    year = n/365;
    month = (n-year*365)/30;
    days = n-year*365-month*30;

    cout << year << " ano(s)" << endl
         << month << " mes(es)" << endl
         << days << " dia(s)" << endl;
    return 0;
}
