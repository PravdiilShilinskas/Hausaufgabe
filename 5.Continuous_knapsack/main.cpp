#include <iostream>
using namespace std;

int Continuous_knapsack(){
    int W, n;
    cin >> W >> n;
    int w[n], c[n];
    for(int i=0;i<n;i++){
        cin >> w[i] >> c[i];
    }
    
    float ch[n]; //доли от предметов
    //заполнение пустых полей
    for(int i=0;i<n;i++){
        ch[i]=0.0;
    }
    
    int temp=1; // вре'менная переменная №1
    int tempi=1; // вре'менная переменная №2
    int C=0; //Общая цена портфеля
    
    int ud[n]; //удельная стоимость
    for(int i=0;i<n;i++){
        ud[i]=c[i]/w[i];
    }
    
    //Большая белеберда, которую я писал в 2:54 10.01.2017. Но, вроде работает.
    while((W>0)||(temp!=0)){
        temp=0;
        for(int i=0;i<n;i++){   //Вроде, поиск макс. удельной стоимости
            if(ud[i]>temp){
                temp=ud[i];
                tempi=i;
            }
        }
        ud[tempi]=0;
        
        if(W<w[tempi]){   ///Штука, отвечающая за доли и сумму
            ch[tempi]=W*(1.0/w[tempi]);
            C+=W*ud[tempi];
            W=0;
        }
        else{
            ch[tempi]=1.0;
            C+=c[tempi];
            W-=w[tempi];
        }
    }
    for(int i=0;i<n;i++){
        cout << ch[i] << "  ";
    }
    cout << "\n";
    return C;
}

int main(){
    cout << Continuous_knapsack();
}
