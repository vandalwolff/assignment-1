#include <iostream>
#include <float.h>
#include <limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "The range of (char) is from: " << CHAR_MIN << "to " << CHAR_MAX << endl;
    cout << "The range of short is from: " << INT16_MIN << "to " << INT16_MAX << endl;
    cout << "The range of long is from: " << INT32_MIN << "to " << INT32_MAX << endl;
    cout << "The range of double is from: " << DBL_MIN << "to " << DBL_MAX << endl;
}