#include "find_text.h"
#include <stdio.h>
#include <string.h>
int finish_lines;
int finish_words;
int getlines(char * s){
        char c;
        c=getchar();
        int i=0;
        int counter=0;
        while(c!='\n'&&c!=EOF) {
                if(i<LINE) {
                        *(s+i)=c;
                        i++;
                }
                counter++;
                c=getchar();
        }
        if(c==EOF) {
                finish_lines=0;
        }
        *(s+i)='\0';
        return counter;
}
int getword(char * w){
        char c;
        c=getchar();
        int i=0;
        int counter=0;
        while(c!='\n'&&c!=' '&&c!='\t'&&c!=EOF) {
                if(i<WORD) {
                        *(w+i)=c;
                        i++;
                }
                counter++;
                c=getchar();
        }
        if(c==EOF) {
                finish_words=0;
        }
        *(w+i)='\0';
        return counter;
}
//str1 - looking for the word cat  str2 - cat
int substring( char * str1, char * str2){
        char* p;

        // Find first occurrence of str2 in str1
        p = strstr(str1, str2);

        // Prints the result
        if (p) {
                return 1;
        } else
                return 0;
}
//caats cat 5 3 1
int similar (char *s, char *t, int n_s,int n_t, int n){
        int count1=0,count2=0;
        while (count1<n_s&&count2<n_t) {
                if(*(s+count1)==*(t+count2)) {
                        count1++;
                        count2++;
                }else count2++;
        }
        if(count2+(n_t-count2)-count1+(n_s-count1)<=n) {
                return 1;
        }else return 0;
}
void print_lines(char * str){
        finish_lines=1;
        char arr[LINE];
        while(finish_lines) {
                getlines(arr);
                int result=substring(arr,str);
                if(result) {
                        printf("%s\n",arr);
                }
        }
}
void print_similar_words(char * str){
        finish_words=1;
        char arr[WORD];
        while(finish_words) {
                getword(arr);
                int result=similar(str,arr,strlen(str),strlen(arr),1);
              if(result) {
                        printf("%s\n",arr);
              }
        }
}
