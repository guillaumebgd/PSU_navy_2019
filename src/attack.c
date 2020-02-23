/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** attack.c
*/

#include <stdlib.h>
#include "my.h"
#include "my_navy.h"

is_attack_valid_t check_attack_error(char **input)
{
    if (!(*input))
        return (LEAVE);
    if (my_strlen(*input) != 2) {
        free(*input);
        return (WRONG);
    }
    if (input[0] < 'A' || input[0] > 'H') {
        free(*input);
        return (WRONG);
    }
    if (input[1] < '1' || input[1] > '8') {
        free(*input);
        return (WRONG);
    }
    return (VALID);
}

is_attack_valid_t get_attack(char **input)
{
    my_putstr("attack: ");
    *input = get_next_line(0);
    return (check_attack_error(input));
}