#include <iostream>
using namespace std;

int main(){
    int a, b, i;
    cout << "Enter The Number a: \n";
    cin >> a;
    cout << "Enter The Number b: \n";
    cin >> b;
    cout << "The Odd Numbers in the interval " << '['<< a << ',' << b << "] Is:" << endl;
    for (i=a; i<=b; i++)
    {
        if (i%2!=0)
        {
            cout << i << ' ' << endl;
        }
        
    }

    return 0;
    
}