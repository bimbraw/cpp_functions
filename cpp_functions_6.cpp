#include <stdio.h>
#include <iostream>
using namespace std;

double num_1, num_2, p_1, p_2, p_3, p_4, p_5, q = 0;
int num_3;
char input;

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

int chooseOperation(char i)
{
    switch(i)
    {
        case '+':
            cout << "Addition is " << p_1 << endl; 
            break;
        case '-':
            cout << "Subtraction is " << p_2 << endl;
            break;
        case '*':
            cout << "Multiplication is " << p_3 << endl;
            break;
        case '/':
            cout << "Division is " << p_4 << endl;
            break;
        case '^':
            cout << "Exp is " << p_5 << endl;
            break;
        default:
            cout << "Incorrect Option";
            break;
    }
}

int main()
{
    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;
    cout << "Enter the third (integer) number: ";
    cin >> num_3;
    cout << endl;
    
    p_1 = addition(num_1, num_2);
    //cout << "Addition is " << p_1 << endl;
    p_2 = subtraction(num_1, num_2);
    //cout << "Subtraction is " << p_2 << endl;
    p_3 = multiplication(num_1, num_2);
    //cout << "Multiplication is " << p_3 << endl;
    p_4 = division(num_1, num_2);
    //cout << "Division is " << p_4 << endl;
    p_5 = exponentiation(num_1, num_3);
    //cout << "Exp is " << p_5 << endl;
    
    cout << "Enter number 1 - add, 2 - sub, 3 - mul, 4 - /, 5 - ^: ";
    cin >> input;
    
    chooseOperation(input);
    
    return 0;
}
