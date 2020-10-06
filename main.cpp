#include <iostream>

using namespace std;

int main() {
    string cadena;

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "char")
    {
        cout << sizeof(char) << endl;
    }

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "int")
    {
        cout << sizeof(int) << endl;
    }

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "short")
    {
        cout << sizeof(short) << endl;
    }

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "float")
    {
        cout << sizeof(float) << endl;
    }

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "double")
    {
        cout << sizeof(double) << endl;
    }

    cin >> cadena;
    cout << cadena.size() << endl;

    if(cadena == "long")
    {
        cout << sizeof(long) << endl;
    }

    return 0;
}