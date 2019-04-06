#include <iostream>

using std::cout,
      std::cin,
      std::endl;

int main(int argc, char const *argv[])
{
    int a, b, prod;

    cin >> a
        >> b;

    prod = a * b;

    cout << "PROD = " << prod << endl; 
    return 0;
}
