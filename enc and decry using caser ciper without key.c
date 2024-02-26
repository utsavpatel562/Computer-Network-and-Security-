// Progam for encryption and decryption using Caesar cipher technique without key //
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char plain[50];
	char cipher[50];
	char c;
	int key = 3,i,j;
	clrscr();
	printf("Enter Plain Text =");
	gets(plain);

	// Encryption Logic
	for(i=0; i<strlen(plain); i++);
	{
		if(plain[i]>='A' && plain[i]<='Z')
		{
			cipher[i]=((plain[i]-65+key) % 26)+65;
			printf("%c",cipher[i]);
		}
		else if(plain[i]>='a' && plain[i]<='z')
		{
			cipher[i]=((plain[i]-97+key) % 26)+97;
			printf("%c",cipher[i]);
		}
		else
		{
			cipher[i] = plain[i];
			printf("%c",plain[i]);
		}
	}
	printf("\n\n");

	// Decryption Logic
	printf("Decryption is =");
	for(i=0;i<strlen(plain);i++)
	{
		if(cipher[i]>='A' && cipher[i]<='Z')
		{
			plain[i]=((cipher[i]-65-key) % 26)+65;
			printf("%c",plain[i]);
		}
		else if(plain[i]>='a' && plain[i]<='z')
		{
			plain[i]=((cipher[i]-97-key) % 26)+97;
			printf("%c",plain[i]); 
		}
		else
		{
			cipher[i] = plain[i];
			printf("%c",cipher[i]);
		}
	}
getch();	
}