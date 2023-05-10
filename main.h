#ifndef _MAIN_H
#define _MAIN_H

#define STR_LEN 16
#define BOOK_LEN 10

#include <stdio.h>
#include <stdlib.h>

struct book 
{
    char firstName[STR_LEN];
    char secondName[STR_LEN];
    char phoneNumber[STR_LEN];
    char address[STR_LEN];
}typedef book;
 
struct command
{
    char param0[STR_LEN];
    char param1[STR_LEN];
    book bk;  
}typedef command;

#endif