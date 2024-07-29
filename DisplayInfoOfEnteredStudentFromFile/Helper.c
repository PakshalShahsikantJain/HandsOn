#include "Header.h"

BOOL StrCmpX(char *sname,char *name) 
{
    if((sname == NULL)||(name == NULL))
    {
        return FALSE;
    }

    while((*sname != '\0')&&(*name != '\0'))
    {
        if(*sname != *name) 
        {
            break;
        }

        sname++;
        name++;
    }

    if(*sname != *name)
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
}