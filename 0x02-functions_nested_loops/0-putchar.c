#include <stdio.h>
#include "main.h"


int main(void) {
	char aputchar[] = { '_','p','u','t','c','h','a','r'} ;
	int length = sizeof(aputchar)/sizeof(aputchar[0]);    
	int i;
	        for(i=0; i < length; i++) {
			_putchar(aputchar[i]);
		}
_putchar('\n');


return (0);
}
