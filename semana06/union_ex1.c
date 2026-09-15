#include <stdio.h>
union LeituraSensor {
	unsigned char bytes[2];
	short int valor_completo;

};

int main(){
	union LeituraSensor lista;
	lista.bytes[0] = 0x01;
	lista.bytes[1] = 0x2C;

	printf("byte alto = %d   byte baixo = %d", lista.bytes[0], lista.bytes[1]);
	return 0;

}
