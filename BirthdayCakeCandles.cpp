
#include <iostream>

using namespace std;

int main() {

    int n, max = 0, count, x;

    cin >> n;

    for( int i=0; i<n; i++ ) {
        cin >> x;

        if( x > max ) {
            max = x;
            count = 1;
        }
        else if( x == max )
            count++;
    }

    cout << count;


    return 0;
}
