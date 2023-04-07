#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
    int price;
    char color[20];
    char type[20];
};

int main() {
    struct Car cars[] = {
        {"Porsche 911", 2021, 150000, "червоний", "спортивний"},
        {"Chevrolet Corvette", 2022, 80000, "синій", "спортивний"},
        {"Ford Mustang", 2020, 50000, "чорний", "спортивний"},
        {"Toyota Camry", 2022, 35000, "білий", "сімейний"},
        {"Honda Accord", 2021, 32000, "сірий", "сімейний"}
    };

    char type_choice[20], color_choice[20];
    int year_choice, price_choice;

    printf("Який ви шукаєте автомобіль?\n");
    printf("Введіть тип автомобіля (спортивний, сімейний): ");
    scanf("%s", type_choice);
    printf("Введіть колір автомобіля: ");
    scanf("%s", color_choice);
    printf("Введіть рік випуску автомобіля: ");
    scanf("%d", &year_choice);
    printf("Введіть бюджет для придбання автомобіля: ");
    scanf("%d", &price_choice);

    struct Car matching_cars[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (strcmp(cars[i].type, type_choice) == 0 && strcmp(cars[i].color, color_choice) == 0 && cars[i].year == year_choice && cars[i].price <= price_choice) {
            matching_cars[count] = cars[i];
            count++;
        }
    }

    if (count == 0) {
        printf("На жаль, автомобіль з такими параметрами не знайдено.\n");
    } else {
        printf("Ось список автомобілів, що відповідають вказаним параметрам:\n");
        for (int i = 0; i < count; i++) {
            printf("Модель: %s, Рік: %d, Ціна: %d, Колір: %s, Тип: %s\n", matching_cars[i].model, matching_cars[i].year, matching_cars[i].price, matching_cars[i].color, matching_cars[i].type);
        }
    }

    return 0;
}
