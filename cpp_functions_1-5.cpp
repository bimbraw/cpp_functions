#include <stdio.h>
#include <iostream>
using namespace std;

double num_1, num_2, p, q = 0;
int num_3;

double addition(double n_1, double n_2)
{
    double output;
    output = n_1 + n_2;
    
    return output;
}

double subtraction(double n_1, double n_2)
{
    double output;
    output = n_1 - n_2;
    
    return output;
}

double multiplication(double n_1, double n_2)
{
    double output;
    output = n_1 * n_2;
    
    return output;
}

double division(double n_1, double n_2)
{
    double output;
    output = n_1 / n_2;
    
    return output;
}

double exponentiation(double n_1, int n_3)
{
    double nn;
    nn = n_1;
    
    for(int i = 0; i < num_3-1; i++)
    {
        q = n_1;
        n_1 = q * nn;
    }
    
    return n_1;
}

int main()
{
    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;
    cout << "Enter the third number: ";
    cin >> num_3;
    cout << endl;
    
    p = addition(num_1, num_2);
    cout << "Addition is " << p << endl;
    p = subtraction(num_1, num_2);
    cout << "Subtraction is " << p << endl;
    p = multiplication(num_1, num_2);
    cout << "Multiplication is " << p << endl;
    p = division(num_1, num_2);
    cout << "Division is " << p << endl;
    p = exponentiation(num_1, num_3);
    cout << "Exp is " << p << endl;
    
    return 0;
}
