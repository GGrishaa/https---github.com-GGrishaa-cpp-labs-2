#include <iostream>
using namespace std;

long fact(long a){
    long s = 1;
    long ost = a % 2;
    for(int i = 1; i < a + 1; i++){
        if(i % 2 != ost){
            continue;
        }
        else{
            s *= i;
        }
    }
    return s;
}

double pow(double a, long b){
    double s = 1.0;
    for(int i = 1; i < b + 1; i++){
        s *= a;
    }
    return s;
}

double t(double x){
    double s1 = 0, s2 = 0, sum;
    for(int k = 0; k < 11; k++){
        s1 += (double) pow(x, 2 * k + 1) / fact(2 * k + 1);
        s2 += (double) pow(x, 2 * k) / fact(2 * k);
    }
    sum = (double) s1 / s2;
    return sum;
}

int main() {
    double y, r;
    cin >> y;
    r = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1));
    cout << r <<"\n";
    return 0;
}
