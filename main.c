// Fermín Narváez Reyes A01411229

#include <stdio.h>
#include <stdlib.h>

// La función compare
int Compare (const void * a, const void * b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    // Definir variables
    int count;
    int n;
    int dup = 0;
    
    // Output
    printf("Escribe los valores: ");
    scanf("%d", &n);

    // Definir array
    int numbers[n];
    // Regla
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%d", &numbers[i]);
    }
    // función sorting
    qsort(numbers, n, sizeof(int), Compare);
    //Regla
    for(int i = 0; i < n; i+=count+1){
        count = 0;
        for(int j = i + 1; j < n; j++){
            if(numbers[i] == numbers[j]){
                count++;
            }
        }
        if(count > 0){
            dup++;
        }
    }

    printf("La cantidad de valores duplicados (repetidos) es: %d.", dup);

    return 0;
}