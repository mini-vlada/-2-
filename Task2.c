#include <stdio.h>

#include <stdlib.h>

int main(void) {
    int magic; /* Волшебное число */
    int guess; /* Предположение игрока */
    magic = rand(); /* Генерируем волшебное число */
    printf("Угадай волшебное число: ");
    scanf(“ % d ", &guess);
      if (guess == magic) printf("** Верно **");
      else printf("Неверно");
      return 0;
    }
