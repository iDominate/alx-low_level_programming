#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *result;

	int flag = 0;
	i = j = 0;
	result = NULL;
	for (i = 0; i < sizeof(haystack); i++)
	{
		if (haystack[i] == needle[0])
		{
			result = &haystack[i];
		for (j = 0; j < sizeof(needle); j++)
		{
			if(haystack[i] == needle[j])
			{
				flag = 1;
				continue;
			} else{
				flag = 0;
				break;
			}
				
		}
		if(flag)
		{
			return result;
		}
		}

	}
	return result;
}
