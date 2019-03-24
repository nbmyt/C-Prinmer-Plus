#include <iostream>
using namespace std;
int main()
{
    const double MinToDe=60;
    const double SecToDe=3600;
    cout << "Enter a latitude in degrees, minutes, and seconds:"
         << endl;
    double d_de;
    int n_min;
    int n_sec;
    cout << "First, enter the degrees:";
    cin  >> d_de;
    cout << "Next, enter the minutes of arc:";
    cin  >> n_min;
    cout << "Finally, enter the seconds of arc:";
    cin  >> n_sec;
    cout << d_de
         << " degrees, "
         << n_min
         << " minutes, "
         << n_sec
         << " seconds = "
         << d_de+n_min/MinToDe+n_sec/SecToDe
         << " degrees"
         <<endl;
    return 0;
}
