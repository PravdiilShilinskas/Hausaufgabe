#include <iostream>
using namespace std;

void incredible_sort(){
    
    int N, k;
    cin >> N >> k;
    int massiv[N];
    for(int i=0;i<N;i++){
        cin >> massiv[i];
    }
    
    int temp; // вре'менная переменная

    // Сортировка массива
    for(int i=0;i<(N-1);i++){
        for(int j=(N-1);j>i;j--){
            if(massiv[j]>massiv[j-1]){
                temp=massiv[j];
                massiv[j]=massiv[j-1];
                massiv[j-1]=temp;
            }
        }
    }
    //конец сортировки
    for(int i=0;i<N;i++) {
        cout << massiv[i];
    }
}

int main(){
    incredible_sort();
    return 0;
}
