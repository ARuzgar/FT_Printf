#include <stdio.h>

int main()
{

	printf("minusalonewithstring : %-10s||\n", "hello");
	printf("minusalonewithdigits : %-10d||\n", 55555);
	printf("minusalonewithintege : %-10i||\n", 55555);
	printf("minusalonewithcharac : %-10c||\n", 'C');
	printf("minusalonewithpointe : %-20p||\n", &main);
	printf("--------------------\n");
	printf("minuswithdotwithstri : %-10.3s||\n", "hello");
	printf("minuswithdotwithdigi : %-10.3d||\n", 55555);
	printf("minuswithdotwithinte : %-10.3i||\n", 55555);
	printf("minuswithdotwithchar : %-10.3c||\n", 'C');
	printf("minuswithdotwithpoin : %-20.3p||\n", &main);
	printf("--------------------\n");
	printf("minuswnothins : %-10s||\n", NULL);
	printf("minuswnothing : %-10||\n");
	printf("minuswnothing : %-10");
	printf("minuswnothingkskkk\n");

	/* printf("minusalone:%-10s|| minuswithspace:% -10s||minusontheright:%s-10||minuswithnegative:%--5s||\n", "hello", "hello", "hello", "hello");
	printf("minusalone:%-10.3s||\n", "hello");
	printf("minusalone:%-s||\n", "hello");
	printf("minusalone:%-10d||\n", 55555);
	printf("minusalone:%-10.3d||\n", 55555); */
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

/* 	printf("1%.3s || 2%       .3s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%.2d || 2%       .5d\n", 4244, 4244);
	printf("--------------------\n");
	printf("1%.2i || 2%       .2i\n", 4244, 4244);
	printf("--------------------\n");
	printf("1%.0s || 2%       .0s\n", "hello", "hello");
	printf("--------------------\n");
	printf("1%.1s || 2%       .1s\n", "hello", "hello"); */


	return 0;
}