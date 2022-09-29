#include "hex.h"

int main(int argc, char* argv[]) {

	char *in_file = NULL;
	char *write_file = NULL;
	int res;
	in_file = argv[1];
	write_file = argv[3];

	printf("\n insert file \n");
	printf("1.infile, 2.B2H or H2B, 3.outfile\n");

	FILE *in_fp = fopen(in_file, "rb");

	if (in_fp == NULL) {
		printf("in_file open failed \n");
		return -1;
	}

	if (strcmp(argv[2], "B2H") == 0) {
		FILE *out_fp = fopen(write_file, "wb");
		if (out_fp == NULL) {
			printf("out_file write failed \n");
			return -1;
		}
		res = fileB2H(in_fp, out_fp);
		if (res != 1) {
			printf("B2H enc err \n");
			return -1;
		}
		fclose(out_fp);
	}
	else if (strcmp(argv[2], "H2B") == 0) {
		FILE *out_fp = fopen(write_file, "wb");
		if (out_fp == NULL) {
			printf("out_file write failed \n");
			return -1;
		}
		res = fileH2B(in_fp, out_fp);
		if (res != 1) {
			printf("B2H enc err \n");
			return -1;
		}
		fclose(out_fp);
	}
	else {
		printf("again insert data\n");
		return -1;
	}
	fclose(in_fp);
	return 1;
}