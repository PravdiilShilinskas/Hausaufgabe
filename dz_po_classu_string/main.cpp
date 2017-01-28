#include <iostream>
using namespace std;

typedef class string{
    int size;
    char*Array;
    public:
    string(int x){
        size=x;
        Array=new char[size];
        for(int c=0;c<size;c++) cin >> Array[c];
    }
    void concat(string S){
        for(int c=size;c<size+S.size;c++)Array[c]=S.Array[c-size];
        size+=S.size;
    }
    void find(string S){
        if(size>=S.size){
            int recurs(int x, int y){
                if(Array[x+y]==S.Array[y]){
                    if(S.size>y+1) recurs(x, y+1);
                    else return 1;
                }
                return 0;
            }
            for(int c=0;c<size+1-S.size;c++){
                int nomer=0;
                if(recurs(c, nomer)==1) cout << c << endl; 
            }
        }
    }
    void print(){
        for(int c=0;c<size;c++) cout << Array[c];
    }
    void set(int i){
        cin >> Array[i];
    }
    void get(int i){
        cout << Array[i] << endl;
    }
    ~string(){
        for(int c=0;c<size;c++){
            delete Array[c];
        }
        delete Array;
    }
}string;

int main(){
    return 0;
}
