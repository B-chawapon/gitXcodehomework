#include <iostream>
#include <ctype.h>
#include <strings.h>
#include<stdio.h>
using namespace std;

char binarytext[50];
char text[50];
int checkword(char* check);
int total = 0;
int main()
{
    
    cin.getline(text, 50);
    //checkword(&text[0]);
    return 0;
}

int checkword(char* check)
{
    int i = 0;
    while (check[i] != '\0')
    {
        if (isdigit(check[i]))
        {
            cout << check[i];
            strncpy(binarytext, &check[i], sizeof(text));
        }
            i++;
    }
    return 0;
}
