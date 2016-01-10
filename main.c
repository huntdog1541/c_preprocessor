#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define STRING_MAX 256

int main(int args, char ** argv)
{
  printf("Hello World\n");
  //printContent(args, argv);
  openEnd(argv[1]);
  return 0;
}

void printContent(int args, char ** argv)
{
  if(args == 2)
  {
    //printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
  }
  else
  {
    printf("No file entered\n");
  }
}



void openEnd(char * fileName)
{
  printf("File: %s\n", fileName);
  char * nwFile = getFileName(fileName);
  printf("%s\n", nwFile);
  nwFile = appendFileExtension(nwFile);
  FILE * fin = fopen(fileName, "r");
  FILE * fout = fopen(nwFile, "w+");
  removeComments(fin, fout);
  free(nwFile);
}

char * getFileName(char * fileName)
{
  int i =0, count = strlen(fileName);
  char * nwFile = (char*)malloc(sizeof(char) * count);
  char temp = fileName[i];
  while((i < count) && (temp != '.') && (temp != '\0'))
  {
    nwFile[i] = temp;
    temp = fileName[++i];
  }
  nwFile[i] = '\0';
  return nwFile;
}

char * appendFileExtension(char * fileName)
{
  int count = strlen(fileName);
  char * nwFile = (char*)malloc(sizeof(char) * (count + 3));
  int i = 0;
  char temp = fileName[i];
  while((i < count) && (temp != '.') && (temp != '\0'))
  {
    nwFile[i] = temp;
    temp = fileName[++i];
  }
  strcat(nwFile, ".pp");
  printf("%s\n", nwFile);
  free(fileName);
  return nwFile;
}

void removeComments(FILE * fin, FILE * fout)
{
  char temp = '\0';
  char * str = (char *) malloc(sizeof(char) * STRING_MAX);
  while(!feof(fin))
  {
    str = getNextString(fin, str);
    printf("%s", str);
  }
}

char * getNextString(FILE * fin, char * str)
{
  clearStr(str);
  if(feof(fin))
    return NULL;
  else
  {
    fgets(str, STRING_MAX, fin);
    return str;
  }
}

void clearStr(char * str)
{
  int count =  strlen(str);
  for(int i =0; i < count; i++)
  {
    str[i] = '\0';
  }
}

char * removeC(char * str)
{
    int * position = (int *)malloc(sizeof(int));
    *position = 0;
    
}

char peakAhead(char * str, int pos)
{
  int count = strlen(str);
  if((count == pos) || (count == (++pos)))
    return '\0';
  else
    return str[pos];
}

char * removeDoubleLines(char * str, int pos)
{

}

char * removeSingleLines(char * str, int pos)
{

}
