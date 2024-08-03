#include<iostream>
using namespace std;

int pow(int b, int e);

int main()
{
    int n, count = 0;
    int sum = 0;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 0; 
    }
    int x = n; // x=153
    while (x > 0) {
        x = x / 10;
        count++;
    }
    x = n; // x=153
    while (x != 0) {
        int lastDigit = x % 10;
        sum += pow(lastDigit, count);
        x = x / 10;
    }

    if (sum == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}

int pow(int b, int e)
{
    int result = 1;
    for(int i = 0; i < e; i++) {
        result *= b;
    }
    return result;
}
