#include <iostream>
using namespace std;

void print_palindrom(int n){
    int palindrom[n];
    int summ;
    for(int i=0;i<n/2;i++){
        for(int q=0;q<10;q++){
            palindrom[i]=q;
            palindrom[n-1-i]=q;
            cout << palindrom[i] << palindrom[n-1-i];
            summ=2*q;
        }
    }
    if((n%2)!=0){
        for(int i=0;i<10;i++){
            palindrom[n/2]=i;
            if((summ+i)%9==0){
                for(int q=0;q<n;q++){
                    cout << palindrom[q];
                }
                cout << "   ";
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    print_palindrom(n);
    return 0;
}
