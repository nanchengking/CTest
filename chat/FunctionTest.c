/*
 * FunctionTest.c
 *
 *  Created on: 2015年11月10日
 *      Author: nancheng
 */
#include <stdio.h>
#define NAME "CIGATHINK,INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
void startbar(void);
void main(void) {
	startbar();
	printf("%s \n", NAME);
	printf("%s \n", ADDRESS);
	printf("%s \n", PLACE);
	startbar();
}
void startbar(void) {
	int count;
	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
	}
	putchar('\n');
}

