/*********************************************************************************
 *      Copyright:  (C) 2017 qicheng
 *                  All rights reserved.
 *
 *       Filename:  strstr.c
 *    Description:  This file 
 *                 
 *        Version:  1.0.0(07/23/2017)
 *         Author:  yangni <497049229@qq.com>
 *      ChangeLog:  1, Release initial version on "07/23/2017 03:14:18 PM"
 *                 
 ********************************************************************************/

#include <stdio.h>
#include <string.h>
char *mystrstr(char *str,char *substr )
{
    int i=0;
    int j=0;
    int k=0;
    //char *str2;
    int str_len=strlen(str);
    int len=strlen(substr);

    for(i=0;i<str_len;i++)
    {
        if( str[i] == substr[j] )
        {   
            int a=i+1;  
            j++;
            for(;(a<=a+len && a<=str_len) && (j<=len)/* (str[a]!='\0') && (substr[j]!='\0')*/;a++,j++)                
            {
                if(str[a] != substr[j])
                {
                    k = -1;
                    break;
                }

                else if((str[a]=='\0') || (substr[j]=='\0'))
                {
                    k=i;
                    break;
                }
    
            }    
            
        }
    }

    if( k== -1 )
    {
        printf("have not this str");
        return NULL;
    }
    
    char *str2=&str[k];


    return str2;   
}

void main()
{
    char *str="hcd hbd ees";
    char *substr="hbd";
    char *mystr=mystrstr(str,substr);

    printf("%s",mystr);
}


