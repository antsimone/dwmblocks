#define CMD(s) "~/.local/bin/bar/"s

/* If interval of a block is set to 0, the block will only be updated once at startup
 */

static const Block blocks[] = {
    /*Icon - Command - Update Interval - Update Signal*/

    {"" , ""           , 0    , 5 },
    {"" , CMD("wifi" ) , 10   , 4 },
    {"" , CMD("vol"  ) , 0    , 3 }, /* meaningful signal */
    {"" , CMD("bat"  ) , 10   , 1 },
    {"" , CMD("clk"  ) , 60   , 2 },

};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = " [ ";
static unsigned int delimLen = 5;
