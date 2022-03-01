#include <iostream>

using namespace std;

int main()
{
    int x, i, validador = 1, valid = 0;

    cin >> x;
    int number[x];

    for (i = 0; i < x; i++)
    {
        cin >> number[i];
    }

    for (i = 0; i <= x; i++)
    {
        if (number[i - 1] == number[i])
        {
            validador++;
        }
        else
        {
            if (validador > valid)
            {
                valid = validador;
                validador = 1;
            }
            else
            {
                validador = 1;
            }
        }
    }
    cout << valid << endl;
    return 0;
}
