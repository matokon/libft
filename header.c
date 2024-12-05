#include "header.h"
 
int silnia(int i)
{
    if(i == 0)
        return 1;
    else
        return i * silnia(i-1);
}