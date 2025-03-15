#include <iostream>
using namespace std;

void prime_among(int num1, int num2, bool *result)
{
    int small_num = num1;
    if (num2 < small_num)   small_num = num2;

    *result = 1;

    for(int i = 2; i <= small_num; ++i)
    {
        if ( num1 % i == 0 && num2 % i == 0)
        {
            *result = 0;
            return;
        }
    }
}
int main()
{
    int a, b;
    bool answer;
    cout << "Please enter two integers: "<< endl;
    cin >> a>> b;

    prime_among(a,b, &answer);
    cout << (answer ? "Prime among them\n" : "Not prime among them\n");
    return 0;
}
