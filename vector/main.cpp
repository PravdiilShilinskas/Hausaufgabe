#include <iostream>
using namespace std;

class vector{
    int Array[];
    int size;
    int cap;
public:
    vector(int n){
        Array[n];
        size=0;
        cap=n;
        for(int i;i<n;i++){
            Array[i]=NULL;
        }
    };
    ~vector(){
        delete Array;
    };
    void capplus(){
        int tmp[cap];
        for(int i;i<cap;i++){
            tmp[i]=Array[i];
        }
        delete Array;
        cap+=cap;
        int Array[cap];
        for(int i=0;i<cap/2;i++){
            Array[i]=tmp[i];
        }
        for(int i=cap/2;i<cap;i++){
            Array[i]=NULL;
        }
        delete tmp;
    };
    void push_back(int n){
        if(size+1==cap){
            capplus();
        }
        int temp=0;
        for(int i=0;Array[i]!=NULL;i++){
            temp++;
        }
        cin >> Array[temp];
        size++;
    };
    void append(int n){
        cin >> Array[n];
    };
    int pop_head(){
        int k=Array[size-1];Array[size-1]=NULL;
        for(int i;i+1<size;i++){
            int temp=Array[(size-2)-i];
            Array[(size-2)-i]=k;
            k=temp;
        }
        return k;
    };
};

int main(){
    vector A(3);
    A.append(1);
    A.push_back(5);
    A.append(3);
    cout << A.pop_head();
    cout << A.pop_head();
    
    return 0;
}
