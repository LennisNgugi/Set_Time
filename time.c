#include<stdio.h>
#include<dos.h>
int main(void)
{

    /*Add one to the Minute & Hour struct element and then call settime*/

    struct time t;
    gettime(&t);
    printf("The current minute is: %dn",t.ti_min);
    printf("The current Hour is: %dn", t.ti_hour);

    t.ti_min++;
    t.ti_hour++;
    settime(&t);
    printf("The current minute is: %dn", t.ti_min);
    printf("The current Hour is: %dn", ti.ti_min);
    return 0;
}