/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  strcpy.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/23/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/23/2017 07:52:29 PM"
 *                 
 ********************************************************************************/

#include <stdio.h>
#include <string.h>

char *mystrcpy(char *dest, char *src)
{
    int i;
    char *p = dest;
    
    if(src == NULL)
    {
        printf("src is null");
        return 0;
    }

    while(*src != '\0')
    {
          *p++=*src++;
    //  printf("%p %p %s \n",p,src,*);  
    }

    return dest;
}

void main()
{
    char *a="a";
    char *b="abcdefg";
    printf("%s",mystrcpy(a,b));
}
