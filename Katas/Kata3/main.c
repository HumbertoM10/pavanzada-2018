#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

  char str[] = 	//"UDUDUD";
  				//"UDUDLR";
  				"UDLRLRDDUUL";
  int 	i, 
  		numberOfUs=0, 
  		numberOfDs=0, 
 		numberOfLs=0, 
  		numberOfRs=0;
  int strLength = strlen(str);

  for (i = 0; i < strLength; i++) {

  printf("[%c]", str[i]);

  switch(str[i]) {
  	case 'U' :
      	numberOfUs++;
        break;
    case 'D' :
      	numberOfDs++;
        break;
    case 'L' :
        numberOfLs++;
        break;
    case 'R' :
      	numberOfRs++;
        break;
    default :
    	break;
  	}

  }

  if(numberOfUs==numberOfDs && numberOfLs==numberOfRs) printf("true");
  else printf("false");

  return 0;
}