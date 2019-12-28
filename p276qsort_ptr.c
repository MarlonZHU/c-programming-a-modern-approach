#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//compare string qsort
int compare_string (const void* p, const void* q){
   
    return strcmp(*(char **)p, *(char **)q);
}

void * my_malloc( size_t n);
char * duplicate(const char *str);

int main()
{
    char old[] = "ab";
    char *new = duplicate(old);
    //char a[] = "aa";
    //printf("strlen(a):\t%ld\n", strlen(a));
    /*strlen not including 0*/
    //printf("sizeof(a):\t%ld\n", sizeof(a));
    /*sizeof return the sizeof ptr*/
    //printf("sizeof(char):\t%ld\n", sizeof(char));

    if (new==NULL){
        printf("Duplicate string failed.\n");
        exit(1);
    }
    printf("Duplicated string:\n%s\n", new);
    
    //my_malloc(234^234*10000000000);
    return 0;
}
char * duplicate(const char *str)
{
    char *new =NULL;
    //printf("len str: \t%ld\n", strlen(str));
    //printf("sizeof str:\t%ld\n", sizeof(str));
    new = malloc(sizeof(char)*(strlen(str)+1));

    if ( new )
    {
        printf("duplicate sucess!\n"); 
        strcpy(new, str);
    }

    return new;
}
void * my_malloc( size_t n){
    void * temp = malloc(n);
    if (temp)
        return temp;
    printf("--No space left--\n");
    exit(1);
}
