#include <stdio.h>
void factorial(int a){
  int multiplicacion = 1;
  for(int i=1;i <= a;i++){
     multiplicacion = multiplicacion * i;
  }
  printf("%d",multiplicacion);
}

int main() {

  int n;
  scanf("%d",&n);

  factorial(n);

    return 0;
}
