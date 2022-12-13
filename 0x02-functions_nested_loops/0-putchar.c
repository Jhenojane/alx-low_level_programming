#include <stdio.h>
#include "main.h"


int main(void) {
	char _putchar[] = { '_','p','u','t','c','h','a','r'} ;
	int length = sizeof(_putchar)/sizeof(_putchar[0]);    
	int i;
	        for(i=0; i < length; i++) {
			Myfunction(_putchar[i]);
		}
Myfunction('\n');


return (0);
}
