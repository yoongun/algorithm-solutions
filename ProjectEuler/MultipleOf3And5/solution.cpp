#include <iostream>
#include <vector>

using namespace std;

int main()
{
    auto sum = 0;

    for (int i = 1; i < 1000; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << endl;
            sum += i;
        }
    }    

    cout << sum << endl;

    return 0;
}
