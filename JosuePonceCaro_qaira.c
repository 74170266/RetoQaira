#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    
    char ingresado[20],texto[20];
    int i = 0,d =0;
    int a=0,b=0,x=0;
    char operador[1];
    
    printf("Ingrese Operacion:");
    scanf("%s", ingresado);
    printf("ingresado %s\n", ingresado);
    while (i<20)
    {
      if (!(ingresado[i] == ' ')) {
        texto[d] = ingresado[i];
        d++;
      }
      i++;
     }
     printf("%s",texto);
     i = 0;
     d = 0;
     while (i<3)
    {
        if (isdigit(texto[d]) & d ==0) {
          a = texto[i]-'0';
          d = 100;
          
        }
        else if(isdigit(texto[i]) & d ==100) {
          b = texto[i]-'0';
          x = b + 100;
         
        }
        else{
          operador[0] = texto[i];
          
        }
        i++;
    }
    if(!(x ==0)){
      if(operador[0] =='+'){
      
        printf("%ld",a+b);
      }
      else if(operador[0] =='*'){
        printf("%ld",a*b);
      }
      else if(operador[0] =='-'){
        printf("%ld",a-b);
      }
      else if(operador[0] =='/'){
        if(b==0){
          printf("No se puede divider entre cero");
        }else{
          float a = a;
          float b = b;
          float val = a/b;
          printf("%.6f",val);
        }
        
      }
    }
    else{
      printf("La operacion no es infija ni prefija ni postfija");
    }
  
   
    return 0;
}