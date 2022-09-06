#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



/* strcpy ±¸Çö*/
char* strcpy_2(char* dest, const char* src);

void main() {
	char dest1[] = "dest";
	char dest2[] = "dest";

	strcpy(dest1, "src");
	printf("strcpy func ------> %s\n", dest1);


	strcpy_2(dest2, "src");
	printf("make func --------> %s\n", dest2);

}

char* strcpy_2(char* dest, const char* src) {
	char* str = dest;

	while (*src != NULL) {
		*str++ = *src++;
	}
	*str = '\0';

	return str;
}