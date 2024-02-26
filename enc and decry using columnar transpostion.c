// Encryption and Decryption using columnar transposition //

#include<stdio.h>
#include<conio.h>
void main()
{
    char pt[60];
    char newpt[60] = {"\0"};
    char et[60] = {"\0"};
    char newet[60] = {"\0"};
    char dt[60] = {"\0"};
    char mat[12][5];
    int row, column = 5, len, i, j, newlen, k = 0, m;
    clrscr();
    printf("\n\nEnter Plain Text:");
    gets(pt);

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