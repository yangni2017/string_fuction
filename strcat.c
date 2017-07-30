/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  strcat.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/23/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/23/2017 08:53:58 PM"
 *                 
 ********************************************************************************/

#include <stdio.h>

char *mystrcat(char *str1,char *str2)
{
    char *p=str1;
    while(*p)
        p++;
    while(*p++=*str2++);
    return str1;
}

void main()
{
    char a[20]="i love";
    char b[10]="you";
    printf("%s",mystrcat(a,b));

}
