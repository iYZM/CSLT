#include <iostream>
using namespace std;

int main(){
    int i, n, x;
    int max ;
    cout << "Enter The Number Of Numbers: " << endl;
    cin >> n;
    cout << "Enter The " << n << " Numbers: "<< endl;
    cin >>x;
    max =x;
    for (i = 2; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        
    }

    cout << "The Max Number Is: " << max << endl;
    
}