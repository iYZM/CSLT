#include <iostream>
using namespace std;

int main(){
    int i, n, x, max = 0;
    cout << "Enter The Number Of Numbers: " << endl;
    cin >> n;
    cout << "Enter The " << n << " Numbers: "<< endl;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        
    }

    cout << "The Max Number Is: " << max << endl;
    
}