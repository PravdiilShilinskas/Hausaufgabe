#include <iostream>
using namespace std;

typedef class string{
    int size;
    char*Array;
    public:
    string(int x){
        size=x;
        Array=new char*[size];
        for(int c=0;c<size;c++) cin >> Array[c];
    }
    concat(string s){
        a.size+=s.size;
        char temp[a.size];
        int tempik;
        
    }
    find(string s){
        
    }
    print(){
        for(int c=0;c<size;c++) cout << Array[c];
    }
    set(int i){
        cin >> Array[i];
    }
    get(int i){
        cout << Array[i];
    }
    ~string(){
        for(int c=0;c<size;c++){
            delete Array[c];
            delete Array;
        }
    }
}string;

int main(){
    return 0;
}
