// Write a code to find sum of  n terms AP in wich first term and last term is given
#include <iostream>
using namespace std; 

int main() {
    int a, l, n;
    cout << "Enter the first term (a), last term (l), and number of terms (n): ";
    cin >> a >> l >> n;

    int sum = (n * (a + l)) / 2;

    cout << "The sum of AP is: " << sum << endl;
    return 0;
}
