#include <stdio.h>
#include <string.h>


int main()
{
	char str1[] = "To be or not to be--";
	char str2[40];
	char str3[40];
	//char str4[5];
	//copy to sized buffer (overflow safe)
	strncpy( str2,str1,sizeof(str2));

	//partial  copy (only 5 chars)
	strncpy(str3,str1,5);
	str3[5] = '\0';

	//test for safty
	//strncpy(str4,str1,sizeof(str1));

	puts(str1);
	puts(str2);
	puts(str3);
	//puts(str4);
}



/**
OUTPUT
--------------------
To be or not to be--
To be or not to be--
To be
*/
