#include<stdio.h>
#include<string.h>
int main(){
    
    struct book {

    int accessnumber;

    char author[15];

    }n[2];
    for(int i=0;i<2;i++){
        scanf("%d",&n[i].accessnumber);
        scanf("%s",n[i].author);
        
    }
    int k=strcmp(n[0].author,n[1].author);
    if(n[0].accessnumber==n[1].accessnumber && k==0){
    printf("Same book");
    return 0;}
    if(n[0].accessnumber==n[1].accessnumber){
    printf("Same access number");}
    else if(k==0)
    printf("Same author");
    else{
        printf("No match");
    }
    
}
