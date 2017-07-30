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

char *mystrcpy(char *dest, const char *src,int n)
{
    int i;
    char *p = dest;
    
    if(*src ==' ')
    {
        printf("src is empty");
        return 0;
    }

    for(i=0;i<n && src[i]!='\0';i++)
    {
        // dest[i]=src[i];   
        *(p+i)=*(src+i);
    //  *p++=*src++;
    //  printf("%p %p %s \n",p,src,*);  
    }

    return dest;
}

void main()
{
    char a[20]="a";
    char b[20]=" ";
    printf("%s",mystrcpy(a,b,8));
}
