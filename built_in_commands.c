#include "shell.h"

/**
 * own_cd- Change directory
 *
 * Return: 1
 */
int own_cd(void)
{
printf("Working on it... \n");
return (0);
}

/**
 * own_env- Returns environment variables
 *
 * Return: 1
 */
int own_env(void)
{
printf("Working on it ... \n");
return (0);
}

/**
 * own_help- Help
 *
 * Return: 1
 */
int own_help(void)
{
puts("\n***WELCOME TO MY SHELL HELP***"
        "\nCopyright @ Open Source"
        "\n-Use the shell at your own risk..."
        "\nList of Commands supported:"
        "\n>cd"
        "\n>ls"
        "\n>exit"
        "\n>all other general commands available in UNIX shell"
        "\n>pipe handling"
        "\n>improper space handling");
return (0);
}

/**
 * own_exit- Exit shell
 *
 * Return: 1
 */
int own_exit(void)
{
return (0);
}
