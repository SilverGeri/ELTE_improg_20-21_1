#include <stdio.h>
#include <string.h>

char change(char ch) {
	if (ch == 'a') return 'e';
	if (ch == 'e') return 'i';
	if (ch == 'i') return 'o';
	if (ch == 'o') return 'u';
	if (ch == 'u') return 'a';

	return ch;
}

char change2(char ch) {
	switch(ch) {
		case 'a': return 'e';
			  break;
		case 'e': return 'i';
			  break;
		case 'i': return 'o';
			  break;
		case 'o': return 'u';
			  break;
		case 'u': return 'a';
			  break;
		default: return ch;

	}
}


char change3(char ch) {
	char from[] = "aeiou";
	char to[] = "eioua";

	unsigned index = 0;
	while (index < strlen(from)) {
		if (from[index] == ch) {
			return to[index];
		}
		++index;
	}


	return ch;
}

char change4(char ch) {
	char vowels[] = "aeiou";
	
	unsigned index = 0;
	while (index < strlen(vowels)) {
		if (vowels[index] == ch) {
			return vowels[(index+1) % strlen(vowels)];
		}
		++index;
	}

	return ch;
}

int main() {
	char buffer[255];
	scanf("%[^\n]", buffer);

	for (unsigned i = 0; i < strlen(buffer); ++i) {
		buffer[i] = change4(buffer[i]);
	}

	printf("%s\n", buffer);

	return 0;
}
