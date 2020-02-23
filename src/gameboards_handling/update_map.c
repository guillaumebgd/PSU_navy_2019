/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** update_map.c
*/

#include "connection_info.h"

boolean_t update_map(char map[65], const binary_signal_t target)
{
    if ((map[target.bridge] >= '2' && map[target.bridge] <= '5')
        || map[target.bridge] == 'x') {
        map[target.bridge] = 'x';
        return (TRUE);
        }
    map[target.bridge] = 'o';
    return (FALSE);
}