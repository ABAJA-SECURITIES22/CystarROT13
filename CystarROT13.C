#include<stdio.h>

int main()
{
    char message[100]. ch;
    int i, key;
    printf("Enter a message to encrypt: ");
    gets(message);
    printf("Enter key: ");
    scanf("%d" , &key);
    for(i = 0; message[i] I= '\0'; ++i){
    ch = message[i];
    if(ch >= 'a' && ch <= '2'){
    ch = ch + key;
    if(ch > 'z'){
    ch = ch - 'z' + 'a' - 1;
    }
    message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'z'){
    ch = ch + key;
    if(ch > 'z'){
    ch = ch - 'z' + 'A' - 1;
    }
    message[i] = ch;
    }
    }
    printf("Encrypted text: %s" , message);
    return 0;
}         