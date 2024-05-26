#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number = -12345;
    int digit = 0;
    int rev = 0;
    // string test = to_string(number);
    // for(int i=0; i<test.size(); i++){
    //     cout << test[i] << "\n";
    // }
    while(number != 0){
        digit = number % 10;
        // cout << digit << "\n";
        // rev = (rev * 10) + digit;
        number = number/10;
    }
    // cout << rev << "\n";
    return 0;
}


