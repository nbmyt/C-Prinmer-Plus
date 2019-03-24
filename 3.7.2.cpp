#include <iostream>
using namespace std;
int main()
{
    const double ToMeter=0.0254;
    const double ToKg=2.2;
    const double ToInch=14;
    int n_inch;
    int n_feet;
    double d_pound;
    double d_kg;
    double d_m;
    cout << "Enter Your Stature:"
         << endl;
    cin  >> n_feet
         >> n_inch;
    cout << "Enter Your Wegiht:"
         << endl;
    cin  >> d_pound;
    d_m=(n_feet*ToInch+n_inch)*ToMeter;
    d_kg=d_pound*ToKg;
    cout << "Your BMI: "
         << d_kg/d_m/d_m
         << endl;
    return 0;
}
