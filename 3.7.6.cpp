#include <iostream>
using namespace std;
int main()
{
    int n_mile;
    int n_gallon;
    cout << "Enter the number of mile: ";
    cin >> n_mile;
    cout << "Enter the number of gallon: ";
    cin >> n_gallon;
    cout << " The gallon/mile = "
         << n_gallon/n_mile
         <<endl;
    return 0;
}
