#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[10]="ab23C%$d&\n";
    int i,alphabet=0,digit=0,special=0;
    printf("string:%s",arr);
    for (i=0;i<9;i++){
        if ((arr[i]>64 && arr[i]<91) || (arr[i]>96 && arr[i]<123))
            alphabet++;
        else if (arr[i]>47 && arr[i]<58)
            digit++;
        else if ((arr[i]>31 && arr[i]<48) || (arr[i]>57 && arr[i]<65)|| (arr[i]>90 && arr[i]<97) || (arr[i]>122 && arr[i]<128))
            special++;
    }
    printf ("the number of alphabet letters:%d ,digits:%d and special characters:%d",alphabet,digit,special);
}
