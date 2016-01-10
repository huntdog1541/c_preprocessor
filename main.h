#include <stdio.h>
/*
* A preprocessor - removes comments from the file
*/

void printContent(int args, char ** argv);

void removeComments(FILE * fin, FILE * fout);

void openEnd(char * fileName);

char * getFileName(char * fileName);

char * appendFileExtension(char * fileName);

void removeComments(FILE * fin, FILE * fout);

char * removeC(char * str);

void clearStr(char * str);

char peakAhead(char * str, int pos);

char * removeDoubleLines(char * str, int pos);

char * removeSingleLines(char * str, int pos);

char * getNextString(FILE * fin, char * str);
