#include <iostream>
using namespace std;
int main()
{
    long l_sec;
    cout << "Enter the number of seconds:";
    cin >> l_sec;
    long l_sec2=l_sec;
    int n_min=l_sec/60;
    l_sec=l_sec%60;
    int n_hours=n_min/60;
    n_min=n_min%60;
    int n_days=n_hours/24;
    n_hours=n_hours%24;
    cout << l_sec2
         << " seconds = "
         << n_days
         << " days,"
         << n_hours
         << " hours,"
         << n_min
         << " minutes, "
         << l_sec
         << " seconds"
         << endl;
    return 0;
    
}
