#include "ftconvert.h"
#include "ftstring.h"
#include <stdlib.h>

char *dtoa(double value, int precision)
{
    char            *unitstr;
    char            *decistr;
    char            *dest;
    unsigned int    carry;

    if (!(unitstr = ft_itoa((int)value)))
        return (NULL);
    value -= (int)value;
    carry = 1;
    if (precision <= 0)
        return(unitstr);
    if (!(unitstr = ft_strjoinfree(unitstr, ".")))
        return (NULL);
    while (precision--)
        carry *= 10;
    carry *= value;
    if (!(decistr = ft_itoa(carry)))
        return (NULL);
    if (!(dest = ft_strjoin(unitstr, decistr)))
        return (NULL);
    free(unitstr);
    free(decistr);
    return (dest);
}