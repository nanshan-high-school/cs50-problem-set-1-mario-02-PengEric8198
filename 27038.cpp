#include <iostream>
using namespace std;

int main() {
int high = 0;

do {
cout << "高度";
cin >> high;
} while (high <= 0);


    for (int i = 0; i < high + 1; i++) {
        for (int j = 0; j < high - i; j++) {
        cout << " ";
        }
    
        for (int j = 0; j < i; j++) {
        cout << "*";
        }
        
        cout << "  ";

        for (int j = 0; j < i; j++) {
        cout << "*";
        }
        
        
        cout << "\n";
    }
}
