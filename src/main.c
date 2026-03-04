
#include <stdio.h>
#include <string.h>

char* get4thWord(char* line) {
	const char* delim = " ";
	char * token = strtok(line, delim);

	int tokenCount = 0;
	while (token != NULL) {
		tokenCount++;
		if (tokenCount == 4)
			break;
		token = strtok(NULL, delim);
	}
	return token;
}
void main (int argc, char* args[])
{
	if (argc != 2) {
		printf("Incorrect number of arguments: %d", argc);
		return;
	}
	char* line = args[1];
	char* word = get4thWord(line);
	if (word != NULL)
		printf("4th word: %s\n", word);
	else
		printf("Less than 4 words\n");

}
