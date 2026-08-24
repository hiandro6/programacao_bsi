#include <stdio.h>
int main() {
	int a = 5, b = 3;        //5 = 0101, 3 = 0011
	int r = a & b;            // r = 0001 (1) and
	printf("%d\n", r);          //Saída: 1

	int r2 = a | b;       // r = 0111 (7) or
	printf("%d\n", r2);          //Saída: 7 

	int r3 = a ^ b;       // r = 0110 (6) xor
	printf("%d\n", r3);          //Saída: 6

	int r4 = ~a;       // inverte os bits de 5 (not)
	printf("%d\n", r4);          //Saída: -6


	//deslocamento
	int c = 8;     // 00001000
	int esq = c >> 1;	//esq = 00000100 (4)
	int dir = c << 1;	//dir = 00010000 (16)
	printf("%d %d\n", esq, dir);	// saída: 4 16

	return 0;
}
