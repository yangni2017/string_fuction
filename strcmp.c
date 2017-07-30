/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  strcmp.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/29/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/29/2017 06:01:09 AM"
 *                 
 ********************************************************************************/

#include <stdio.h>
#include <string.h>
int mystrcmp(const char *s1, const char *s2)
{
    int len1=strlen(s1);
    int len2=strlen(s2);    
    int i;
    for(i=0; i<=len1 && i<=len2; i++)
    {
        if(s1[i] > s2[i])
        {
            return 1;
        }
        if(s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] == s2[i])
        {
            return 0;   
        }

    }

}

void main()
{
    char a[20]="baaa";
    char b[20]="aaaa";
    int x=mystrcmp(a,b);
    printf("%d",x);

}

