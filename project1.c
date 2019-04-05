#include <stdio.h>

int main()
{
   int i, x, k; //i=array pointer, x= switch case, k= encryption key 
   char str[100];
   
  
   printf("\nPlease enter a message:\t"); //insert your message
   scanf("%[^\n]%",& str);
   printf("please enter a key:\t");//enter encryption key
   scanf("%d" , &k);

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   //using switch case statements
   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + k; //the key for encryption is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - k; //the key for encryption is subtracted from the ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
   }
   return 0;
}