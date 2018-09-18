#pragma once
#ifndef VTDEFS_H
#define VTDEFS_H

const short VT_MAX_COLOR = 8;

const char VT_RESET[]{ "\x1b[m" };
const char VT_BLACK[]{ "\x1b[30m" };
const char VT_RED[]{ "\x1b[31m" };
const char VT_GREEN[]{ "\x1b[32m" };
const char VT_YELLOW[]{ "\x1b[33m" };
const char VT_NAVY[]{ "\x1b[34m" };
const char VT_MAGENTA[]{ "\x1b[35m" };
const char VT_CYAN[]{ "\x1b[36m" };
const char VT_WHITE[]{ "\x1b[37m" };

const char VT_COLOR_NAMES[][VT_MAX_COLOR]
{
	"Black",
	"Red",
	"Green",
	"Yellow",
	"Navy",
	"Magenta",
	"Cyan",
	"White"
};


#endif