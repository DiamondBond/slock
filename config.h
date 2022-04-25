/* user and group to drop privileges to */
static const char *user  = "nobody";
/* static const char *group = "nogroup"; // use "nobody" for arch */
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* default message */
static const char * message = "Session Locked.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-*-*-r-*-*-34-*-*-*-*-*-*-*";

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
