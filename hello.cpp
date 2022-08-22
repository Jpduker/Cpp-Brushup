#include <iostream>
using namespace std;

int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int A;
    int B;
    string name = "j0";
    cout << "Enter the first number:";
    cin >> A;
    cout << "Enter the secod number:";
    cin >> B;
    cout << "The subtraction is " << sub(A, B) << endl;
    cout << name.length() << endl;
    cout << name.find("j") << endl;
}
