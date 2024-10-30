#include <stdio.h>

int main(){
	
	int lenguaje1[45], lenguaje2[45], complemento [100], lenguaje [100], diferencia [100] ;
    int n1, n2, i, j, k, n, universo= 100;
    
    printf("Ingrese el numero de elementos del lenguaje: ");     
        scanf("%d", &n);

        printf("Ingrese los elementos del lenguaje: ");
        for (i = 0; i < n; i++) {
          scanf("%d", &lenguaje[i]);
        }

        for (i = 0; i < universo; i++) {     // Inicializamos el complemento a 1
           complemento[i] = 1;
        }

        for (i = 0; i < n; i++) {      // Marcamos los elementos del conjunto original como 0 (no están en el complemento)
           complemento[lenguaje[i] - 1] = 0; // Ajustamos el índice ya que los arreglos comienzan en 0
        }
        printf("El complemento del lenguaje es: ");
        for (i = 0; i < universo; i++) {
           if (complemento[i] == 1) {
            printf("%d ", i + 1); // Sumamos 1 para obtener el valor real del elemento
           }
        }
		
		printf("\nIngrese el numero de elementos del lengaje 1: ");
        scanf("%d", &n1);

        printf("Ingrese los elementos del lenguaje 1:\n");
        for (i = 0; i < n1; i++) {
          scanf("%d", &lenguaje1[i]);
        }

        printf("Ingrese el numero de elementos del lenguaje 2: ");
        scanf("%d", &n2);

        printf("Ingrese los elementos del lenguaje 2:\n");
        for (i = 0; i < n2; i++) {
          scanf("%d", &lenguaje2[i]);
        }
        k=0;
        for (i = 0; i < n1; i++) {     // Calculamos la diferencia A - B
        int encontrado = 0;
        for (j = 0; j < n2; j++) {
            if (lenguaje1[i] == lenguaje2[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            diferencia[k] = lenguaje1[i];
            k++;
        }
        }

        printf("La diferencia A - B es: ");
        for (i = 0; i < k; i++) {
          printf("%d ", diferencia[i]);
        }
        printf("\n");
        
       return 0;
 }
