//
//  main.cpp
//  try
//
//  Created by Chawapon Baidumrongsak on 11/25/20.
//
#include <algorithm>
#include<stdio.h>
#include <iostream>
#include<string.h>

using namespace::std;
struct scoreStat
{
    int numfix;
    string namefix;
};
scoreStat scoremain[4];
int n=sizeof(scoremain)/sizeof(scoremain[0]);
int temp;
string tempname;
void bubbleSort();
int main() {
    int num;
    char name[10];
    int i=0;
    FILE *fptr;
   /* fptr=fopen("/Users/b.nut/Desktop/hello.txt", "w");
    if(fptr==NULL)
    {
        cout << "wtf";
    }
    fprintf(fptr, "Hell");
    fclose(fptr);*/
    
    fptr=fopen("/Users/b.nut/Desktop/hello.txt", "r");
    
    if(fptr==NULL)
    {
        cout << "wtf";
    }
    while (fscanf(fptr, "%s %d",name,&num)>0) {
        scoremain[i].numfix=num;
        scoremain[i].namefix= name;
       //cout << namefix[i] <<"" << numfix[i]<<'\n';
        i++;
    }
    fclose(fptr);
    for (int j=0;j<n;j++)
    {
    cout << scoremain[j].numfix <<" " <<scoremain[j].namefix<<'\n';
    }
    cout <<'\n';
    bubbleSort();
    for(i = 0; i<n; i++) {
       cout <<scoremain[i].numfix<<" " << scoremain[i].namefix <<'\n';
       }
    return 0;
    }
void bubbleSort()
{
    for(int m = 0; m<n; m++) {
       for(int k = m+1; k<n; k++)
       {
          if(scoremain[k].numfix > scoremain[m].numfix)
          {
             temp = scoremain[m].numfix;
              tempname=scoremain[m].namefix;
              scoremain[m].numfix = scoremain[k].numfix;
              scoremain[m].namefix=scoremain[k].namefix;
              scoremain[k].numfix = temp;
              scoremain[k].namefix=tempname;
          }
       }
    }
}
