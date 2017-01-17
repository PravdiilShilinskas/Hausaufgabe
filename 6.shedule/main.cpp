#include <iostream>
using namespace std;

void shedule(){
    int n, max;
    cin >> n;
    int s[n], f[n], udacha[n];
    for(int i=0;i<n;i++){
        udacha[i]=1;
    }
    for(int i=0;i<n;i++){
        cin >> s[i] >> f[i];
    }
  
    for(int i=0;i<n;i++){
        for(int q=0;q<n;q++){
            if(f[i]<=s[q]) udacha[i]+=1;
        }
    }
    for(int i=0;i<n;i++){
        if(max<udacha[i]) max=udacha[i];
    }
    cout << max;
}

int main(){
    shedule();
    return 0;
}
