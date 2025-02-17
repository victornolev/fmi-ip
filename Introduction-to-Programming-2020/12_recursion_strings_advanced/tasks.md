# По-интересни задачи за рекурсия и стрингове

1. Напишете рекурсивно функция, която по подаден масив от цели числа<br>
да върне указател към нов масив (с точно заделена памет), чиито елементи са<br>
само числата, съставени само от нечетни цифри.<br>

    Пример:
    ```
    Вход:   11 23 57 42 71 53
    Изход:  11 57 71 53
    ```
#
2. Напишене рекурсивно функция, която проверява дали в записа на едно число някоя<br>
цифра се среща повече от веднъж.<br>
Помислете как можете да решите задачата без използване на допълнителна памет (масив)?<br>

    Пример:
    ```
    Вход:   1234
    Изход:  No
    ```
    ```
    Вход:   1434
    Изход:  Yes
    ```
# 
3. Напишете програма dictionary, която по предварително известен речник<br>
от думи и въведено изречение от потребителя казва колко от въведените<br>
думи се съдържат в речника.<br>

    Пример:
    ```
    const char* dictionary[] = {“cats”, “dogs”};
    Вход: it’s raining cats and dogs
    Изход: 2
    ```
# 
4. Напишете програмата crossword, която кара потребителя да въведе<br>
цяло положително число N <= 16, след това на N-1 последователни<br>
реда от думи с дължина точно N-1 (разчитаме на верен вход).<br>
След това програмата трябва да изведе броя на думите, които се срещат<br>
и в редовете, и в колоните.<br>

    Примери:
    ```
    Вход:   4
            abc
            bca
            cba

    Изход: 1 (abc се среща в първия ред и в първата колона)
    ```

    ```
    Вход:   4
            abc
            bcb
            cbi

    Изход: 3
    (abc се среща в първия ред и в първата колона,
    bcb във втория ред и втората колона, cbi в третия ред с третата колона)
    ```
  
#
## Credits
https://github.com/ymivanov/Introduction-to-Programming-2020/blob/main/12_recursion_strings_advanced/tasks.md
