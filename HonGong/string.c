#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



/* ============================================= strcpy 备泅*/
//char* my_strcpy(char* dest, const char* src);
//
//void main() {
//	char dest1[] = "dest";
//	char dest2[] = "dest";
//	char* dest3 = "dest";
//	char* dest3_c = calloc(5, sizeof(char));
//
//
//	strcpy(dest1, "src");
//	printf("strcpy func ------> %s\n", dest1);
//
//	my_strcpy(dest2, "src");
//	printf("make func --------> %s\n", dest2);
//
//	my_strcpy(dest3_c, dest3);
//	printf("make func --------> %s\n", dest3_c);
//
//	free(dest3_c);
//}

char* my_strcpy(char* dest, const char* src) {
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return dest;
}

/* ========================================================= strncpy 备泅 */
//char* my_strncpy(char* dest, const char* src, int n);
//
//void main() {
//	char dest1[] = "dest";
//	char dest2[] = "dest";
//	char* dest3 = "dest";
//	char* dest3_c = calloc(5,sizeof(char));
//
//	strncpy(dest1, "src", 2);
//	printf("strncpy func ------> %s\n", dest1);
//
//	my_strncpy(dest2, "src", 2);
//	printf("make func --------> %s\n", dest2);
//
//	my_strncpy(dest3_c, dest3,2);
//	printf("make func --------> %s\n", dest3_c);
//	free(dest3_c);
//}
//
char* my_strncpy(char* dest, const char* src, int n) {

		for (int i = 0; i < n; i++) {
			*dest = *src;
			dest++;
			src++;
		}

	return dest;
}

/* ======================================================= strcat 备泅*/
//char* my_strcat(char* dest, const char* src);
//
//void main() {
//	char dest1[10] = "dest";
//	char dest2[10] = "dest";
//	char* dest3 = "dest";
//	char* dest3_c = calloc(10, sizeof(char));
//	
//	strcat(dest1, "src");
//	printf("strcat func ------> %s\n", dest1);
//
//	my_strcat(dest2, "src");
//	printf("my_strcat func ------> %s\n", dest2);
//
//	strcpy(dest3_c, dest3);
//	my_strcat(dest3_c, dest3);
//	printf("make func --------> %s\n", dest3_c);
//
//	free(dest3_c);
//}

char* my_strcat(char* dest, const char* src) {
	while (*dest != '\0') {
		dest++;
	}
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest;
}

/* ======================================================= strncat 备泅*/
//char* my_strncat(char* dest, const char* src, int n);
//
//void main() {
//	char dest1[10] = "dest";
//	char dest2[10] = "dest";
//	char* dest3 = "dest";
//	char* dest3_c = calloc(10, sizeof(char));
//	
//	strncat(dest1, "src", 2);
//	printf("strncat func ------> %s\n", dest1);
//
//	my_strncat(dest2, "src", 2);
//	printf("my_strncat func ------> %s\n", dest2);
//
//	strcpy(dest3_c, dest3);
//	my_strncat(dest3_c, dest3, 2);
//	printf("my_strncat func ------> %s\n", dest3_c);
//
//	free(dest3_c);
//
//}

char* my_strncat(char* dest, const char* src, int n) {
	
	while (*dest != '\0') {
		dest++;
	}
	for (int i = 0; i < n; i++) {
		*dest = *src;
		dest++;
		src++;
	}
	return dest;
}

/* ======================================================= strcmp 备泅*/
//int my_strcmp(char* dest, const char* src);
//
//void main() {
//		char dest1[] = "dest";
//		char dest2[] = "dest";
//		int res = 0;
//
//		res = strcmp(dest1, "dest");
//		printf("strcmp func(true) ------> %d\n", res);
//
//		res = strcmp(dest1, "asrc");
//		printf("strcmp func(false) dest > src ------> %d\n", res);
//
//		res = strcmp(dest1, "dsrc");
//		printf("strcmp func(false) dest < src ------> %d\n", res);
//
//		res = my_strcmp(dest2, "dest");
//		printf("my_strcmp func(true) ------> %d\n", res);
//
//		res = my_strcmp(dest2, "asrc");
//		printf("my_strcmp func(false) dest > src ------> %d\n", res);
//
//		res = my_strcmp(dest2, "dsrc");
//		printf("my_strcmp func(false) dest < src ------> %d\n", res);
//		
//}

int my_strcmp(char* dest, const char* src) {

	while (*dest != '\0') {
		if (*dest == *src) {
			dest++;
			src++;
		}
		if (*dest != *src) {
			if (*dest > *src) return  1;
			if (*dest < *src) return  -1;
		}
	}
	if (*dest == '\0')
		return 0;
}

/* ======================================================= strncmp 备泅*/
//int my_strncmp(char* dest, const char* src,int n);
//void main() {
//		char dest1[] = "dest";
//		char dest2[] = "dest";
//		int res = 0;
//
//		res = strncmp(dest1, "dest", 2);
//		printf("strncmp func(true) ------> %d\n", res);
//
//		res = strncmp(dest1, "asrc", 2);
//		printf("strncmp func(false) dest > src ------> %d\n", res);
//
//		res = strncmp(dest1, "dsrc", 2);
//		printf("strncmp func(false) dest < src ------> %d\n", res);
//
//		res = my_strncmp(dest2, "dest", 2);
//		printf("my_strncmp func(true) ------> %d\n", res);
//
//		res = my_strncmp(dest2, "asrc", 2);
//		printf("my_strncmp func(false) dest > src ------> %d\n", res);
//
//		res = my_strncmp(dest2, "dsrc", 2);
//		printf("my_strncmp func(false) dest < src ------> %d\n", res);
//}

int my_strncmp(char* dest, const char* src, int n) {

	for (int i = 0; i < n; i++) {
		if (*dest == *src) {
			dest++;
			src++;
		}
		
		if (*dest != *src) {
			if (*dest > *src) return 1;
			if (*dest < *src) return -1;
		}
	}
	return 0;
}
