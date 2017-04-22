#include <iostream>
using namespace std;
//Код расчитан на ручное составление сообщения по выданным данным.
void Haffman(int n, int** a){
if(n!=2){
   
   int k=n;
   int p=0;

   int min[2][2];
   for(int i=0;i<2;i++){
      min[i][1]=a[i][0];
      min[i][0]=i;
   };
   for(int i=0;i<k;i++){
      if(a[i][0]<=min[1][1]){
         if(a[i][0]<min[0][1]){
            int temp=min[0][1];
            int tmp=min[0][0];
            min[0][1]=a[i][0];
            min[0][0]=i;
            min[1][1]=temp;
            min[1][0]=tmp;
         }
         else{
            min[1][1]=a[i][0];
            min[1][0]=i;
         };
      };
   };
   
   a[(min[0][0])][k-1]=1;
   a[(min[1][0])][k-1]=0;
   
   int b[k-1][k-1];
   
   for(int i=0;i<k;i++){
      if((i==min[0][0])||(i==min[1][0])){
         p++;
      };
      b[i-p][0]=a[i][0];
   };
   k--;
   b[k-1][0]=(min[0][1]+min[1][1]);

   Haffman(k, b);

   a[(min[0][0])][k-1]=b[n-1][n-1];
   a[(min[1][0])][k-1]=b[n-1][n-1];

};
}

int main(){
   int n;
   cout << "Количество букв -  ";
   cin >> n;
   int Array[n][n];
   for(int i=0;i<n;i++){
      cout << "Количество повторов буквы номер " << i << " - ";
      cin >> Array[i][0];
      cout << "\n";
   };
   cout << "\n";

   for(int i=0;i<n;i++){
      for(int j=1;j<n;j++){
         Array[i][j]=(-1);
      };
   };

   Haffman(n, Array);

   for(int i=0;i<n;i++){
      cout << "Код буквы номер " << i << " - ";
      for(int j=1;j<n;j++){
         if(Array[i][j]!=(-1)){
            cout << Array[i][j];
         };
      };
      cout << "\n";
   };
}
