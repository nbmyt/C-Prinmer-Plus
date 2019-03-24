#include <iostream>
using namespace std;
int main()
{
    const int n_divisor=14;
    cout << "Please import stature:_";
    int n_stature;
    cin >> n_stature;
    cout <<"stasure: "
         << n_stature/n_divisor
         << "feet "
         << n_stature%n_divisor
         <<"inch"
         << endl;
    return 0;
}
