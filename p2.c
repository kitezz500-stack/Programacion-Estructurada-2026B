#include <stdio.h>

        int primo(int a) {

    if(a <= 1) {
        return 0;
    }

    for(int i = 2; i < a; i++) {

            if(a % i == 0){
             return 0;
            }

    }

    return 1;
}






int main(){

  int a,resultado;
  scanf("%d",&a);

  resultado = primo(a);

  if(resultado == 1){
    printf("Primo");
  }
  else if(resultado == 0){
    printf("No primo");
  }


    return 0;
}
