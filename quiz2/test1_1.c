#include <stdint.h>

uint32_t average(uint32_t a, uint32_t b)
{
    return (a + b) / 2;
}

int main()
{
    uint32_t a = 10000;
    uint32_t b = 5000;
    average(a, b);
    return 0;
}
