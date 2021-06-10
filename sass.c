#include <stdio.h>
#include <string.h>

char first[100];        /* First name of person we are working with */
char last[100];         /* His last name */

/* First and last name of the person (computed) */
char full[200];         

int main() {
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    /* trim off last character */
    first[strlen(first)-1] = '\0';

    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);
    /* trim off last character */
    last[strlen(last)-1] = '\0';

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("the lenght of first %lu  and last %lu ",strlen(first),strlen(last));
    printf("The name is %s\n", full);
    return (0);
}


#include <stdio.h>
char  line[100];   /* input line from console */
int   value;       /* a value to double */
int   value2;
float value3;

int main()
{
    printf("Enter three values (last is float): ");

    fgets(line, sizeof(line), stdin); //para que sirve esta linea?
    sscanf(line, "%d %d %f", &value,&value2,&value3);

    printf("Twice %d is %d\n", value, value * 2);
    printf("another value2 is %d value3 is %f\n",value2,value3);
    return (0);
}
