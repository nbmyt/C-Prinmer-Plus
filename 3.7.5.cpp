#include <iostream>
using namespace std;
int main()
{
    long long ll_wrdPop;
    long long ll_usPop;
    cout << "Enter the world's population: ";
    cin >> ll_wrdPop;
    cout << "Enter the population of the US: ";
    cin >> ll_usPop;
    cout << "The population of the US is "
         << (double)ll_usPop/(double)ll_wrdPop*100
         << "% of the world population"
         <<endl;
    return 0;
}
