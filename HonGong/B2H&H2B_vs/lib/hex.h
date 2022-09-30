#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifdef MYHEXDLL_EXPORT
#define MYHEXDLL_API __declspec(dllexport)
#else
#define MYHEXDLL_API __declspec(dllimport)
#endif

MYHEXDLL_API int fileB2H(FILE *in_binfile, FILE *out_hexfile);
MYHEXDLL_API int fileH2B(FILE *in_hexfile, FILE *out_H2B_binfile);

MYHEXDLL_API int bin2hex(const unsigned char *in_bin, int bin_len, char *out_hex);
MYHEXDLL_API size_t hexs2bin(const char *in_hexs, unsigned char *out_H2B_bindata);
MYHEXDLL_API int hexchr2ascii(const char in_hex_elements, char *out_ascii);