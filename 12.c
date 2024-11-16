#include <stdio.h>
int main(void)
{
	unsigned short x=65535;
	unsigned int y = x;
	printf("%#x\n",*(unsigned int*)&y);
	
	return 0;
}
