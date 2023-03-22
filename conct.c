#include <stdio.h>
void conct(char *,char *);
void main(){
    char pro[]="engineer",file[30]="computer";
    conct(file,pro);
    printf("%s\n",pro);
    printf("%s",file);
}
void conct(char *k,char *h){
    while(*k!='\0')
        k++;
    while(*h!='\0'){
        *k=*h;
        k++;
        h++;
    }    
}
