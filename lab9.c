//Обчислити суму елементів над головною діагоналлю квадратної матриці.
#include <stdio.h>

int main() {
   int n;
   printf("Введіть розмірність квадратної матриці: ");
   scanf("%d", &n);

   int arr[n][n];
   printf("Введіть елементи квадратної матриці:\n");
   
   // Заповнюємо квадратну матрицю та обчислюємо суму елементів над головною діагоналлю
   int sum = 0;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &arr[i][j]);
         if (j < i) {
            sum += arr[i][j];
         }
      }
   }

   printf("Сума елементів над головною діагоналлю квадратної матриці: %d\n", sum);
   
   return 0;
}