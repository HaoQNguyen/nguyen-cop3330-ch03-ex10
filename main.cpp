#include "function.h"

int main()
{
    string s;
    
    cout << "Enter an operation followed by 2 operants: ";
    getline(cin, s);

    cout << "Result: " << result(s);

    return 0;
}