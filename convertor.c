#include <stdio.h>
#include <stdlib.h>

// functions
void read_file (int *filename){

}

int main(void){
    FILE* fptr;

    fptr = fopen("convertor.html", "w");

    if (fptr == NULL){
        puts("File is not opened\n");
        exit(0);
    }
    else {
        puts("File created successfully\n");
    }

    


    

    return 0;
}