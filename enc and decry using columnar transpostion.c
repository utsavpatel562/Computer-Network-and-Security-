// Encryption and Decryption using columnar transposition //

#include<stdio.h>
#include<conio.h>
void main()
{
    // Declaration of variables and arrays
    char pt[60]; // Plain text
    char newpt[60] = {"\0"}; // Modified plain text (without spaces)
    char et[60] = {"\0"}; // Encrypted text
    char newet[60] = {"\0"}; // Modified encrypted text (without spaces)
    char dt[60] = {"\0"}; // Decrypted text
    char mat[12][5]; // Matrix for columnar transposition
    int row, column = 5, len, i, j, newlen, k = 0, m;

    // Clearing the console screen
    clrscr();
    // Input of plain text
    printf("\n\nEnter Plain Text:");
    gets(pt);
    // Remove spaces from plain text
    len = strlen(pt);
    for(i=0; i<len; i++)
    {
        if(pt[i] != 32)
        30
        {
            newlen = strlen(newpt);
            newpt[newlen] = pt[i];
        }
    }
    // Calculate the number of rows in the matrix
    // Getting Size of Row //
    newlen - strlen(newpt);
    row = newlen/column;
    if(newlen % column > 0)
    row = row + 1;

    // Create matrix from plaintext //
    printf("\nColumner Matrix is:");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(k < newlen)
            {
                mat[i][j] = newpt[k];
                printf("%2c",newpt[k]);
                k++;
            }else{
                mat[i][j] = 32;
        }
    }
    printf("\n");
}
// Encryption Code //
k = 0;
for(m = 0; m < column; m += 2)
{
    for(i = 0; i < row; i++)
    {
        et[k] = mat[i][m];
        k++;
    }
}
for(m = 1; m < column; m += 2)
{
    for(i = 0; i < row; i++)  
    {
        et[k] = mat[i][m];
        k++;        
    }  
    31
}
 // Remove blank spaces from encrypted text
// Blank space Remove Code //
newlen = strlen(et);
for(i = 0; i < newlen; i++)
{
    if(et[i] != 32)
    {
        len = strlen(newet);
        newet[len] = et[i];
    }
}
printf("\n\nEncrypted Text Is: %s", newet);

// Decryption Code //
k = 0;
for(i = 0; i < row; i++)
{
    m = i;
    for(j = 0; j < column; j++)
    {
        if(j%2 == 0)
        {
            dt[k] = et[m];
            m = m + (row * 3);
            k++;

        }
        else{
            dt[k] = et[m];
            m = m - (row * 2);
            k++;
        }
    }
}
printf("\n\n Decrypted Text Is: %s", dt);
getch();
}
