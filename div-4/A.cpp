#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string w;
        cin >> w;

        // Remove last two characters "us" and add "i"
        w = w.substr(0, w.length() - 2) + "i";
        cout << w << "\n";
    }

    return 0;
}
