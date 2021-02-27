#include <stdio.h>

int c;
int pos = 0;
int line [1000];
int space = 0;
int i = 10;
int h;

int main(){

  while((c = getchar()) != EOF) {               

    if((c != ' ') || ((pos % 10) != 0 )) {                    //don't start a line with a blank space
      line[pos] = c;
      pos++;
    }

    if(pos >= i){

      for (h = i; h > (i-10); h--) {                          //check 10th character for space and work left til you find one

        if(line[i] == ' ' || line[i] == '\t') {

          for(int j = 0; j < h; j++) {

            putchar(line[j]);                                 //if you find one print all characters up to it and raise a flag
            space = 1;
          }

          putchar('\n');                                      // print a new ine then reset the position variable and exit the loop
          pos = 0;
          break;
        } 
      }
      if (space == 0) {                                         // if no flag was raised, that means you have a word longer than
                                                                // 10 characters and you're going to have to split it mid word
        for(; h < i; h++) {

          putchar(line[h]);
        }

        putchar('\n');
      }

      space = 0;                                                 //reset the flag for next run through the code

      i+=10;                                                     // start reading input at the next 10 characters
    }
  }
  for(; h < i; h++) {         
                                       //print the remaining < 10 characters
    putchar(line[h]);
  }
}