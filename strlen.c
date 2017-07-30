/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  strlen.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/23/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/23/2017 07:39:35 PM"
 *                 
 ********************************************************************************/

#include <stdio.h>
unsigned int mystrlen( char *s )
{
    unsigned int len=0;
    while(*s != '\0')
    {
        s++;
        len++;
    }
    return len;
    
}

void main()
{
    char *s ="you love me";
    printf("%d",mystrlen(s));

}
