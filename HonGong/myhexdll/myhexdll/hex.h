#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifdef myhexdll_EXPORT
#define DLLTEST_API__declspec(dllexport)
#else
#define DLLTEST_API__declspec(dllimport)
#endif

int fileB2H(FILE *in_binfile, FILE *out_hexfile);
int fileH2B(FILE *in_hexfile, FILE *out_H2B_binfile);

int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);
size_t hexs2bin(const char *in_hexs, unsigned char *out_H2B_bindata);
int hexchr2ascii(const char in_hex_elements, char *out_ascii);