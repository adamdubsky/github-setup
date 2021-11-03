#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int recursion(int n);

int main(){
    int n; //User entered number
    cout<<"Enter number: ";
    cin>>n;
    int x = recursion(n);

    cout<<x<<endl;

    return 0;
}

//Recursive function that calculates factorial
int recursion(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursion((n - 1));
    }

    return n;
}