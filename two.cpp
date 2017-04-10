#include <iostream>
using namespace std;

int main() {

    unsigned first = 1;
    unsigned second = 2;
    unsigned third, sum = 0;
    while(sum < 4000000) {
        third = first + second;
        if(second % 2 == 0) sum += second;
        first = second;
        second = third;
    }
    cout << sum << endl;
}
