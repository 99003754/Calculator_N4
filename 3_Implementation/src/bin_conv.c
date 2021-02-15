#include "bin_conv.h"

// binary conversion
long dectobin()
{
    int choice;
    int num;
    long int decimalNumber;
    printf("Press 1 for Binary to decimal and Hex AND 2 Decimal to Binary and Hex");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter Binary numbers\n");
        scanf("%ld", &num);
        binarytodec(num);
        binarytohex(num);
        break;
    
    case 2:

        printf("\nEnter Decimal Number\n");
        scanf("%ld",&decimalNumber);
        dectohexa(decimalNumber);
        decimaltobin(decimalNumber);
        break;
    }
    
}
long dectohexa(long quotient)
{
    int i=1,j,temp;
    int rem_hex;
    char hexnum[100];
    while(quotient!=0)
    {
        temp=quotient%16;
        if(temp<10)
        {
            temp=temp+48;
        }
        
        else
        {
            temp=temp+55;
        }
        hexnum[i++]=temp;
        quotient=quotient/16;
    }
    printf("\n Hexadecimal number is ");
    	for (j = i -1 ;j> 0;j--)
	    {  
            printf("%c",hexnum[j]);
        
        }
        printf("\n");
        
        return hexnum;
    
}

long decimaltobin(long binary)
{
    long binarynum = 0;
    int rem_bin, temp_bin = 1;

    while (binary!=0)
    {

        rem_bin = binary%2;
        binary = binary / 2;
        binarynum = binarynum + rem_bin*temp_bin;
        temp_bin = temp_bin * 10;
    }
    printf("\nBinary number is %ld",binarynum);
    return binarynum;
    
}

long binarytodec(long bintodec_val)
{
    int base=1,bin_rem,bin_decimal=0;
    while(bintodec_val>0)
    {
        bin_rem = bintodec_val % 10;

        bin_decimal=bin_decimal + bin_rem*base;
        bintodec_val=bintodec_val/10;
        base=base*2;

    }
    printf("Its decimal value is = %d \n", bin_decimal);
    return bin_decimal;
}
long binarytohex(long bintohex_val)
{
    long int remainder,hexadecimalval=0,i=1;
        while (bintohex_val != 0)
    {
        remainder = bintohex_val % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        bintohex_val = bintohex_val/ 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return hexadecimalval;

}
