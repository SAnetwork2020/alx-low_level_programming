#include "main.h"
#include <ctype.h>
int _isupper(int ){
	int var1 = 'M';
	int var2 = 'm';
	int var3 = '3';
	if ( _isupper(var1) ){
		_putchar (  "var1 = |%c| is uppercase  acter\n", var1 );
	} else {
		_putchar (  "var1 - |%c| is not uppercase  acter\n", var1 );
	}

	if ( _isupper(var2) ) {
		_putchar (  "var2 = |%c| is uppercase  acter\n", var2);
	} else {
		_putchar (  "var2 = |%c| is not uppercase  acter\n", var2);
	}

	if ( _isupper(var3) ) {
		_putchar (  "var3 = |%c| is uppercase  acter\n", var3);
	} else {
		_putchar (  "var3 = |%c| is not uppercase  acter\n", var3);
	}
	return (0);
}





