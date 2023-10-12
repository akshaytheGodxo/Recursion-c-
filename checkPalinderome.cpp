#include <iostream>
using namespace std;
int ans = 0;
int palinderome(int n)
{
    //base case
    if (n == 0){
        return 1;
    }
    int remainder = n%10;
    n = n/10;
    ans = ans * 10 + remainder;
    palinderome(n);
    return ans;
}


int main()
{
    int n;
    cin >> n;

    int value = palinderome(n);
    if (n == value)
    {
        cout << "Palinderome";
    }
    else{
        cout << "Not Palinderome";
    }
    return 0;
}