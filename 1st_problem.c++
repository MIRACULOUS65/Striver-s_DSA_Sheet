// Input: Character
// Output: 1
// Explaination: For java it would be 2 bytes.

// Input: Integer
// Output: 4

// User function Template for C++

// not recommended to do this way

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int dataTypeSize(string str)
    {
        if (str == "char")
        {
            return sizeof(char);
        }

        if (str == "int")
        {
            return sizeof(int);
        }

        if (str == "long")
        {
            return sizeof(long);
        }

        if (str == "float")
        {
            return sizeof(float);
        }

        if (str == "double")
        {
            return sizeof(double);
        }
        else
        {
            return -1; // Return -1 for unrecognized types
        }
    }
};

int main()
{
    int t;
    cout << "Enter number of test cases: ";

    cin >> t;
    cout << "Reading data types:\n";

    Solution ob; // Create the object here
    while (t--)
    {
        string str;
        cin >> str;
        cout << "Data type received: " << str << endl;                 // Debugging output
        cout << "Size of data type: " << ob.dataTypeSize(str) << "\n"; // Output the size
        cout << "Data type received: " << str << endl;                 // Debugging output
    }
    return 0;
}
