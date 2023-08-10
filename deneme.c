#include <stdio.h>

int main()
{
/* 	printf("1% s || 2%       s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1% c || 2%       c\n", 'a', 'a');
	printf("--------------------\n");
	printf("1% d || 2%       d\n", 42, 42);
	printf("--------------------\n");
	printf("1% i || 2%       i\n", 42, 42);
	printf("--------------------\n");
	printf("--------------------\n");

	printf("1%+s || 2%       +s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%+d || 2%       +d\n", 42, 42);
	printf("--------------------\n");
	printf("1%+i || 2%       +i\n", 42, 42);
	printf("--------------------\n");
	printf("1%+c || 2%       +c\n", 'a', 'a');
	printf("--------------------\n");
	printf("1%+x || 2%       +x\n", 42, 42);
	printf("--------------------\n");
	printf("1%+u || 2%       +u\n", 42, 42);
	printf("--------------------\n");
	printf("--------------------\n");
 */
/* 	printf("1%-10s || 2%       -5s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%-2d || 2%       -5d\n", 42, 42);
	printf("--------------------\n");
	printf("1%-5i || 2%       -5i\n", 42, 42);
	printf("--------------------\n");
	printf("1%-5c || 2%       -5c\n", 'a', 'a'); */

	printf("1%.3s || 2%       .3s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%.2d || 2%       .5d\n", 4244, 4244);
	printf("--------------------\n");
	printf("1%.2i || 2%       .2i\n", 4244, 4244);
	printf("--------------------\n");
	printf("1%.0s || 2%       .0s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%.1s || 2%       .1s\n", "hello", "hello");


	return 0;
}