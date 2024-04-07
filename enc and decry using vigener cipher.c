// Progam for Encryption and Decryption using Vigener Cipher technique //

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char str[100];
	char cstr[100];
	char code[5] = "SSPC",c;
	char cap_code[5] = "SSPC"; // Assuming this is meant to store the uppercase version of the code 
	int indexcode = 0, ascii;
	int i,j,number,a,b, len = 0;
	clrscr(); // Clearing the console screen
	
	// Input of plain text
	printf("\n\n\t\tEnter Plain Text = ");
	gets(str);
	i = strlen(str);
	len = strlen(code) - 1;
	
	// Encryption
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
	cstr[j] = '\0'; // Adding null terminator to the end of the string
	printf("\n\n\t\tKey Code = ");   // Outputting the key code
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
	str[j] = '\0'; // Adding null terminator to the end of the string
	printf("\n\n\t\tEncrypted Text = "); // Outputting the encrypted text
	puts(str);

	// Decryption (same as Encryption in this case, assuming it's intended to demonstrate decryption)
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
	str[j] = '\0'; // Adding null terminator to the end of the string
	printf("\n\n\t\tPlain Text = "); // Outputting the decrypted text
	puts(str);
	getch(); // Wait for a key press
}
