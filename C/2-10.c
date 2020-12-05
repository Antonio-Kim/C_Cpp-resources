#include <stdio.h>
#include <string.h>

struct sigrecord{
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;

int main (void){
    sigline.signum =5;
    strcpy(sigline.signame, "SIGNINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");

    printf("%d, %s, %s\n", sigline.signum, sigline.signame, sigline. sigdesc);
    
    sigline_p = &sigline;

    sigline_p->signum = 10;
    strcpy(sigline_p->signame, "UNSIGNINT");
    strcpy(sigline_p->sigdesc, "Testing");
    sigline_p->signum = 10;
    strcpy(sigline_p->signame, "UNSIGNINT");
    printf("%d, %s, %s\n", sigline.signum, sigline.signame, sigline. sigdesc);

    return 0;
}
