#include <iostream>

using namespace std;

void reversePrint(int st, int end);

int main() {
    auto st = 0;
    auto end = 12;

    reversePrint(st, end);
}

void reversePrint(int st, int end) {
    if(st < end) {
        cout << "Current number is: " << end << endl;
        end--;
        reversePrint(st, end);
    }
}