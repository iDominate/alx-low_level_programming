#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _strlen(char *s);
char *_strdup(char *s);
int main(void)
{
	char *s1 = _strdup("Hello World");
	if(s1 == NULL)
	{
		puts("Error");
	}
	printf("%s\n", s1);

}

char *_strdup(char *s)
{
        int str_len, i; 
        char *str_p;
        

	str_len = 1;

        for(i = 0; s[i]; i++)
	{
		str_len++;
	}
	printf("%d\n", str_len);
        str_p = (char *) malloc(sizeof(char) * str_len);
        if (!str_p)
        {
              return (NULL);
        }
	 
        for (i = 0; i < str_len; i++)
	{
		*(str_p + i) = s[i];
	}
        return (str_p);
}


