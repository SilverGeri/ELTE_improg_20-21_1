#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_copy(char* str) {
        const unsigned int size = strlen(str);
        char* copy = (char*)malloc((size+1) * sizeof(char));

        for (unsigned int i = 0; i < size; ++i) {
                copy[i] = str[size-i-1];
        }
        copy[size] = '\0';

        return copy;
}


int main(int argc, char* argv[]) {
	int N = atoi(argv[1]);
	int read_str = 0;
	char buffer[20];

	char** str_arr = (char**)malloc(N * sizeof(char*));
	/* N = 3
	 *
	 * str_arr[0] = memory garbage
	 * str_arr[1] = memory garbage
	 * str_arr[2] = memory garbage
	 *
	 * read 2 string then END:
	 * str_arr[0] -> asfda
	 * str_arr[1] -> qwer
	 * str_arr[2] = memory garbage
	 * */

	for (int i = 0; i < N; ++i) {
		scanf("%s", buffer);
		if (strcmp(buffer, "END") == 0) {
			break;
		}
		str_arr[i] = reverse_copy(buffer);
		++read_str;
	}

	for (int i = 0; i < read_str; ++i) {
		printf("%s\n", str_arr[i]);
		free(str_arr[i]);
	}

	free(str_arr);

	return 0;
}
