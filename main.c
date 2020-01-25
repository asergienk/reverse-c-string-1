
#include <stdio.h>

char* reverse(char word[]);

int main()
{
    char word[] = "Happy Birthday!";
    printf("%s\n", word);
    reverse(word);
    printf("%s\n", word);
    printf("%s\n", reverse(word));

    return 0;
}

char* reverse(char word[])
{
    int size=0;
    int i;
    char temp;
    
    while(word[size] != '\0')
    {
    size++;
    }

    for(i=0; i< size/2; i++)
    {
    temp = word[i];
    word[i] = word[size-i-1];
    word[size-i-1] = temp;
    }

    return word;
}
