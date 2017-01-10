#include <iostream>
using namespace std;

void print_palindrom(int n){
    int palindrom[n];
    for(int i=0;i<n/2;i++){
        for(int q=0;q<10;q++){
            palindrom[i]=q;
            palindrom[n-1-i]=q;
            cout << palindrom[i] << palindrom[n-1-i];
        }
    }
}

int main{
    int n;
    cin >> n;
    print_palindrom(n);
    return 0;
}
