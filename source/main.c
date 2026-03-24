#include <stdio.h>
#include <stdint.h>

#define CHIP8_MEMORY_SIZE	4096
#define CHIP8_DISPLAY_WIDTH	64
#define CHIP8_DISPLAY_HEIGHT	32
#define V_REGISTER_COUNT	16
#define STACK_DEPTH		16
#define CHIP8_KEY_COUNT		16

int main() {
	typedef struct Chip8State{
		int a;
		int b;
	};
	printf("Hello, World!\n");

	return 0;
}


#include <stdio.h>
void lab7_t4()
{
	int indexmax;
	int indexmin;
	int x[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(x) / sizeof(x[0]);
	int i;
	int max, min;
	max = 0;
	min = 100;
	for (i = 0; i<n; i++)
	{
		if (x[i]>max)
		{
			max = x[i];
			indexmax = i;
		}
	}

	for (i = 0; i<n; i++)
	{
		if (x[i]<min)
		{
			min = x[i];
			indexmin = i;
		}
	}
	x[indexmax] = min;
	x[indexmin] = max;
	for (i = 0; i<n; i++)
	{
		printf("%d ", i);
	}

}

void lab7_t5(){
	int A[15];
	int i;
	int bolshe_0 = 0, menshe_0 = 0, nolik = 0;

	for (i = 0; i < 15; i++) {
		scanf("%d ", &A[i]);

		if (A[i] > 0)
			bolshe_0++;
		else if (A[i] < 0)
			menshe_0++;
		else
			nolik++;

	}

	printf("ѕоложительных %d\n", bolshe_0);
	printf("ќтрицаельных %d\n", menshe_0);
	printf("нулевых %d\n", nolik);

	return 0;


}

#include <stdio.h>

void lab7_t6() {
	int A[4][4];
	int count = 0;

	printf("Ёлементы матрицы:\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d ", &A[i][j]);
			if (A[i][j] > 0)
				count++;
		}

	}

	printf("Ёлементы больше нул€: %d\n ", count);

	return 0;
}

#include <stdio.h>

void lab9_t3() {
	char text[1000];

	printf("¬ведите строку:");
	fgets(text, sizeof(text), stdin);

	for (int i = 0; text[i] != '\0'; i++) {
		if (isalpha(text[i])) {
			char lower = tolower(text[i]);
			int pos = lower - 'a' + 1; //
			printf("%d", pos);
		}
		else {
			printf("%c", text[i]); //
		}
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

void lab9_t10() {
	char text[1000];
	char symbol;
	int k;


	printf("¬ведите строку: ");
	fgets(text, sizeof(text), stdin);

	printf("¬ведите символ: ");
	scanf("%c", &symbol);

	printf("¬ведите k: ");
	scanf("%d", &k);

	int countWords = 0;
	int countSymbol = 0;


	for (int i = 0; i <= strlen(text); i++) {
		if ((text[i]) == symbol) {
			countSymbol++;
		}
		if ((text[i]) == ' ' || text[i] == '\0' || text[i] == '\n') {
			if (countSymbol == k) {
				countWords++;
			}
			countSymbol = 0;
		}
	}
	printf(" оличество слов: %d\n", countWords);
}


int main(){
	int lab7_t4();
	int lab7_t5();
	int lab7_t6();
	int lab9_t3();
	int lab9_t10();
	typedef struct Chip8State{
		int a;
		int b;
	};
	printf("Hello, World!");
	return 0:
}