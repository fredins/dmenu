/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "JetBrainsMono:size=20:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_gray1[]       = "#1e2127";
static const char col_gray2[]       = "#2e3440";
static const char col_gray3[]       = "#d8dee9";
static const char col_gray4[]       = "#e5e9f0";
static const char col_pink[]        = "#b48ead";
static const char *colors[SchemeLast][2] = {
	             /*     fg         bg       */
	[SchemeNorm] = {col_gray1, "#edeceb"},
	[SchemeSel] = { col_gray1, col_pink },
	[SchemeOut] = { "#edeceb", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
