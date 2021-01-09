//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define CMD(s) "~/.local/bin/statusbar/"s

/* If interval of a block is set to 0, the block will only be updated once at startup
 */

static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/     /*Update Signal*/

    {"" , ""                   , 0    , 4 },
    {"" , CMD("status_wifi"  ) , 10   , 4 },
    {"" , CMD("status_vol"   ) , 0    , 3 },
    {"" , CMD("status_bat"   ) , 10   , 1 },
    {"" , CMD("status_clock" ) , 60   , 2 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
