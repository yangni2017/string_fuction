/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  aaa.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/23/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/23/2017 09:39:21 PM"
 *                 
 ********************************************************************************/

#include <stdio.h>
#include <string.h>

char *mystrcpy(char *dest, const char *src,int n)
{
    int i;
    char *p = dest;
    
        // dest[i]=src[i];   
    for(i=0;i<n;i++)
    {
        *p++=*src++;
    }   
    return dest;
}

void main()
{
    char a[20]="a";
    char b[20]="i love you!";
    printf("%s",mystrcpy(a,b,20));
}
