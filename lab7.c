//Написати програму, яка знаходить мінімальний та максимальний елементи двовимірного масиву.
#include <stdio.h>

int main() {
   int rows, columns;
   printf("Введіть кількість рядків та стовпців:\n");
   scanf("%d %d", &rows, &columns);
   
   int arr[rows][columns];
   printf("Введіть елементи масиву:\n");
   
   // Заповнюємо масив та знаходимо мінімальний та максимальний елементи
   int min = arr[0][0], max = arr[0][0];
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
         scanf("%d", &arr[i][j]);
         if (arr[i][j] < min) {
            min = arr[i][j];
         }
         if (arr[i][j] > max) {
            max = arr[i][j];
         }
      }
   }
   
   printf("Мінімальний елемент: %d\n", min);
   printf("Максимальний елемент: %d\n", max);
   
   return 0;
}
