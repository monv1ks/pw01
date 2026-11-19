/*
 * Моделирование архитектуры фон Неймана, вариант 1,6.
 * Программа и данные лежат в одной памяти memory[256],
 * команды выбираются счётчиком команд и выполняются по
 * порядку - в этом и состоят принципы фон Неймана:
 * общая память команд и данных, программное управление,
 * адресность. Дополнительно (уровень "отлично") сделаны
 * команды 4 (JUMP) и 5 (JUMP IF ZERO), то есть переходы.
 */
#include <stdio.h>

int main(void)
{
    int memory[256] = {0};   /* память: команды и данные */
    int cpu_state[8] = {0};  /* регистры процессора */
    int interrupted = 0;     /* 1, если прерывание было */
    int count = 0;           /* сколько чисел прочитано */
    int number;              /* очередное введённое число */
    int pc;                  /* счётчик команд */
    int command;             /* код текущей команды */
    int operand;             /* операнд - адрес ячейки */
    int error;               /* код ошибки команды */
    /* ввод программы с клавиатуры в память */
    while (count < 256) {
        if (scanf("%d", &number) != 1) {
            break;
        }
        memory[count] = number;
        count = count + 1;
    }

    if (count < 7) {
        printf("Ошибка: введено слишком мало чисел\n");
        return 1;
    }

    /* начальная настройка процессора */
    cpu_state[0] = 6;            /* PC - счётчик команд */
    cpu_state[1] = 0;            /* ACC - аккумулятор */
    cpu_state[2] = 0;            /* IR - регистр команд */
    cpu_state[3] = memory[0];    /* IV - вектор прерываний */
    cpu_state[4] = 0;            /* STOP - флаг остановки */
    cpu_state[5] = 0;            /* ERR - код ошибки */
    cpu_state[6] = 0;            /* резерв */
    cpu_state[7] = 0;            /* резерв */

    if (cpu_state[3] < 0 || cpu_state[3] >= 256) {
        printf("Ошибка: неверный вектор прерываний\n");
        return 1;
    }

    printf("Программа загружена, начало выполнения\n");

    /* основной цикл работы процессора */
    while (cpu_state[4] == 0) {

        /* проверяем границы счётчика команд */
        if (cpu_state[0] < 0 || cpu_state[0] >= 256) {
            printf("ОШИБКА: счётчик команд вне памяти\n");
            cpu_state[5] = 1;
            if (interrupted == 1) {
                printf("Повторное прерывание. ");
                printf("Программа остановлена.\n");
                cpu_state[4] = 1;
                break;
            }
            interrupted = 1;
            cpu_state[0] = cpu_state[3];
            printf("Прерывание: переход на обработчик ");
            printf("по адресу %d\n", cpu_state[3]);
            continue;
        }

        pc = cpu_state[0];
        cpu_state[2] = memory[pc];   /* выборка команды */
        command = cpu_state[2];
        operand = -1;
        error = 0;

        if (command == 0) {
            cpu_state[4] = 1;        /* остановка программы */
        }
        else if (command < 0 || command > 5) {
            error = 3;               /* неизвестная команда */
        }
        else if (pc + 1 >= 256) {
            error = 2;               /* нет места */
        }
        else {
            operand = memory[pc + 1];
            if (operand < 0 || operand >= 256) {
                error = 2;           /* неверный адрес */
            }
            else if (command == 3 && memory[operand] == 0) {
                error = 4;           /* деление на ноль */
            }
            else if (command == 1) {          /* LOAD */
                cpu_state[1] = memory[operand];
                cpu_state[0] = pc + 2;
            }
            else if (command == 2) {          /* MUL */
                cpu_state[1] = cpu_state[1] * memory[operand];
                cpu_state[0] = pc + 2;
            }
            else if (command == 3) {          /* DIV */
                cpu_state[1] = cpu_state[1] / memory[operand];
                cpu_state[0] = pc + 2;
            }
            else if (command == 4) {          /* JUMP */
                cpu_state[0] = operand;
            }
            else {    /* команда 5: JUMP IF ZERO */
                if (cpu_state[1] == 0) {
                    cpu_state[0] = operand;
                } else {
                    cpu_state[0] = pc + 2;
                }
            }
        }

        /* вывод: pc, команда, операнд, acc */
        printf("pc=%d, команда=%d", pc, command);
        if (operand >= 0) {
            printf(", operand=%d", operand);
        }

        if (error == 0) {
            printf(", acc=%d\n", cpu_state[1]);
        } else {
            cpu_state[5] = error;
            if (error == 2) {
                printf(", ОШИБКА: неверный адрес\n");
            }
            if (error == 3) {
                printf(", ОШИБКА: неизвестная команда\n");
            }
            if (error == 4) {
                printf(", ОШИБКА: деление на ноль\n");
            }
            if (interrupted == 1) {
                printf("Повторное прерывание. ");
                printf("Программа остановлена.\n");
                cpu_state[4] = 1;
            } else {
                interrupted = 1;
                printf("Прерывание: переход на обработчик ");
                printf("по адресу %d\n", cpu_state[3]);
                cpu_state[0] = cpu_state[3];
            }
        }
    }

    printf("Выполнение программы завершено\n");
    return 0;
}
