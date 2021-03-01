#include <stdio.h>

int c;
int prevC = 0;
int lineCommenting = 0;
int blockCommenting = 0;

int main() {

  while ((c = getchar()) != EOF) {   //iterate through chars one by one

    if (c == '\n' && lineCommenting == 1)  {
      lineCommenting = 0;              // untrigger line commenting
      prevC = 0;
    } 
    else if (c == '/') {

      if (prevC == '/') {

        if(lineCommenting == 0) {          // toggle line commenting

          lineCommenting = 1;  
                      
        } else if (lineCommenting == 1) {

          lineCommenting = 0;
        }
        prevC = 0;            
      }
      else if (prevC == '*') {

        if(blockCommenting == 1) {

          blockCommenting = 0;              // untrigger block commenting
          prevC = 0;
        }
      } else {
        prevC = '/';                        //store '/' for later
      }
    }
    else if (c == '*') {

      if (prevC == '/') {

        blockCommenting = 1;                 //trigger blockCommenting
        prevC = 0;
      } else {
        prevC = '*';
      }
    }
    else if (lineCommenting == 0 && blockCommenting == 0) {

      if (prevC != 0) { 
      
        putchar(prevC);                  //print prev char since it's not for commenting                    
      }
      putchar(c);                             //print out the current character       
      prevC = 0;                       //reset previous char since it's been printed
    }
  }   
} 