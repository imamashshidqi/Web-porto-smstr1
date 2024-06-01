#include <iostream>
using namespace std;

void barisBilangan(int angka){
    if (angka > 5){
        barisBilangan(angka - 2);
        cout << angka <<" ";
    }else{
        cout << -10 << " ";
    }
}
int main() {
    barisBilangan(15);
    cout << endl;
    
    return 0;
}