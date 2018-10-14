#include <stdio.h>
#include <string.h>

enum e{
	A_A,
	B_B=3,
	C_C,
};

int main(int argc, char *argv[])
{
	//array pointer
	int (*p)[10];
	//pointer array
	int *p1[10];

	printf("sizeof(p) = %d\n", sizeof(p));
	printf("sizeof(p1) = %d\n", sizeof(p1));

	//enum testing case
	printf("%d, %d, %d\n", A_A, B_B, C_C);

	char *str = "abcdef";
	//%lu - output the addr of str+2
	printf("%lu - %p\n",str+2, str+2);

	char sz[] = "abcdef";
	//should print 4 - 7
	printf("%d - %d\n", sizeof(str), sizeof(sz));
	printf("%d\n", strlen(sz));

	//define const string array,
	//c_sz[] can't be modified
	const char *c_sz[3] = {"aaa", "bbb", "ccc"};

	return 1;
}
