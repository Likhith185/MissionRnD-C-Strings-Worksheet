/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i, j,start, end;
	len = strlen(input);
	end = len - 1;
	for (i = len - 1; i >= 0; i--)
	{
		if (input[i] == 32 || i == 0)
		{
			if (i == 0)
				start = 0;
			else
				start = i + 1;
			for (j = start; j <= end; j++)
			end = i - 1;
		}
	}
}
