#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char *argv[]) {

  int dec = 0;

  int x = strlen(argv[2]);

  char s[x];

  for(int i = 0; i < x; i++) {

    s[i] = tolower(argv[2][i]);

  } 

  int p = 0;

  for (int i = x-1; i > 1; i--, p++) {

    if(s[0] ==  '0' && s[1] == 'x') {

      if(s[i] >= '0' && s[i] <= '9') {

        dec += (s[i]-'0') * pow(16, p);

      } else if (s[i] == 'a') {

        dec += 10 * pow(16, p);

      } else if (s[i] == 'b') {

        dec += 11 * pow(16, p);

      } else if (s[i] == 'c') {

        dec += 12 * pow(16, p);

      } else if (s[i] == 'd') {

        dec += 13 * pow(16, p);

      } else if (s[i] == 'e') {

        dec += 14 * pow(16, p);

      } else if (s[i] == 'f') {
        
        dec += 15 * pow(16, p);
      }
    }
  }
  printf("%d\n", dec);
}