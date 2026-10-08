#include <iostream>

using namespace std;

void print(int*& count);

int main() {
    // Print Name 5 times
    int cnt = 1;
    int* count {&cnt};

    print(count);
}

void print(int*&count) {
    if(*count<=5) {
        cout << "Name" <<endl;
        *count = *count+1;;
        print(*&count);
    }
}
