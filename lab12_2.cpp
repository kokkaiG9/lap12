#include<iostream>
using namespace std;

int gcd(int x, int y) ;

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x, int y) {
    int max,min;
    if(x>=y){
        max = x;
        min = y;
    }else {
        max = y;
        min = x;
    }
    if(max%min==0){
        return min;
    }else{
        return gcd(min,max%min);
    }
}
