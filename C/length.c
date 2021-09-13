#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[31];
	scanf("%s", ch);
	int length = 0;

	for (int i = 0; ch[i] != 0; i++) {
		length++;
	}


	printf("%d", length);

	return 0;
}