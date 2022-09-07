#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* ============================================= strcpy 구현*/
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

/* ========================================================= strncpy 구현 */
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

/* ======================================================= strcat 구현*/
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
//	my_strcpy(dest3_c, dest3);
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

/* ======================================================= strncat 구현*/
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
//	my_strcpy(dest3_c, dest3);
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

/* ======================================================= strcmp 구현*/
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

/* ======================================================= strncmp 구현*/
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

/* ======================================================= strchr 구현*/
//char* my_strchr(char* dest, char c);
//
//void main() {
//	char dest1[] = "dest1dest2";
//	char dest2[] = "dest1dest2";
//	char dest3[] = "dest1dest2";
//	char* res2 = "dest1dest2";
//	char* res;
//	int count = 0;
//	int count2 = 0;
//
//	res = strchr(dest1, '1');
//	printf("strchr func ------>%s\n", res);
//
//	res = my_strchr(dest2, '1');
//	printf("my_strncat func ------>%s\n", res);
//
//	res = dest3;
//	for ( ; ; ) {
//		res = strchr(res, 'd');
//		if (res == NULL) {
//			break;
//		}
//		count2++;
//		res++;
//	}
//	printf("strchr ---------> d가 %d개\n", count2);
//
//	res = dest3;
//	for ( ; ; ) {
//		res = my_strchr(res, 'd');
//		if (res == NULL) {
//			break;
//		}
//		count++;
//		res++;
//	}
//	printf("my_strchr ---------> d가 %d개\n", count);
//}

////예전에는 int 형으로 c를 선언했는데 그건 옛버젼의 잔재임. 현재 아래오같이 선언한대로 써도 무방, int공간 4바이트, char1바이트이기에 글자하나 찾는건 char가 공간효율 있음
char* my_strchr(char* dest, const char c) {
	while (*dest != '\0') {
		if (*dest == c) return dest;
		if (*dest != c) {
			dest++;
		}
	}
	if(*dest == '\0') 
		return NULL;
}

/* ======================================================= strlen 구현*/
//int my_strlen(char* dest);
//void main() {
//	char dest1[] = "Hellodest1";
//	char dest2[] = "Hellodest2";
//	int len = 0;
//
//	len = strlen(dest1);
//	printf("%d\n", len);
//
//	len = my_strlen(dest2);
//	printf("%d\n", len);
//}

int my_strlen(char* dest) {
	int count = 0;
	while (*dest != NULL) {
		dest++;
		count++;
	}
	return count;
}

/* ======================================================= strstr 구현*/
char* my_strstr(char* dest, char* src);

void main() {
	char* dest1 = "Hellodest1";
	char* dest2 = "Hellodest2";
	char* ptr;

	ptr = strstr(dest1, "de");
	printf("%s\n", ptr);
	
	ptr = my_strstr(dest2, "de");
	printf("%s\n", ptr);

}
char* my_strstr(char* dest, char* src) {
	int count = 0;
	int i;
	
	while (dest[0] != src[0]) {
		dest++;
		for (i = 0; i < my_strlen(src); i++) {
			if (dest[i + 1] == src[i + 1])
				continue;
			if (dest[i + 1] != src[i + 1])
				break;
		}
	}
}