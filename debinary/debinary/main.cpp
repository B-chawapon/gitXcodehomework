#include <stdio.h>
#include <string.h>

#include <math.h>
int bit;
int n;
int answer[999] = { 0, 0 };
int i = 0;
bool check1or2 = 0;
int countbit = 0;
int draw=0;
int c = 0;
int d = 0;
char text[999];
int limit;
int findAnswer(char textfunc, int checkbit, int a, int b);
int main()
{
    FILE *fptr;
    if ((fptr = fopen("/Users/b.nut/Desktop/databinary.txt", "w+")) == NULL) {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    printf("Enter Byte\n");
    scanf("%d", &limit);
    printf("Enter 8 Binary\n");
    scanf("%s", text);
    fscanf(fptr, "%s", text);
    while (text[d] != '\0') {
        if (text[d] == '0' || text[d] == '1') {
            countbit += 1;
        } else {
            check1or2 = 1;
            break;
        }
        d++;
    }
    if (countbit < (8 * limit) || check1or2 == 1) {
        if (countbit < (8 * limit) && check1or2 == 0) {
            printf("Not enough");
            draw=1;
        }
        if (check1or2 == 1) {
            printf("Pls input only 0 or 1");
            draw=1;
        }
    }
    for (int q = 0; q <= (limit - 1); q++) {
        //printf("%s", text);
        for (c = q * 8; c <= (q * 8) + 7; c++) {
            //printf("%d",c);
            bit = (7 * q) + 7 + q;
            //printf("%c",text[c]);
            answer[q] += findAnswer(text[c], bit, c, n);
            if (c == (7 * q) + 7 + q) {
                printf("\n");
                break;
            }
        }
        if(draw==0)
        {
        fprintf(fptr, "answer=%c\n", answer[q]);
        }
    }
    fclose(fptr);
    return 0;
}

int findAnswer(char textfunc, int checkbit, int a, int b)
{
    int total = 0;
    int stack = 1;
    int realbit = checkbit - a;
    if (textfunc == '0') {
        b = 0;
    } else if (textfunc == '1') {
        b = 1;
    }
    for (int j = 1; j <= realbit; j++) {
        stack *= 2;
    }
    total = stack * b;
    return total;
}
