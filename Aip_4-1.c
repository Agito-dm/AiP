#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

  int N; // Ввод количетсов элементов в массиве
  printf("Введите количество элементов для массива:\n");
  scanf("%d",&N);

  int x[N]; // Массив
  int proizv = 1; // Произведение четных элементов
  int sum = 0; // Сумма элементов, расположенных между первым и последним нулевым элементом
  int nulls = 0; // Количество нулевых элементов
  int el = 0; // Номер элемента в массиве
  int fNull = 0; // Первое нулевое значение 
  int lNull = 0; // Последнее нулевое значение
  int i=0; // Ввод значений элементов массива
  int temp, imin, h, j; // Переменные для сортировки методом прямого выбора

  // Ввод элементов в массив и расчет произведения четных элементов:
    printf("Введите %d элементов массива:\n", N);
    for(;i<N;i++) {
        printf("a[%d] = ", i);
        scanf("%d",&x[i]);
    if((i > 0) && (i % 2 == 0)) {
      proizv *=x[i];
    }
    }
    printf("Произведение четных элементов = %d\n", proizv);

  // Подсчет количество нулевых элементов:
    for (el; el < N; el++) {
        if(x[el] == 0) {
      if(!nulls) {
        fNull = el;
      } else if(nulls > 0) {
        lNull = el;
      }
      nulls+=1;
    }
    }

  // Расчет суммы элементов, расположенных между первым и последним нулевыми элементами:
    printf("Количество нулевых элементов равно %d\n", nulls);
  if(!nulls) {
    printf("У нас нет нулевых элементов\n");
  } else if(nulls == 1) {
    printf("Для суммы нужно два нулевых элемента, у нас их %d\n", nulls);
  } else if(nulls >= 2) {
    printf("Нашлись нулевые элементы. Возьмем первый и последний, их позиции: %d, %d\n", fNull, lNull);
    for(fNull; fNull < lNull; fNull++) {
      sum+=x[fNull];
    }
    printf("Сумма элементов, расположенных между первым и последним нулевыми элементами = %d\n", sum);
  }

  // Сортировка массива методом прямого выбора:
  printf("Преобразованный массив: ");
  for(h=0; h<N; h++) {
    imin=h;
    temp=x[h];
    for(j=h+1;j<N;j++)
      if(x[j]<temp) {
        imin=j;
        temp=x[imin];
      }
    x[imin]=x[h];
    x[h]=temp;
    if(x[h] >= 0) {
      printf("%d ", x[h]);
    }
  }

  for(h=0; h<N; h++) {
    imin=h;
    temp=x[h];
    for(j=h+1;j<N;j++)
      if(x[j]<temp) {
        imin=j;
        temp=x[imin];
      }
    x[imin]=x[h];
    x[h]=temp;
    if(x[h] < 0) {
      printf("%d ", x[h]);
    }
  }

    return 0;
}