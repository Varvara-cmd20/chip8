Лаба 11:
1.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *h;
    char ch;
    
    f1 = fopen("f1.txt", "r+");
    f2 = fopen("f2.txt", "r+");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
	
	h == fopen("h.txt", "w+");
	if (h == NULL) {
	    printf("Ошибка вспом файл!\n");
	    fclose(f1);
	    fclose(f2);
	    return 1;
	}
	
	rewind(f2);
	rewind(f1);
	while ((ch = fgetc(f2)) != E0F) {
	    fputc(ch, f1);
	}
	
	rewind(h);
	rewind(f2);
	while ((ch = fgetc(h)) != E0F) {
	    fputc(ch, f2);
	}
	
	fclose(f1);
	fclose(f2);
	fclose(h);
	
	printf("Обменяно!\n");
	
	return 0;
}


2.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f, *g;
    long size, i;
    
    f = fopen("f.txt", "r");
    
    if (f == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
    
    fseek(f,0, SEEK_END);
    size = ftell(f);
	
	g == fopen("g.txt", "w");
	if (g == NULL) {
	    printf("Ошибка файл!\n");
	    fclose(f);
	    return 1;
	}
	
	for (i == size - 1; i >= 0; i--) {
	    fseek(f, i, SEEK_SET);
	    char ch = fgets(f);
	    fputc(ch, g);
	}
	
	printf("создано!\n");
	fclose(f);
	fclose(g);
	
	return 0;

}


3.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f, *g, *h;
    char ch;
    
    f = fopen("f.txt", "r");
    if (f == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
	
	g == fopen("g.txt", "r");
	if (g == NULL) {
	    printf("Ошибка файл!\n");
	    fclose(f);
	    return 1;
	}
	
	h = fopen("h.txt", "w");
    if (h == NULL) {
        printf("Ошибка создания!\n");
        fclose(f);
        fclose(g);
        return 1;
    }
    
	while ((ch= fgetc(f)) != EOF) {
	    fputc(ch, h);
	    
	}
	
	while ((ch= fgetc(g)) != EOF) {
	    fputc(ch, h);
	    
	}
	
	printf("создано!\n");
	printf("содержимое h,g\n");
	fclose(f);
	fclose(g);
	fclose(h);
	
	return 0;

}


4.
#include <stdio.h>
#include <stdlib.h>
#include <math.ru>

int main() {
    FILE *f, *g;
    int num;
    
    f = fopen("f.txt", "r");
    if (f == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
	
	g == fopen("g.txt", "w");
	if (g == NULL) {
	    printf("Ошибка файл!\n");
	    fclose(f);
	    return 1;
	}
	
	fprintf(g);
	rewind(f);
	while (fscanf(f,"%d", &num) == 1)
 {
        if (num % 2 == 0) {
            fprintf(g, "%d", num);
        }
    }
    fprintf(g);
    
    fprintf(g);
	rewind(f);
	while (fscanf(f,"%d", &num) == 1)
{
        if (num % 3 == 0 && num % 7 != 0) {
            fprintf(g, "%d", num);
        }
    }
    fprintf(g);
    
    fprintf(g);
	rewind(f);
	while (fscanf(f,"%d", &num) == 1)
{
        if (num >= 0) {
            int root = (int)sqrt(num);
            if (root * root == num) {
            fprintf(g, "%d", num);
        }
    }
}

    fprintf(g);

	printf("создано!\n");
	fclose(f);
	fclose(g);
	
	return 0;

}


5.
#include <stdio.h>
#include <stdlib.h>
#include <stype.h>
#include <string.h>

int main() {
    FILE *f, *g;
    char ch;
    int in_word = 0;
    int word_len = 0;
    char word[1000];
    int need_space = 0;
    
    
    f = fopen("f.txt", "r");
    if (f == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
	
	g == fopen("g.txt", "w");
	if (g == NULL) {
	    printf("Ошибка файл!\n");
	    fclose(f);
	    return 1;
	}
	
	while ((ch = fgetc(f)) != EOF) {
	    if (ch == ' ' || ch == '\t'|| ch =='\n' ){
	        if (in_word){
	            word[word_len] = '\0';
	            if (word_len > 1) {
	                if (need_space) {
	                    fputc(' ', g);
	                }
	                fputs(word, g);
	                need_space = 1;
	            }
	            in_word = 0;
	            word_len = 0;
	        }
	        if (ch == '\n'){
	            fputc('\n',g);
	            need_space = 0;
	        }
	    } else {
	        if (!in_word){
	            in_word = 1;
	            word_len = 0;
	            
	        }
	        if (word_len < 999) {
	            word[word_len++] = ch;
	        }
	    }
	}
	if (in_word){
	    word[word_len] = '\0';
	    if (word_len > 1) {
	        if (need_space) {
	            fputc(' ',g);
	        }
	        fputs(word, g);
	    }
	}

	printf("создано!\n");
	printf("удалены буквы!\n");
	fclose(f);
	fclose(g);
	
	return 0;

}


6.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MARK 50
#define MAX_NUMBER 20
#define MAX_NAME 50

typedef struct{
    char mark[MAX_MARK];
    char number[MAX_NUMBER];
    char owner[MAX_NAME];
} Car;


int main() {
    FILE *f, *g;
    Car cars[[1000];
    int count = 0;
    char search_mark[MAX_MARK];
    int i,g;
    
    
    f = fopen("f.txt", "r");
    if (f == NULL) {
        printf("Ошибка!\n");
        return 1;
    }
	
	while (fscanf(f,"%s %s %s", cars[count].mark, cars[count].number, cars[count].omner) == 3{
	    count++
	    if (count >= 1000) break;
	}
	fclose(f);
	
	g == fopen("g.txt", "w");
	if (g == NULL) {
	    printf("Ошибка файл!\n");
	    fclose(f);
	    return 1;
	}
	
	printf("mark");
	scanf("%s", search_mark);
	
	fprintf(g,search_mark);
	int found = 0;
	for (i = 0; i < count; i++){
	    if (strcmp(cars[i].mark, search_mark) == 0{
	        fprintf(g,cars[i].owner,cars[i].number);
	        found = 1
	    }
	}
	
	if (!found){
	    fprintf(g);
	    for (i =0; i < count; i++){
	        int already_counted=0;
	        for (g=0; j< i ; j++){
	            if (strcmp(cars[i].mark,cars[j].mark) == 0 {
	                already_counted= 1;
	                break;
	            }
	        }
	        if (!already_counted){
	            int car_count = 1;
	            for (j=i + 1;j < count; g++){
	                if (strcmp(cars[i].mark, cars[j].mark) == 0){
	                    car_count++;
	                }
	            }
	            fprintf(g,cars[i].mark,car_count);
	        }
	    }
	printf("создано!\n");
	fclose(g);
	
	return 0;

}

	
