/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverseString(char* str, int s ,int e)
{
	char temp;
	while (s<e)
	{
		temp = str[s];
		str[s] = str[e];
		str[e] = temp;
		s++;
		e--;
	}
}
void str_words_in_rev(char *input, int len){
	int i, j = -1;
	reverseString(input, 0, len - 1);
	for (i = 0; i <= len; i++){
		if (input[i] != ' '&&j == -1)
			j = i;
		if (input[i] == ' ' || input[i] == '\0'){
			if (j != -1){
				reverseString(input, j, i - 1);
				j = -1;
			}
		}
	}
}
