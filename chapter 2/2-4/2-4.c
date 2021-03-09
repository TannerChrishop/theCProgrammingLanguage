#include <stdio.h>

char* squeeze (char s[], char s2[]) {

  int i, j, k;

  i = j = k = 0;

  int flag = 0;

  for(; s[i] != '\0'; i++ ) {

    for(j = 0; s2[j] != '\0'; j++) {

      if (s[i] == s2[j]){

        flag = 1;
        break;
      } 
    }
    if (flag == 0) {

      s[k++] = s[i];
   } 
   flag = 0;
  }
  s[k] = '\0';
  return s;
}

int main (int argc, char *argv[]) {

  char* s3;

  s3 = squeeze(argv[2], argv[3]);

  printf("%s\n", s3);
}