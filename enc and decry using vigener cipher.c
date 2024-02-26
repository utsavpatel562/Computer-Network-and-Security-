// Progam for Encryption and Decryption using Vigener Cipher technique //

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char str[100];
	char cstr[100];
	char code[5] = "SSPC",c;
	char cap_code[5] = "SSPC";
	int indexcode = 0, ascii;
	int i,j,number,a,b, len = 0;
	clrscr();
	printf("\n\n\t\tEnter Plain Text = ");
	gets(str);
	i = strlen(str);
	len = strlen(code) - 1;
	for(j = 0; j < i; j++)
	{
		if(str[j] != '')
		{
			ascii = (int)str[j];
			if(ascii >= 65 && ascii <=90)
			{
				int index = indexcode % len;
				cstr[j] = code[index];
			}
			indexcode++;
		}
		else
			cstr[j] = '';
	}
	cstr[j] = '\0';
	printf("\n\n\t\tKey Code = ");
	puts(cstr)
	for(j = 0; j < i; j++)
	{
		ascii = (int)str[j];
		if(str[j] != '')
		{
			if(ascii >= 65 && ascii <= 90)
			{
				a = (int)str[j] % 65;
				b = (int)cstr[j] % 65;
				number = (a + b) % 26;
				number = number + 97;								
			}
			else if(ascii >= 97 && ascii <= 122)
			{
				a = (int)str[j] % 97;
				b = (int)cstr[j] % 97;
				number = (a + b) % 26;
				number = number + 97;							
			}
			str[j] = (char) number;
		}
		else str[j] = '';
	}
	str[j] = '\0';
	printf("\n\n\t\tEncrypted Text = ");
	puts(str);
	for(j = 0; j++)
	{
		ascii = (int)str[j];
		if(str[j] != '')
		{
			if(ascii >= 65 && ascii <= 90)
			{
				a = (int)str[j] % 65;
				b = (int)cstr[j] % 65;
				number = (a + b) % 26;
				number = number + 97;								
			}
			else if(ascii >= 97 && ascii <= 122)
			{
				a = (int)str[j] % 97;
				b = (int)cstr[j] % 97;
				number = (a + b) % 26;
				number = number + 97;							
			}
			str[j] = (char) number;
		}
		else str[j] = '';
	}
	str[j] = '\0';
	printf("\n\n\t\tPlain Text = ");
	puts(str);
	getch();	 
}