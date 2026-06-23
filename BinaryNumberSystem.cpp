//Conversion from Binary to Decimal
#include <iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;
    while(n > 0){
        int lastdig = n%10;
        decNum = lastdig * pow;
        pow = pow * 2;
        n = n/10;
    }
    cout<<decNum<<endl;
}
int main(){
    binToDec(1011);
    return 0;
}

//Conversion from Decimal to Binary
#include <iostream>
using namespace std;

void decToBin(int decNum){
    int n = decNum;
    int BinNum = 0;
    int pow = 1;
    while(n > 0){
        int rem = n%2;
        BinNum += rem * pow;
        pow = pow * 10;
        n = n/2;
    }
    cout<<BinNum<<endl;
}
int main(){
    decToBin(8);
    return 0;
}
