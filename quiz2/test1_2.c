#include <stdint.h>

uint32_t average(uint32_t a, uint32_t b)
{
    return (a >> 1) + (b >> 1) + (a & b & 1);
}

int main()
{
    int a = 10000;
    int b = 20000;
    average(a, b);
    return 0;
}
