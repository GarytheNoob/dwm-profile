/*
 * FILENAME: config.h
 * DESCRIPTION: config file for suckless' dwm(Dynamic Window Manager)
 * ORIGIN: https://dwm.suckless.org
 *
 * This file is partly or fully edited by
 *  ▄▄▄  ▄  ▄▄  ▄ ▄      ▄▄     
 *  █   █ █ █▄▀ █▄█   ▄█▀▀▀▀█▄  
 *  █▄█ █▀█ █ █  █   █▀      ▀▀ 
 *  ▄▄▄ ▄ ▄ ▄▄▄      █    ▀▄▄   
 *   █  █▄█ █▄▄      █▄     ▀█▄ 
 *   █  █ █ █▄▄       ▀█▄▄▄▄█▀  
 *  ▄▄▄ ▄▄▄ ▄▄▄ ▄▄     ▄▄█▀     
 *  █ █ █ █ █ █ █▄▀  ▄█▀        
 *  █ █ █▄█ █▄█ █▄▀   ▀█▄▄      
 *                       ▀▀     
 * GitHub: https://github.com/GarytheNoob
 * 
 */
 

/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int gappih    = 10;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 10;       /* vert inner gap between windows */
static const unsigned int gappoh    = 10;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 10;       /* vert outer gap between windows and screen edge */
static const int smartgaps          = 0;        /* 1 means no outer gap when there is only one window */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const double activeopacity   = 0.90f;     /* Window opacity when it's focused (0 <= opacity <= 1) */
static const double inactiveopacity = 0.75f;     /* Window opacity when it's inactive (0 <= opacity <= 1) */
static const bool viewontag         = true;     /* Switch view on tag switch */
static const char *fonts[]          = { "JetBrainsMono Nerd Font Mono:size=16" , "Noto Sans Mono CJK SC:size=16"};
static const char dmenufont[]       = "JetBrainsMono Nerd Font Mono:size=12";
// static const char col_gray1[]       = "#222222";
// static const char col_gray2[]       = "#444444";
// static const char col_gray3[]       = "#bbbbbb";
// static const char col_gray4[]       = "#eeeeee";
// static const char col_gray5[]       = "#888888";
static const char col_one_gray1[]   = "#282c34";
static const char col_one_gray2[]   = "#5c6370";
static const char col_one_gray3[]   = "#abb2bf";
static const char col_one_gray4[]   = "#fffefe";
static const char col_one_blue[]   = "#61afef";
static const char col_cyan[]        = "#005577";
static const char autostartCmd[] ="/bin/bash /home/GarytheNoob/script/autostart.sh"; /* the autostart command */
static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_one_gray3, col_one_gray1,  col_one_gray1 },
	[SchemeSel]  = { col_one_gray4, col_one_blue,  col_one_blue },
	[SchemeHid]  = { col_one_gray3, col_one_gray1, col_one_gray1},
};
static const unsigned int alphas[][3]      = {
    /*               fg      bg        border*/
    [SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

/* tagging */
static const char *tags[] = { "󰣇", "󰈹", "󰭹", "", "󰈙", "󰎈", "", "", "󰓓" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title         tags mask     isfloating   focusopacity    unfocusopacity     monitor */
	{ "Gimp",     NULL,       NULL,         0,            1,           1.0,            inactiveopacity,   -1 },
	{ NULL,       NULL,       "图片",       0,            1,           1.0,            inactiveopacity,   -1 },
	{ "Firefox",  NULL,       NULL,         1 << 1,       0,           1.0,            activeopacity,     -1 },
	{ "firefox",  NULL,       NULL,         1 << 1,       0,           1.0,            activeopacity,     -1 },
	{ "Minecraft",NULL,       NULL,         0,            0,           1.0,            activeopacity,     -1 },
	{ "QQ",       NULL,       NULL,         1 << 2,       0,           1.0,            inactiveopacity,   -1 },
	{ "QQ",       NULL,       NULL,         1 << 2,       0,           1.0,            inactiveopacity,   -1 },
	{ "telegram", NULL,       NULL,         1 << 2,       0,           1.0,            inactiveopacity,   -1 },
	{ "Telegram", NULL,       NULL,         1 << 2,       0,           1.0,            inactiveopacity,   -1 },
	{ "discord",  NULL,       NULL,         1 << 2,       0,           1.0,            inactiveopacity,   -1 },

	{ NULL,       NULL,       "wps",        0,            1,           1.0,            inactiveopacity,   -1 },
	{ NULL,       NULL,       "wpp",        0,            1,           1.0,            inactiveopacity,   -1 },
	{ NULL,       NULL,       "et",         0,            1,           1.0,            inactiveopacity,   -1 },
	{ NULL,       "wps",      NULL,         1 << 4,            0,           1.0,            inactiveopacity,   -1 },
	{ NULL,       "wpp",      NULL,         1 << 4,            0,           1.0,            inactiveopacity,   -1 },
	{ NULL,       "et",       NULL,         1 << 4,            0,           1.0,            inactiveopacity,   -1 },
    { NULL,       "libreoffice",       NULL,1 << 4,            0,           1.0,            inactiveopacity,   -1 },
	{ "libreoffice",NULL,     NULL,         1 << 4,            0,           1.0,            inactiveopacity,   -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ " 󱂫 ",      tile },    /* first entry is default */
	{ " 󱂬 ",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
    { " 󰹪 ",      magicgrid},
	{ " 󰕫 ",      centeredmaster },
	{ " 󰕬 ",      centeredfloatingmaster },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static const char *stcmd[]  = { "st", NULL };
static const char *alaccmd[]  = { "alacritty", NULL };
static const char *kittycmd[]  = { "kitty", NULL };
static const char *firefoxcmd[]  = { "firefox", NULL };
static const char *qqcmd[]  = { "linuxqq", NULL };
// static const char *flameshotcmd[]  = { "flameshot", "gui", NULL };

static const Key keys[] = {
	/* modifier                     key        function        argument */
	// { MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	// { MODKEY|ControlMask,           XK_Return, spawn,          {.v = alaccmd } },
	// { MODKEY,                       XK_Return, spawn,          {.v = kittycmd } },
	// { MODKEY,                       XK_f,      spawn,          {.v = firefoxcmd } },
	// { MODKEY,                       XK_q,      spawn,          {.v = qqcmd } },
	// { MODKEY,                       XK_a,      spawn,          {.v = flameshotcmd} },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstackvis,  {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstackvis,  {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_j,      focusstackhid,  {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,      focusstackhid,  {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_o,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|ControlMask,              XK_h,      incrgaps,       {.i = +1 } },
	{ MODKEY|ControlMask,              XK_l,      incrgaps,       {.i = -1 } },
	{ MODKEY|ControlMask|ShiftMask,    XK_h,      incrogaps,      {.i = +1 } },
	{ MODKEY|ControlMask|ShiftMask,    XK_l,      incrogaps,      {.i = -1 } },
	{ MODKEY|ShiftMask|ControlMask,  XK_h,      incrigaps,      {.i = +1 } },
	{ MODKEY|ShiftMask|ControlMask,  XK_l,      incrigaps,      {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_0,      togglegaps,     {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },
	// { MODKEY,                       XK_y,      incrihgaps,     {.i = +1 } },
	// { MODKEY,                       XK_o,      incrihgaps,     {.i = -1 } },
	// { MODKEY|ControlMask,           XK_y,      incrivgaps,     {.i = +1 } },
	// { MODKEY|ControlMask,           XK_o,      incrivgaps,     {.i = -1 } },
	// { MODKEY|Mod4Mask,              XK_y,      incrohgaps,     {.i = +1 } },
	// { MODKEY|Mod4Mask,              XK_o,      incrohgaps,     {.i = -1 } },
	// { MODKEY|ShiftMask,             XK_y,      incrovgaps,     {.i = +1 } },
	// { MODKEY|ShiftMask,             XK_o,      incrovgaps,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY|ShiftMask,             XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY|ShiftMask,             XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY|ShiftMask,             XK_g,      setlayout,      {.v = &layouts[3]} },
	{ MODKEY|ShiftMask,             XK_u,      setlayout,      {.v = &layouts[4]} },
	{ MODKEY|ShiftMask,             XK_o,      setlayout,      {.v = &layouts[5]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } }, // view all tags
	{ MODKEY|ShiftMask,             XK_h,      tag,            {.ui = ~0 } }, // tag all tags (0-8) to the focused client
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
    { MODKEY|ShiftMask,             XK_a,      changefocusopacity,   {.f = +0.025}},
    { MODKEY|ShiftMask,             XK_s,      changefocusopacity,   {.f = -0.025}},
    { MODKEY|ShiftMask,             XK_z,      changeunfocusopacity, {.f = +0.025}},
    { MODKEY|ShiftMask,             XK_x,      changeunfocusopacity, {.f = -0.025}},
	{ MODKEY,                       XK_Up,      show,           {0} },
	{ MODKEY|ShiftMask,             XK_Up,      showall,        {0} },
	{ MODKEY,                       XK_Down,      hide,           {0} },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	TAGKEYS(                        XK_w,                      3)
	TAGKEYS(                        XK_e,                      4)
	TAGKEYS(                        XK_s,                      5)
	TAGKEYS(                        XK_d,                      6)
	TAGKEYS(                        XK_x,                      7)
	TAGKEYS(                        XK_v,                      8)
	{ MODKEY,                       XK_z,      view,           {.ui = ~0 } }, // view all tags
	// { MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]}   },
	{ ClkWinTitle,          0,              Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = alaccmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

