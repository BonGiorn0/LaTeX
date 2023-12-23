#include <cstdio>
int main(){
    int a = 195;
    int b = -167;
    float c = -138.99267578125;
    long c1 = * (long*) &c;
    printf("%X\n", a);
    printf("%X\n", b);
    printf("%X\n", c1);

}