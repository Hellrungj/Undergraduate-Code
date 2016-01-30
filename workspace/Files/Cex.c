/* John Hellrung Jon Jefery
* Basecase 
* http://cwe.mitre.org/data/definitions/134.html#R.134.1
* Example: 1
*
*/

#include <stdio.h>

void printWrapper(char *string) {

printf(string);
}

int main(int argc, char **argv) {

char buf[5012];
memcpy(buf, argv[1], 5012);
printWrapper(argv[1]);
return (0);
}