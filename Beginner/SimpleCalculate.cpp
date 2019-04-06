#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int idProduct, qtt;
    double price, forPay = 0;

    for(int i = 0; i < 2; i++){
        cin >> idProduct
            >> qtt
            >> price;
        forPay += price * qtt;
    }

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << forPay << endl;
    return 0;
}
