
#include <stdio.h>
#include <string.h>




// function take string add all ascii value
int stringToInt(char *szStringToConvert)
{
  
int i, iHashValue =0;
      for (i = 0; i < strlen(szStringToConvert); i++)
    {
        iHashValue += szStringToConvert[i];
    }
    return iHashValue;
  
}




int main (){

        /*
            Dec  Char                           Dec  Char     Dec  Char     Dec  Char
        ---------                           ---------     ---------     ----------
        0  NUL (null)                      32  SPACE     64  @         96  `
        1  SOH (start of heading)          33  !         65  A         97  a
        2  STX (start of text)             34  "         66  B         98  b
        3  ETX (end of text)               35  #         67  C         99  c
        */
    char a[10] = "ab";
    char b[5] = "AB";
    char c[30] = "Philadelphia 76ers";
    
    int s = stringToInt(a);
    int e = stringToInt(b);
    int v = stringToInt(c);
    

    printf("s: %d\n", s);
    printf("e: %d\n", e);
    printf("v: %d\n", v);

  



return 0;

}
