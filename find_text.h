#ifndef FIND_H_
#define FIND_H_
#define WORD 30
#define LINE 256

int getlines(char * s);
int getword(char * w);
int substring( char * str1, char * str2);
int similar (char *s, char *t, int n_s,int n_t, int n);
void print_lines(char * str);
void print_similar_words(char * str);

#endif
