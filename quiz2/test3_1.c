#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


uint64_t gcd64(uint64_t u, uint64_t v)
{
    if (!u || !v) return u | v;
    while (v) {
	uint64_t t = v;
	v = u % v;
	u = t;
    }
    return u;
}

int main(int argc, char *argv[])
{
    unsigned int seed;
    seed = atoi(argv[1]);
    srand(seed);
    uint64_t u = rand();
    seed = atoi(argv[2]);
    srand(seed);
    uint64_t v = rand();
    printf("u = %lu, v = %lu\n", u, v);

    printf("GCD = %lu\n", gcd64(u, v));
    return 0;
}
