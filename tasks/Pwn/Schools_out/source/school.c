#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 8


int print_flag(){
   printf("flag{sCh00ls_0ut_F0R_3v3r}");
   return 0;
}

int print_school(){
  printf("            \\_/                                                       \n");
  printf("           --(_)--  .                                                  \n");
  printf("             /\\   /_\\                                                 \n");
  printf("                   |Q|                                                 \n");
  printf("             .-----' '-----.                                  __       \n");
  printf("            /____[SCHOOL]___\\                                ()))      \n");
  printf("             | [] .-.-. [] |                                (((())     \n");
  printf(".............|____|_|_|____|..................................)(... ldb\n");
   
   
   return 0;
}

int main() {
   char buffer[MAX_INPUT_LENGTH];
   int choice;

   print_school();
   printf("In what year was the radio invented?\n1.1878\t2.1891\n3.1890\t4.1895");
   printf("\nYour answer: ");
   scanf("%d", &choice);

   switch(choice) {
      case 1: {
         printf("Who was the inventor?\nYour answer: ");
         gets(buffer);
         printf("\nYou entered: %s\n", buffer);
         break;
      }
      default:
         printf("Invalid choice!\n");
         break;
   }

   return 0;
}
