#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *ejemplo=NULL;
    char buffer[100];
    double pi;
    int mult,aux;
    char buffer1[100];

    archivo=fopen("vector.txt","r+");
    ejemplo=fopen("multiplicacion.txt","w");
    
    if (archivo==NULL){
        if (ejemplo==NULL){
            printf("No se puede abrir el archivo");
            return -1;
        }   
    }    
    while(feof (archivo)){
        fscanf(archivo, "%d\n",&mult);
        aux=mult*3;
        fprintf(ejemplo, "%d\n", aux);
    }
     fclose(archivo);
     fclose(ejemplo);

}

//k