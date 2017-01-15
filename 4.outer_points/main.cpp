#include <iostream>
using namespace std;

void outer_points(){
  int n, m;
  cin >> n >> m;
  int a[n], b[n], tochki[m];
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
  }
  int prinadleg[m];
  for(int i=0;i<m;i++){
    cin >> tochki[i];
    prinadleg[i]=n;
  }
  for(int i=0;i<m;i++){
    for(int q=0;q<n;q++){
      if((tochki[i]<=b[q]) && (tochki[i]>=a[q])){
        prinadleg[i]-=1;
      }
    }
  }
  for(int i=0;i<m;i++){
    cout >> prinadleg[i];
  }
}

int main(){
    outer_points();
    return 0;
}
