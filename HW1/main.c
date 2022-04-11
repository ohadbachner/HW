#include <stdio.h>
int bitAnd(int x, int y);
int getByte(int x, int n);
int logicalShift(int x, int n);
int main() {
    printf("%d\n",bitAnd(6,5));
    printf("0x%x\n",getByte(0x12345678,1));
    printf("0x%x", logicalShift(0x87654321,4));
    return 0;

}

int bitAnd(int x, int y){
    int sum = ~(~x|~y);
    return sum;
}
int getByte(int x, int n) {
    return (x >> 8*n) & 0xFF;
}
int logicalShift(int x, int n){
    int mask = ~2 + 1;
    int shiftAmount = 31 + ((~n) + 1);//this evaluates to 31 - n on two's complement machines
    mask = mask << shiftAmount;
    mask = ~mask;//If n equals 0, it means we have negated all bits and hence have mask = 0
    x = x >> n;
    return x & mask;
}


