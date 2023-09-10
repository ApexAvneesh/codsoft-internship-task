#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char op;
    cout << "Enter two number: " << endl;
    cin >> a  >>b;
    cout << "Enter operator: ";
    cin >> op;
    switch(op)
    {
    case '+': c = a + b;
    cout << "addition = " << c;
        break;
    case '-': c = a - b;
    cout << "subctraction = " << c;
        break;
    
    case '*': c = a * b;
    cout << "multiplication = " << c;
        break;
    
    case '/': c = a / b;
    cout << "division " << c;
        break;

     case '%': c = a % b;
    cout << "modulus " << c;
        break;    
    
    default:
     cout << "Error found 404";
        break;
    }
    return 0;
}