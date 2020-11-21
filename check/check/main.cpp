#include <stdio.h>
struct student
{
   char name[50];
  
};
int n;
int countWords(char c);
int main(){
    struct student text;
    FILE *fptr;
    int i;

    fptr = fopen("file.txt","w");
   fflush(stdin);
    printf("Enter name: ");
    gets(text.name);
    fprintf(fptr, text.name);
    fclose(fptr);

    fptr = fopen("file.txt", "r");
    fscanf(fptr, text.name);
    n=countWords(text.name[0]);
    
    fclose(fptr);
}
int countWords(char c)
{
    int state = 0, n = 0;
    while ((c  != EOF))
    {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\0' || c == '.' || c == ',' || c == '"' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}') state = 0;
        else if (state == 0)
        {
            state = 1;
            n++;
        }
    }
    return n;
}
