#include<stdio.h>
#include<stdlib.h>

int *create_array(int n, int initial_value);
int *create_array2(int n, int initial_value);
int main(){
    int *temp = create_array2(10, 2);
    int i;
    printf("i\tvalue\n");
    for (i=0; i<10; i++)
    {
        printf("%d\t%d\n", i, temp[i]);
    }
    
    return 0;
}

int *create_array(int n, int initial_value)
{
    int * temp = malloc(sizeof(int)*n);
    if (temp == NULL){
        printf("===No space===");
        return NULL;
    }
    int i;
    for(i=0; i<n; i++){
        temp[i]=initial_value;
    }
    return temp;
}


int *create_array2(int n, int initial_value)
{
    int *new, *temp;
    if((new = malloc(n*sizeof(int))) == NULL)
    {
        printf("===No space===");
        return NULL;
    }
    for(temp=new; temp<new+n; temp++)
        *temp = initial_value;
    return new;
}
