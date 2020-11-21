#include <stdio.h>
#include <iostream>
#include<string.h>
using namespace std;
struct sentence
{
   char name[999];
  
};
int limit,i;
int n=0;
int ans =0;
int state=0;
int  countWords(char c[limit], FILE* ptr,int i);
int main(){
    struct sentence text;
    FILE *fptr;
    int i;

    /*scanf("%[^\n]s",text.name);
    limit=strlen(text.name);
    cout<<"limit="<<limit<<'\n';
    for(i=0;i<limit;i++)
    {
        cout <<i;
        countWords(text.name,fptr,i);
        
    }
    cout << n+1<<'\n';*/
    
    /*fptr = fopen("/Users/b.nut/Desktop/idk.txt","w");
    fprintf(fptr, text.name);
    fclose(fptr);*/
    
    fptr=fopen("/Users/b.nut/Desktop/idk2.txt","r");
    fscanf(fptr, "%[^\n]s",text.name);
    limit=strlen(text.name);
    //cout<<"limit="<<limit<<'\n';
    for(i=0;i<limit;i++)
    {
        //cout <<i;
        countWords(text.name,fptr,i);
        
    }
    cout << n<<'\n';
    //cout <<text.name;
    fclose(fptr);
}
int countWords(char c[limit], FILE* ptr,int i)
{
    
    //cout << c[i];
    if(c[i]==' ' || c[i]=='\n' || c[i]=='\t'|| c[i]==';'|| c[i]=='?')
        {
            state=0;
           // cout <<"Hi"<<'\n';
            //n++;
        }
    else if(state==0)
    {
        state=1;
        //cout <<"eu"<<'\n';
        n++;
    }
    return n;
}
