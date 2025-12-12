#include<iostream>
using namespace std;

int main(){
    int n, even = 0, odd = 0;
    cout << "Enter an integer: ";
    cin >> n;
     if (n % 2 == 0 &&  n != 0) {
        even++;
    }  
    else if (n % 2 != 0 ) {
        odd++;
    }
   while(n!=0){
     cout << "Enter an integer: ";
     cin >> n;
            if (n % 2 == 0 &&  n != 0) {
              even++;
    }  
            else if (n % 2 != 0 ) {
                odd++;
    }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}