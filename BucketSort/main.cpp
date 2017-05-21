#include <iostream>
using namespace std;

void BucketSort(int* Array, int n){   //Аргументы
   int k=0;   //вёдра
   int b=0;   //перенумератор исходного массива

   for(int i=0;i<n;i++){   //максимальное значение
      if(k<Array[i]){
         k=Array[i];
      };
   };

   k=(k/10)+1;   //количество вёдер
   int Joker[k][10];   //создание вёдер из 10 шт. данных

   for(int i=0;i<k;i++){   //ведро
      int s=0;   //счётчик данных в ведре
         for(int j=0;j<10;j++){   //элемент
            int temp=-1;   //идентификатор элемента в исходном массиве
            for(int c=0;c<n;c++){   //распределение по корзинам
               if((Array[c]>i*10)&&(Array[c]<(i+1)*10)){   //нахождение идентификатора
                  temp=c;
               };
            };
            if(temp!=-(1)){
               Joker[i][j]=Array[temp];   //назначение элемента в ведро
               Array[temp]=-1;   //стерание элемента из исходного массива
               s++;
            };
         };
      if(s<10){   //обозначение конца данных в ведре, если оно не полное
         Joker[i][s]=-1;
      };
   };
   
   for(int i=0;i<k;i++){   //сортировка вёдер
      int d=1;   // счётчик минисортировки
      for(int j=0;(j<9);j++){
         int c=0;
         for(int p=0;p<11-d;p++){
            if(Joker[i][c]<Joker[i][p]){
               c=p;
            };
         };
         int tmp=Joker[i][10-d];
         Joker[i][10-d]=Joker[i][c];
         Joker[i][c]=tmp;
         d++;
      };
   };
   
   for(int i=0;i<k;i++){   //возращение вёдер на место
      for(int j=0;((j<10)||(Joker[i][j]!=-1));j++){
         Array[b]=Joker[i][j];
         b++;
      };
   };
}

int main(){
   int n;   //кол-во чисел в массиве
   cin >> n;
   int Array[n];   //сам массив
   for(int i=0;i<n;i++){
      cin >> Array[i];
   };
   
   BucketSort(Array, n);   //вызов функции
   
   for(int i=0;i<n;i++){   //вывод массива
      cout << Array[i];
   };
}
