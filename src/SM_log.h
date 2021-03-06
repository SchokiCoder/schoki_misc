/*
	schoki_misc
	Copyright (C) 2022	Andy Frank Schoknecht

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef SM_LOG_H
#define SM_LOG_H

#include <stdio.h>

#define SM_PATH_LOG "log.txt"

extern FILE *SM_logfile;

void SM_log_open( void );

void SM_log_err( const char *msg );

void SM_log_warn( const char *msg );

void SM_log_close( void );

#endif // SM_LOG_H
