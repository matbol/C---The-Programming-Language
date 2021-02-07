#include <stdio.h>
#include <stdlib.h>
/*Exercise 1-18*/
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void delete_blank(char to[], char from[]);

int main(){
    int c, len;
    int string[MAXLINE];
    int copy[MAXLINE];

    len=0;
    while((len=getline(string, MAXLINE)) > 0){
        if(len > 1){
            delete_blank(copy, string);
        }
        printf("%s", copy);
    }
}
int getline(char s[], int lim){
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;

    i=0;
    while((to[i] = from[i]) != '\0'){
          ++i;
    }
}
void delete_blank(char to[], char from[]){
    int i, k, blanked;

    i=k=blanked=0;
    while(from[i] != '\n'){
        if(from[i] == '\t'){
            to[k] = ' ';
            blanked=0;
        }
        else if(from[i] == ' ' && !blanked){
            blanked = 1;
            to[k] = from[i];
            ++k;
        }
        else if(from[i] != ' '){
            to[k] = from[i];
            blanked=0;
            ++k;
        }
        ++i;
    }
}
///*Exercise 1-17*/
//#define MAXLINE 1000
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);
//
//int main(){
//    int character[MAXLINE] = {0};
//    int len;
//
//    len=0;
//    while((len=getline(character, MAXLINE)) > 0){
//        if(len>80){
//            printf("%s", character);
//        }
//    }
//}
//
//int getline(char s[], int lim){
//    int c, i;
//
//    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
//        s[i] = c;
//    }
//    if(c == '\n'){
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';
//    return i;
//}
//
//void copy(char to[], char from[]){
//    int i;
//
//    i=0;
//    while((to[i] = from[i]) != '\0'){
//          ++i;
//    }
//}
///*Exercise 1-16*/
//#define MAXLINE 1000
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);
//
//int main(){
//    int len;
//    int max;
//    char line[MAXLINE];
//    char longest[MAXLINE];
//
//    max=0;
//    while((len=getline(line, MAXLINE)) > 0){
//        if(len > max){
//            max = len;
//            copy(longest, line);
//        }
//    }
//    if(max > 0)
//        printf("%s\nLength: %i", longest, max);
//    return 0;
//}
//
//int getline(char s[], int lim){
//    int c, i;
//
//    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
//        s[i] = c;
//    }
//    if(c == '\n'){
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';
//    return i;
//}
//
//void copy(char to[], char from[]){
//    int i;
//
//    i=0;
//    while((to[i] = from[i]) != '\0'){
//          ++i;
//    }
//}


///*Exercise 1-15*/
//float convFah2Cels(float fahr);
//int main(){
//    float fahr;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    printf("Fahrenheit\tCelsius\n");
//    while(fahr <= upper){
//
//        printf("%3.0f\t%6.1f\n", fahr, convFah2Cels(fahr));
//        fahr = fahr + step;
//    }
//}
//
//float convFah2Cels(float fahr){
//    return ((5.0/9.0) * (fahr-32.0));
//}

///*Exercise 1-14*/
//#define MAXCHAR 95
//int main(){
//    int c;
//    int character[MAXCHAR] = { { 0 } };
//
//    while((c=getchar()) != EOF){
//        for(int i=0; i<MAXCHAR; ++i){
//                //There are 126-32 different characters
//                //in the ASCI table, with SPACE as first Entry
//            if(i + ' ' == c){
//                ++character[i];
//            }
//        }
//    }
//
//
//    //Vertical
//    for(int i=0; i<MAXCHAR; ++i){
//        for(int k=0; k < character[i]; ++k){
//            putchar('|');
//        }
//        putchar('\n');
//        putchar(i + ' ' + 1);
//        putchar(' ');
//    }
//
//}

