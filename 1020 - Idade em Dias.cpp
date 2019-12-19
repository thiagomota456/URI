#include <iostream>
using namespace std;

int main()
{
    int days = 0;
    int years = 0;
    int mouths = 0;
    
    cin >> days;
    
    years = days/365;
    days = days%365;
    mouths = days/30;
    days = days%30;
    
    cout << years <<" ano(s)" << endl;
    cout << mouths  <<" mes(es)" << endl;
    cout << days <<" dia(s)" << endl;
    
    return 0;
}
