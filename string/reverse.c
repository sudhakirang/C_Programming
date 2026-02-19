#include<stdio.h>
int main()
{
  char a[20],temp;
  int i,len=0;
  printf("enter the string\n");
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
    {
      len++;
    }
  printf("the length of the string is %d\n",len);
  for(i=0;i<len/2;i++)
    {
      temp = a[i];
      a[i] = a[len -i-1];
      a[len - i -1] = temp;
    }
  printf("the string after reverse is %s\n",a);
  return 0;
}


/**another way**/
#include <stdio.h>

void str_rev(char *src, char *dst)
{
    int i, len = 0;

    // Find length
    for (i = 0; src[i] != '\0'; i++) {
        len++;
    }

    // Reverse copy
    for (i = 0; i < len; i++) {
        dst[i] = src[len - i - 1];
    }

    dst[len] = '\0';   // IMPORTANT

    printf("Destination string is: %s\n", dst);
}

int main()
{
    char str[20];
    char dst[20];

    printf("Enter the string:\n");
    scanf("%[^\n]", str);

    printf("Entered string: %s\n", str);
    printf("Destination before reverse: %s\n", dst);

    str_rev(str, dst);

    return 0;
}
