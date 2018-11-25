#include <iostream>
using namespace std;

bool check(int n, int result)
{
    int temp = 1, i;
    for(i=1; i<n; i++) 
	{
        n -= temp;
        if(n < 0) 
			return false;
        else if(n == 0) {
            result = i;
            return true;
        }
        temp += 2;
    }
    return false;
}

int main()
{
    int number, res;
    cin >> number;
    if(check(number, res))
        cout << number << " is " << res << "^2" << endl;
    else
        cout << number << " isn't n^2" << endl;
    return 0;
}