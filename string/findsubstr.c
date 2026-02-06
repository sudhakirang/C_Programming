/**str[ ]=”aabbceaccabcdaebbcc” in this string find the Sub string abcd?****/
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "aabbcabcdaebbcc”;
    char sub_str[] = "abcd";
    int i,j,m,n;
    n = strlen(str);
    m = strlen(sub_str);
    for(i=0;i<n-m;i++){                //because pattern can’t start beyond this
        for(j=0;j<m;j++){
            if(str[i+j]!=sub_str[j]){
                break;
            }
        }
        if(j==m){
                 printf("the sub string found at index %d\n",i);     //If all m characters match → substring found at index i
                 return 0;
            }
    }
    printf("subtring not found\n");
    return 0;
}
