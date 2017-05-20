#include <iostream>
using namespace std;

void BucketSort(int* Array, int n){
   int k=0;
   int b=0;

   for(int i=0;i<n;i++){
      if(k<Array[i]){
         k=Array[i];
      };
   };

   k=(k/10)+1;
   int Joker[k][10];

   for(int i=0;i<k;i++){
      for(int j=0;j<10;j++){
         int s=0;
         for(int c=0;c<n;c++){
            if((Array[c]>i*10)&&(Array[c]<(i+1)*10)){
               Joker[i][j]=Array[c];
               Array[c]=-1;
               s++;
            };
         };
         if(s<11){
            Joker[i][s]=-1;
         };
      };
   };
   for(int i=0;i<k;i++){
      for(int j=0;(j<10)||(Joker[i][j]!=-1);j++){
         Array[b]=Joker[i][j];
         b++;
      };
   };
}

int main(){
   int n;
   cin >> n;
   int Array[n];
   for(int i=0;i<n;i++){
      cin >> Array[i];
   };
   
   BucketSort(Array, n);
   
   for(int i=0;i<n;i++){
      cout << Array[i];
   };
}
