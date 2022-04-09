#include <stdio.h>
int bitAnd(int x, int y);
int getByte(int x, int n);
int logicalShift(int x, int n);
int main() {
   // printf(bitAnd(6,5));
    printf("0x%x",getByte(0x12345678,1));
    //printf("%x", logicalShift(0x87654321,4));
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
    return (x >> n);
}


