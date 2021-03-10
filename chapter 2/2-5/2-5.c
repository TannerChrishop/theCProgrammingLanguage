#include <stdio.h>

int any (char s[], char s2[]) {

  int pos = -1;

  for (int i = 0; s[i] != '\0'; i++) {

    for (int j = 0; j[s2] != '\0'; j++) {

      if(s[i] == s2[j]) {

        pos = i;
        return pos;
      }
    }
    if(pos != -1) {

      return pos;
    }
  }
  return pos;
}

int main(int argc, char *argv[]) {

 printf("%i\n", any(argv[2], argv[3]));
}