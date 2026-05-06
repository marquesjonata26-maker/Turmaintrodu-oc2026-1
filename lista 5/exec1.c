// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, codigo;
    int validos = 0, invalidos = 0;

    for(i= 0; i<=10;i++){
        printf("digite um codigo");
        scanf("%d", &codigo);
        
        if(codigo>=1000 && codigo<=9999){
            
            validos++;
            
        }else{
            
        
           invalidos++;
        }
    }

    
    printf("codigos validos: %d", validos);
    printf("codigos invalidos: %d", invalidos);

    return 0;
}