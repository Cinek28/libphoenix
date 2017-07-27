/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * test/test_str2num
 *
 * Copyright 2017 Phoenix Systems
 * Author: Adrian Kepka
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#include "stdlib.h"
#include "stdio.h"

int test_str2num(void)
{
	const int i1 = -100, i2 = 100;
	const long int li1 = -2000000000, li2 = 2000000000;
	const long long int lli1 = -9000000000000000000, lli2 = 9000000000000000000;
	const unsigned int u = 40000U;
	const unsigned long int lu = 4000000000U;
	const unsigned long long int llu = 18000000000000000000U;

	if(strtol("-100", NULL, 10) != i1)
		return -1;
	if(strtol("100", NULL, 10) != i2)
		return -1;
	if(strtoll("-2000000000", NULL, 10) != li1)
		return -1;
	if(strtoll("2000000000", NULL, 10) != li2)
		return -1;
    if(strtoll("-9000000000000000000", NULL, 10) != lli1)
        return -1;
    if(strtoll("9000000000000000000", NULL, 10) != lli2)
        return -1;

    if(strtoul("40000", NULL, 10) != u)
        return -1;
    if(strtoull("4000000000", NULL, 10) != lu)
        return -1;
    if(strtoull("18000000000000000000", NULL, 10) != llu)
        return -1;


	return 0;
}


int main(void)
{
	printf("test_str2num: Starting, main is at %p\n", main);
	int res = test_str2num();

	printf("str2num: %s\n", res == 0 ? "PASSED" : "FAILED");

	for (;;);

	return 0;
}

