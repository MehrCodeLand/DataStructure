#include "iostream"
using namespace std;

// O(n)
void printItems( int n )
{
    for(int i = 0 ; i < n ; i++ )
    {
        cout << "i : " << i << endl;
    }
}

// O(n * n)
void printItems2( int n )
{
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j < n ; j++ )
        {
            cout << "J : " << j << endl;
        }
    }
}


// O(1 + 1 ) = O(1)
int BackItem(int n )
{
    return n + n + n ;
}

int main()
{
    printItems(5);
    printItems2(10);
    int numebr = BackItem(5);
}