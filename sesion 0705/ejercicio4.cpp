#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int count = 0;
    while (i < 300)
    {
        count++;
        if (count % 2 == 0)
        {
            i++;
            cout << "" << i << endl;
        }
    }
    return 0;
}

