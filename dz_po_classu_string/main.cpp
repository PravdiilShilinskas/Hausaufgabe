#include <iostream>
using namespace std;

typedef class pair_int{
    int first;
    int second;
public:
    pair_int(int f, int s){
        first=f;
        second=s; 
    }

    pair_int(pair_int &a){
        first=a.get_first();
        second=a.get_second();
    }
        
    int get_first(){
        return first;
    }

    int get_second(){
        return second;
    }

    void set_first(int f){
        first=f;
    }

    void set_second(int s){
        second=s;
    }

}pair_int;
    
bool operator==(pair_int x, pair_int y){        
        if( (x.get_first()==y.get_first()) && (x.get_second()==y.get_second()) ) 
        return 1;
    return 0;
}
        
bool operator!=(pair_int x, pair_int y){
    if(x==y) return 0;
        return 1;
}

    void swap(pair_int &x, pair_int &y){
        int temp;
        temp=x.get_first();
        x.set_first(y.get_first());
        y.set_first(temp);
        temp=x.get_second();
        x.set_second(y.get_second());
        y.set_second(temp);
    }

int main(){
    pair_int A(200,100);
    A.set_second(300);
    cout<<A.get_first()<<" "<<A.get_second()<<endl;
    pair_int B(A);
    A.set_second(400);
    if(B==A) cout<<"Weee!"<<endl;
    else cout<<"Nooo!"<<endl;
    swap(A, B);
    cout<<A.get_first()<<" "<<A.get_second()<<endl;
    cout<<B.get_first()<<" "<<B.get_second()<<endl;
    return 0;
}
