#include <iostream>
using namespace std;
int main()
{
    const double GallonToLitre=3.875;
    cout << "Enter the number of oil consumption: ";
    double d_oilCon;
    cin >> d_oilCon;
    double d_gallon=d_oilCon/GallonToLitre;
    cout << 62.14/d_gallon
         << endl;

}
