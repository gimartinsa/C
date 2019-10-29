#include <stdio.h>
void stringSwitch(char str[]){
     for (int i=0; str[i]!=0; i++){
         if (str[i] >= 'a' && str[i] <= 'z'){
             str[i] -=32;
         }
         else if (str[i] >= 'A' && str[i] <= 'Z'){
             str[i] +=32;
         }
         printf("%c", str[i]);
     }
}
int main () {
    char s[] = "All your BASES are belong to US!";
    stringSwitch(s);
    return 0;
}
