#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    int value, valueAux, note100 = 0,
                         note50 = 0,
                         note20 = 0,
                         note10 = 0,
                         note5 = 0,
                         note2 = 0,
                         note1 = 0;

    cin >> value;
    valueAux = value;
    
    while(valueAux > 0){
        if(valueAux - 100 > 0){
            note100++;
            valueAux -= 100;
        }else if(valueAux - 50 >= 0){
            note50++;
            valueAux -= 50;
        }else if(valueAux - 20 >= 0){
            note20++;
            valueAux -= 20;
        }else if(valueAux - 10 >= 0){
            note10++;
            valueAux -= 10;
        }else if(valueAux - 5 >= 0){
            note5++;
            valueAux -= 5;
        }else if(valueAux - 2 >= 0){
            note2++;
            valueAux -= 2;
        }else if(valueAux - 1 >= 0){
            note1++;
            valueAux -= 1;
        }
    }

    cout << value << endl
         << fixed << setprecision(2) << note100 << " nota(s) de R$ 100,00" << endl
         << fixed << setprecision(2) << note50 << " nota(s) de R$ 50,00" << endl
         << fixed << setprecision(2) << note20 << " nota(s) de R$ 20,00" << endl
         << fixed << setprecision(2) << note10 << " nota(s) de R$ 10,00" << endl
         << fixed << setprecision(2) << note5 << " nota(s) de R$ 5,00" << endl
         << fixed << setprecision(2) << note2 << " nota(s) de R$ 2,00" << endl
         << fixed << setprecision(2) << note1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}
