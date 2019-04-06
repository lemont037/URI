#include <iostream>

using std::cin,
      std::cout,
      std::endl;

int main(int argc, char const *argv[])
{
    int a, b, c, d, dif;

    cin >> a
        >> b
        >> c
        >> d;

    dif = (a*b)-(c*d);
    
    cout << "DIFERENCA = " << dif << endl;
    return 0;
}
