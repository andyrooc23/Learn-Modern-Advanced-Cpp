#include <iostream>

using namespace std;

int main(){
    int i{2};

    int *p = &i;
    cout << p << ": member reference pointer address" << endl;
    cout << *p << ": value of i" << endl;

    int *l = new int{48};

    cout << l << endl;
    cout << *l << endl;
}