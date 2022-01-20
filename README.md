#Бинарный поиск. 

Задача которую решает бинарный поиск звучит следующим образом:
Пусть у нас есть массив целых чисел отсортированный в порядке возрастания, в этом массиве нужно найти определенное число. 
Если число есть в этом массиве - выводим его индекс. Если такого числа в массиве нет - выводим -1.

``` array = [. . . . . . . . . .] ```

Нужно узнать есть ли в массиве число *x*.

Давайте посмотрим что находится в середине в середине массива

``` array = [. . . . . 0 . . . . .] ```

Если это число больше чем x, тогда и всё, что правее этого числа тоже больше чем x и эту часть мы можем не рассматривать.

``` array = [. . . . .] 0 . . . ```

Ищем середину оставшейся части массива, если она меньше чем х, то отбрасывает левую часть.

``` array = . . . [ . .] 0 . . . ```

Повторяем данную операцию (нахождения середины и отбрасывания ненужной части) до тех пор, пока у нас не останется одно число - х.

##Пример.
```a = [-1, 2, 4, 4, 8, 53]```

Нужно найти x = 2.

Смотри середину - 4 больше чем 2. Отбрасываем правую часть.
```a = [-1, 2]```

Допустим середина = -1. Она меньше 2. Значит -1 и всё что левее нам не подходит. Остаётся один элемент, который мы сравниваем с x = 2. Они равны6 значит ответ будет 1.
