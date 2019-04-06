#include <iostream>

using std::cin,
      std::cout,
      std::endl;

int main(int argc, char const *argv[])
{
    int a, b, c, d;

    cin >> a
        >> b
        >> c
        >> d;

    if(b > c and d > a and c+d > a+b and c > 0 and d > 0 and a%2 == 0)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;

    return 0;
}
