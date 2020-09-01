#include<bits/stdc++.h>
using namespace std;
// OBI 2014 - Primeira Fase - Nível Júnior

int main(){
    int e, d;
    int p1, p2, c1, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    e = p1 * c1;
    d = p2 * c2;

    if ( e == d ) {
        cout << "0" << endl;
    }
    else if ( e > d ) {
        cout << "-1" << endl;
    }
    else {
        cout << "1" << endl;
    }


}
