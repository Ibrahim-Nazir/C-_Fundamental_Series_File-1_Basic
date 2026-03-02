#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 100:" << endl;
    
    for (int num = 2; num <= 100; num++) {
        bool ch= true;
        
        
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                 ch= false;
                break;
            }
        }
        
        if (ch==true) {
            cout << num << " ";
        }
    }
    
    return 0;
}
