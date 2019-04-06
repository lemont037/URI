#include <iostream>

using std::cin,
      std::cout,
      std::endl;

int greatestAB(int a, int b)
{
    return (a+b+abs(a-b))/2;
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a
        >> b
        >> c;

    cout << greatestAB(greatestAB(a,b),c) << " eh o maior" << endl;
    return 0;
}
