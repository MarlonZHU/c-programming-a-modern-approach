#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct point {  int x, y;  } ;
    struct rectangle {  struct point upper_left, lower_right; };
    struct rectangle *p;
    struct point upper_left = {10,25};
    struct point lower_right = {20, 15};
    
    struct rectangle rec = {upper_left, lower_right};
    p = &rec;
    

    return 0;
}
