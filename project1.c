#include<stdio.h>
 
 
int main()
{
	char message[100], ch;
	int i, key=19;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	
	for(i = 0; message[i] != '\0' ; ++i){
		ch = message[i];
		
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
				
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s\n", message);
	
	return 0;
}