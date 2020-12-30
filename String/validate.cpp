#include<iostream>
#include<String>



int Validate(char *name){

    int i;

    for ( i = 0; name[i]='\0'; i++)
    {
    
    if(!(name[i]>='A' && name[i]<='Z') && 
    !(name[i]>='a' && name[i]<='z') && 
    !(name[i]>=48 && name[i]<=57))

    return 0; 
    }

    return -1;
}

int main(){

    char *name =(char*)"Pawan?123";
    

    if(Validate(name)){

        printf("Validate String");
    }
    else
    {
        printf("Invalid String");
    }
    
    return 0;
}