//
////Exercise 1-13
//#define IWORD 5
//int main(){
//    int c, i;
//    int cword[IWORD]= { 0 };
//    i = c = 0;
//    while((c=getchar()) != EOF){
//        if(c == ' '){
//            ++i;
//        }
//        else{
//            ++cword[i];
//            putchar(cword[i]+'0');
//        }
//    }
////Vertical
//    for(i=0; i<IWORD; ++i){
//        for(int k=0; k < cword[i]; ++k){
//            putchar('|');
//        }
//        putchar('\n');
//    }
//
////Horizontal
//    int maxvalue=0;
//    for(i=0; i<IWORD; ++i){
//        if(cword[i] > maxvalue){
//            maxvalue = cword[i];
//        }
//    }
//There is anywhere an entry with maxvalue
//Go from the top value (maxvalue) and decrease
//the value by the increment of for loop
//If you have a match, decrease the array entry at
//position i
//
//    for(i=0; i<maxvalue; ++i){
//        printf("%d:\t", maxvalue-i);
//        for(int k=0; k<IWORD; ++k){
//            if(cword[k] == maxvalue-i){
//                putchar('#');
//                --cword[k];
//            }
//            putchar('\t');
//        }
//        putchar('\n');
//    }
//    putchar('\t');
//    for(i=0; i<IWORD; ++i){
//        printf("%d\t", i);
//    }
//}


//
////Exercise 1-12
//int main(){
//    int c;
//
//    c=0;
//    while((c=getchar()) != EOF){
//        if(c == ' ' || c == '\t'){
//            putchar('\n');
//        }
//        else{
//            putchar(c);
//        }
//    }
//
//}


////Exercise 1-10
//int main(){
//    int c;
//
//    c=0;
//    while((c=getchar()) != EOF){
//        if(c == '\t'){
//            printf("\\t");
//        }
//        else if(c == '\b'){
//            printf("\\b");
//        }
//        else if(c == '\\')
//            printf("\\");
//        else{
//            putchar(c);
//        }
//    }
//}

////Exercise 1-9
//int main(){
//    int c, iblank;
//
//    c = iblank = 0;
//    while((c=getchar()) != EOF){
//        if(c == ' '){
//            iblank++;
//        }
//        else if(iblank){
//            iblank=0;
//        }
//        if((c != ' ') || (iblank==1)){
//            putchar(c);
//        }
//    }
//}


////Exercise 1-8
//int main(){
//    int i, k, m, c;
//
//    i = k = m = c = 0;
//    while((c = getchar()) != EOF){
//        if(c == ' '){
//            ++i;
//        }
//        else if(c == '\t'){
//            ++k;
//        }
//        else if(c == '\n'){
//            ++m;
//        }
//    }
//    printf("There are %d blanks, %d tabs and %d newlines in there.", i, k, m);
//    return 0;
//}
//

////Exercise 1-7
//int main(){
//    printf("The value of EOF: %d", EOF);
//}

////Exercise 1-6
////Use ctrl-z for EOF at Windows
//int main(){
//    printf("The getchar() != EOF results in: %d ", getchar() != EOF);
//}



/////*Exercise 1-4*/
//int main(){
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    printf("Celsius\tFahrenheit\n");
//    while(celsius <= upper){
//        fahr = (9.0/5.0) * celsius + 32;
//        printf("%3.2f\t%3.2f\n", celsius, fahr);
//        celsius = celsius + step;
//    }
//}

///*Exercise 1-3*/
//int main(){
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    printf("Fahrenheit\tCelsius\n");
//    while(fahr <= upper){
//        celsius = (5.0/9.0) * (fahr-32.0);
//        printf("%3.0f\t%6.1f\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}


///*Exercise 1-2*/
//int main()
//{
//
//    printf("Test\aTest\n");
//    printf("Test\bTest\n");
//    printf("Test\cTest\n");
//    printf("Test\dTest\n");
//    printf("Test\eTest\n");
//    printf("Test\fTest\n");
//    printf("Test\gTest\n");
//    printf("Test\hTest\n");
//    printf("Test\iTest\n");
//    printf("Test\jTest\n");
//    printf("Test\kTest\n");
//    printf("Test\lTest\n");
//    printf("Test\mTest\n");
//    printf("Test\nTest\n");
//    printf("Test\oTest\n");
//    printf("Test\pTest\n");
//    printf("Test\qTest\n");
//    printf("Test\rTest\n");
//    printf("Test\sTest\n");
//    printf("Test\tTest\n");
//    //printf("Test\uTest\n");
//    printf("Test\vTest\n");
//    printf("Test\wTest\n");
//    //printf("Test\xTest\n");
//    printf("Test\yTest\n");
//    printf("Test\zTest\n");
//
//    return 0;
//}


///*Exercise 1-1*/
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
