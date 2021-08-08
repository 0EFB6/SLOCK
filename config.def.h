/* user and group to drop privileges to */
/* Change the value to your username */
static const char *user  = "linux";
static const char *group = "linux";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#3eb71d",   /* during input */
	[FAILED] = "#f76d04",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
