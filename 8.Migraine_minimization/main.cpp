#include <iostream>
using namespace std;

int Re(int Geld, int d) {
        int kvadr, osnov=0;
        while(kvadr<=Geld){
            osnov+=1;
            kvadr=osnov*osnov;
        }
        Geld-=(osnov-1)^(osnov-1);
        d+=1;
        if(osnov==0) return d;
        return Re(Geld, d);
    }

int Migraine_minimization(){
    int Geld;
    int d=0;
    cin >> Geld;
    cout << Re(Geld, d)*4;
    return 0;
}

int main(){
    Migraine_minimization();
    return 0;
}
