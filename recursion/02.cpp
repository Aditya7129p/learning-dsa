#include <iostream>

using namespace std;

void print(int start_from, int num);

int main() {
    int st = 1;
    int end = 20;

    print(1, 20);
}

void print(int start_from, int num) {
    if(start_from <= num) {
        cout << "Current number: " << start_from << endl;
        start_from++;
        print(start_from, num);
    }
}