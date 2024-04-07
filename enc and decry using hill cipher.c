// Program for Encryption and Decryption using Hill Cipher technique //

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    // Declaration of variables and arrays
    char ptext[20] = "\0", newptext[20] = "\0", etext[20] = "\0", newetext[20] = "\0",
    dtext[20] = "\0", newdtext[20] = "\0", abcd[26] = "abcdefghijklmnopqrstuvwxyz";

    int b[20], c[20], newmod[20], mod[20], mat[3][3], a[9];
    int A, i, j ,len ,len1 ,oldlen , sum = 0 , k = 0, x, y, div, DIV, m , n = 0;
    clrscr(); // Clearing the console screen

    // Enter Plain Text //
    printf("Enter the plain text:");
    gets(ptext);

    // Remove Blank Space //
    oldlen = strlen(ptext);
    for(k = 0; k < oldlen; k++)
    {
        if(ptext[k] != 32)
        {
            len1 = strlen(newptext);
            newptext[len1] = ptext[k];
        }
    }

    // Add Two Fake or Dummy Character for Grouping of 3 Character //
    oldlen = strlen(newptext);
    newptext[oldlen] = 'x';
    newptext[oldlen + 1] = 'x';
    len = strlen(newptext);

    // Enter Values of Matrix //
    printf("\n Enter values of 3 X 3 array:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    // Encryption Start here //
    for(m = 1; m <= len; m++)
    {
        if(m % 3 == 0)
        {
            for(i = n; i < n+3; i++)
            {
                for(j = 0; j < 26; j++) // It will get index of plaintext
                {
                    if(newptext[i] == abcd[j]);
                    {
                        b[i % 3] = j;
                        break;
                    }
                }
            }
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    sum = sum + (b[j] * mat[i][j]);
                }
                mod[i] = sum % 26;
                sum = 0;
            }
            // Creating Text From Modulied Matrix //
            for(i = n; i < n +3; i++)
            {
                for(j = 0; j < 26; j++)
                {
                    if(mod[i % 3] == j)
                    {
                        etext[i] = abcd[j];
                        break;
                    }
                }
            }
            n = n + 3;
        }
    }
    // Remove Extra Character From End of etext //
    for(i = 0; i < oldlen; i++){
        newetext[i] = etext[i];
    }
    // Print Encrypted Text //
    printf("\n Encrypted Text is :");
    puts(newetext);

    // Inverse of matrix for decryption //
    A = (mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2])) - (mat[0][1] * (mat[1][0]
    * mat[2][2] - mat[2][0] * mat[1][2])) + (mat[0][2] * (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]));

    div = A/26;
    if(div < 0)
    {
        DIV = div - 1;
    }
    else{
        DIV = div;
    }
    A = A-26 * DIV;
    printf("\n Value of a is %d\n\n",A);
    for(x = 1; x < 1000; x++)
    {
        if(y * 26 == A*x-1)
        {
            goto xy;
        }
    }
    xy:    
    printf("\n x = %d y = %d \n\n",x,y);
    a[0] = (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2]);
    a[3] = -(mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2]);
    a[6] = (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]);
}
