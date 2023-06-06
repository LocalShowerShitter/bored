#include <iostream>


using string_t = std::string;
using std::cout;
int main()
{
    int inp1 = 9;
    int inp2 = 10;
    int sum = inp1 + inp2;

    if (inp1 == 9 && inp2 == 10 && sum == 19)
    {
        sum = 21;
    }

    cout << sum;

}
