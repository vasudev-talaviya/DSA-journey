#include<iostream>
#include<vector>

using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;

    cout << &ptr << endl;

    float price = 100.25f;
    float *priceptr = &price;

    cout << price << endl;
    cout << &priceptr << endl;
    cout << priceptr << endl;
    cout << &price << endl;

    return 0;
}