#include <iostream>
#include <string.h>
using namespace std;

double result(string s)
{
    string delimiter = " ";

    size_t pos = s.find(delimiter);

    string operation = s.substr(0, pos);

    s.erase(0, pos + delimiter.length());

    string::size_type sz;

    double o1 = stod (s,&sz);
    double o2 = stod (s.substr(sz));

    if (operation == "+")
        return (o1 + o2);
    else if (operation == "-")
        return (o1 - o2);
    else if (operation == "*")
        return (o1 * o2);
    else
        return (o1 / o2);
}