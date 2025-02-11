#ifndef ASCII_H_A5D81824D8831E68
#define ASCII_H_A5D81824D8831E68

#include <stdint.h>

/*
95 8x8 matrices representing the pixel brightness
values of the 95 printable ASCII characters
*/
static const uint32_t char_matrices[95][8][8] =
{
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 255, },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   255, 255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 255, 0,   },
		{ 255, 255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   0,   255, 0,   },
		{ 0,   255, 255, 0,   255, 0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   0,   255, 0,   },
		{ 0,   255, 255, 0,   255, 0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   255, 255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   255, 255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   0,   255, 255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 0,   255, 255, 0,   255, 0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 255, 0,   255, 255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 255, },
	},
	{
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 0,   255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 255, 0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   255, 0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 0,   255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 255, 255, 255, 255, 255, 255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 255, 0,   0,   0,   },
		{ 0,   255, 255, 0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   0,   255, 255, 0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 0,   0,   255, 255, 0,   0,   },
		{ 0,   255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   255, 255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 255, 0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   255, 255, 0,   0,   255, 0,   0,   },
		{ 255, 255, 255, 255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 0,   0,   255, 255, 0,   0,   0,   0,   },
		{ 255, 255, 255, 0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
	{
		{ 0,   255, 255, 255, 0,   255, 255, 0,   },
		{ 255, 255, 0,   255, 255, 255, 0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
		{ 0,   0,   0,   0,   0,   0,   0,   0,   },
	},
};


#endif // ASCII_H_A5D81824D8831E68
