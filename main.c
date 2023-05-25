/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:20:49 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/25 19:41:19 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

void print_TableTopLine(int size, char *color) {
    printf("%s", color);
    printf("┏");
    for(int i=0; i <= size; i++){
        printf("━");
    }
    printf("┓\e[0m\n");
}

void print_TableCollumns(int column_number, int column_size, char *color) {
    printf("%s", color);
    printf("┣\n");
    for(int i=0; i <= column_number; i++){
        print_TableSingleCollumn(column_size, color);
    }
    printf("┨\e[0m\n");
}

void print_TableSingleCollumn(int size, char *color) {
    printf("%s", color);
    printf("┿\n");
    for(int i=0; i <= size; i++){
        printf("━");
    }
    printf("┿\e[0m\n");
}

void print_TableMiddleLine(int size, char *color) {
    printf("%s", color);
    for(int i=0; i <= size; i++){
        printf("━");
    }
    printf("┫\e[0m\n");
}

void print_TableBottomLine(int size, char *color) {
    printf("┗━┛\n");
}

int main(void)
{
    printf("\ue22b To print in different colors use the sequence: \\e[38;5;{NumberOfColor}m [text], use \\e[0m to reset color\n");
        print_TableTopLine(143, "\e[38;5;16m");
    for (int i = 0; i < 256; i++)
    {
        print_TableTopLine(143, "\e[38;5;16m");
        printf(" \e[1;48;5;%im%i%s\e[0m", i, i, i < 100 ? " " : "");
        if (i == 15 || !((i - 15) % 36))
        {
            print_TableMiddleLine(143, "\e[38;5;16m");
        }
    }
    printf("\n");
    // for (int i = 0; i < 256; i++)
    // {
    //     printf("\e[1;48;5;%im  \e[0m", i);
    //     if (i == 15 || !((i - 15) % 36))
    //     {
    //         printf("\n");
    //     }
    // }
//     printf("┃\t| \e[1m BOLD\033[0m          | \\e[1m┃\n");
//     printf("┃\t| \e[3m ITALIC\033[0m        | \\e[3m┃\n");
//     printf("┃\t| \e[4m UNDERLINE\033[0m     | \\e[4m┃\n");
//     printf("┃\t| \e[9m STRIKETHROUGH\033[0m | \\e[9m┃\n");
//     printf("┃┃\t");
//     printf("┃\t|RED\\e[38;5;160m┃\n");
//     printf("┃\t|RED_B\\e[48;5;160m┃\n");
//     printf("┃\t|DELETE\\e[48;5;160m[DELETED]\033[0m┃\n");
//     printf("┃\t|GREEN\\e[38;5;40m┃\n");
//     printf("┃\t|GREEN_B\\e[48;5;40m┃\n");
//     printf("┃\t|COMPILATION\\e[48;5;40m[COMPILATION]\033[0m $(GREEN)┃\n");
//     printf("┃\t|BLUE\\e[38;5;123m┃\n");
//     printf("┃\t|BLUE_B\\e[48;5;39m┃\n");
//     printf("┃\t|INFO\\e[48;5;39m[INFORMATION]\033[0m $(BLUE)┃\n");
//     printf("┃\t|RESET\\e[0m┃\n");
    // printf("┗ ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━  ━ ┛\n");
}