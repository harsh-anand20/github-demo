#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World!", "I", "am", "so", "back!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
