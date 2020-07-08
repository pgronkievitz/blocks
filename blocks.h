//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	             /*Update Interval*/  /*Update Signal*/
	{"  ",    "dwm_bar home",	         180,                  0},
	{"  ",    "dwm_bar root",	         180,                  0},
	{"  ",    "dwm_bar sata",	         180,                  0},
	{" ",      "dwm_bar network",	         30,                   0},
	{" ",      "dwm_bar brightness",         0,                   11},
	{" ",      "dwm_bar vol",                0,                   12},
	{" ",      "dwm_bar bat",                30,                   0},
	{"  ",    "date +'%Y-%m-%d |  %H:%M'", 5,                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
