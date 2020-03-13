#include <stdio.h>
#include <iostream>
using namespace std;

double arr[5] = {};
double n_1, n_2, n_3, n_4, n_5, p_1, p_2; 

double minValue(double any_arr)
{
    double p = any_arr[0];
    
    for(int i = 0; i < 5; i ++)
    {
        if(any_arr[i] < p)
        {
            p = any_arr[i];
        }
    }
    
    return p;
}

double maxValue(double any_arr)
{
    double p = any_arr[0];
    
    for(int i = 0; i < 5; i ++)
    {
        if(any_arr[i] > p)
        {
            p = any_arr[i];
        }
    }
    
    return p;
}

int main()
{
    cout << "Input number 1: ";
    cin >> n_1;
    cout << "Input number 2: ";
    cin >> n_2;
    cout << "Input number 3: ";
    cin >> n_3;
    cout << "Input number 4: ";
    cin >> n_4;
    cout << "Input number 5: ";
    cin >> n_5;
    
    arr[0] = n_1;
    arr[1] = n_2;
    arr[2] = n_3;
    arr[3] = n_4;
    arr[4] = n_5;
    
    p_1 = minValue(arr);
    p_2 = maxValue(arr);
    
    cout << "Min val is " << p_1 << endl;
    cout << "Max val is " << p_2 << endl;
    
    return 0;
}
