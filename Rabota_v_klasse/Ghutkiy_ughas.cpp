#include <iostream>
using namespace std;

int main(){
    
    typedef class pair_int{
        int first;
        int second;
    public:
        void pair_int1(int f, int s){
            first=f;
            second=s; 
        }
        void pair_int2(int &a, int &b){
            a=first;
            b=second;
        }
        
        void get_first(){
            cout << first;
        }
        void get_second(){
            cout << second;
        }
        void set_first(){
            cin >> first;
        }
        void set_second(){
            cin >> second;
        }
        operator ==(pair_int &x, pair_int &y){
            int a, b, c, d;
            pair_int2.x(a, b);
            pair_int2.y(c, d);
            if((a==c)&&(b==d)) return 1;
            return 0;
        }
        operator !=(pair_int &x, pair_int &y){
            int a, b, c, d;
            pair_int2.x(a, b);
            pair_int2.y(c, d);
            if((a==c)&&(b==d)) return 0;
            return 1;
        }
        void swap(pair_int &x, pair_int &y){
            int a, b, c, d;
            pair_int2.x(a, b);
            pair_int2.y(c, d);
            pair_int1.x(c, d);
            pair_int1.y(a, b);
        }
    }pair_int;
    return 0;
}
