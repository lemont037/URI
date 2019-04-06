#include <iostream>

using std::cin,
      std::cout,
      std::endl;

int main(int argc, char const *argv[])
{
    int n, hour, min, sec;

    cin >> n;

    hour = n/3600;
    min = (n-hour*3600)/60;
    sec = n-hour*3600-min*60;

    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}
