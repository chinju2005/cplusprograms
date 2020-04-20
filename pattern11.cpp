#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (i == j || i == 0 && j == 5 || i == 1 && j == 4 || i == 2 && j == 3 || i == 3 && j == 2 || i == 4 && j == 1 || i == 5 && j == 0)

                cout << "*";

            else

                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
