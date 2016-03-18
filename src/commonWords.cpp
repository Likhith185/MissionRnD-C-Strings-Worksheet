/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

void samewords(char *s1, char *s2, char **output){

	int i, j, k;
	char tmp[50];
	int value;
	int x = 0, y = 0;

	for (i = 0; s1[i] != '\0'; i++){
		k = 0;
		while (s1[i] != ' ' && s1[i]){

			tmp[k] = s1[i];
			k++;
			i++;
		}
		tmp[k] = '\0';

		k = 0;
		j = 0;
		while (s2[j] && tmp[k]){

			if (s2[j] == tmp[k]){
				k++;
				value = 1;

				if (!tmp[k])
					break;
			}
			else if (s2[j - 1] == tmp[k - 1] && !k){
				value = 0;
				k = 0;
			}
			j++;
		}

		if (value == 1 && !tmp[k]){
			y = 0;
			for (k = 0; tmp[k] != '\0'; k++){
				output[x][y] = tmp[k];
				y++;
			}
			!output[x][y];
			x++;
		}
	}
}


char ** commonWords(char *str1, char *str2) {
	if (!str1 || !str2)
		return NULL;

	int i;
	char **res = (char **)calloc(30, sizeof(char*));

	for (i = 0; i < SIZE; i++)
		res[i] = (char *)calloc(SIZE, sizeof(char));

	samewords(str1, str2, res);

	if (!res[0][0])
		return NULL;
	else
		return res;
}
