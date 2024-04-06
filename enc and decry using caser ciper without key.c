// Progam for encryption and decryption using Caesar cipher technique without key //
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char plain[50]; // Plain text
	char cipher[50]; // Cipher text
	char c;
	int key = 3,i,j; // Caesar cipher key is set to 3
	clrscr(); // Clear screen (platform-specific, not portable)
	
	// Input plain text
	printf("Enter Plain Text =");
	gets(plain); // Gets input from the user

	// Encryption Logic
	for(i=0; i<strlen(plain); i++); // Loop through each character in the plain text
	{
		if(plain[i]>='A' && plain[i]<='Z') // Check if the character is an uppercase letter
		{
			cipher[i]=((plain[i]-65+key) % 26)+65; // Apply Caesar cipher encryption for uppercase letters
			printf("%c",cipher[i]); // Print the encrypted character
		}
		else if(plain[i]>='a' && plain[i]<='z') // Check if the character is a lowercase letter
		{
			cipher[i]=((plain[i]-97+key) % 26)+97; // Apply Caesar cipher encryption for lowercase letters
			printf("%c",cipher[i]); // Print the encrypted character
		}
		else // If the character is not a letter
		{
			cipher[i] = plain[i]; // Copy the character as is
			printf("%c",plain[i]); // Print the character
		}
	}
	printf("\n\n");

	// Decryption Logic
	printf("Decryption is =");
	for(i=0;i<strlen(plain);i++) // Loop through each character in the plain text
	{
		if(cipher[i]>='A' && cipher[i]<='Z') // Check if the character is an uppercase letter
		{
			plain[i]=((cipher[i]-65-key) % 26)+65; // Apply Caesar cipher decryption for uppercase letters
			printf("%c",plain[i]); // Print the decrypted character
		}
		else if(plain[i]>='a' && plain[i]<='z') // Check if the character is a lowercase letter
		{
			plain[i]=((cipher[i]-97-key) % 26)+97; // Apply Caesar cipher decryption for lowercase letters
			printf("%c",plain[i]); // Print the decrypted character
		}
		else
		{
			cipher[i] = plain[i]; // Copy the character as is
			printf("%c",cipher[i]); // Print the character
		}
	}
getch(); // Wait for a key press before exiting	
}
