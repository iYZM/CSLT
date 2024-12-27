#include <iostream>
using namespace std;

int a, b, i, gcd = 1;

int main(){
    cout << "Enter a positive integer" << endl;
    cin >> a >> b;

    if (a <= 0 || b <= 0)
    {
           cout << "Invalid Input, You can't enter non-positive integer. Enter a positive integers" << endl;
           return 0;
    }
    for (i = 1; i <= a && i <=b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    
    cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}
