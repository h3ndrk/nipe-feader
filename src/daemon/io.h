/**
 * Copyright (C) 2015 NIPE-SYSTEMS
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IO_H__
#define __IO_H__

#define IO_TEMPDIR_NAME "/tmp/nipe-feader-XXXXXX"
#define IO_TEMPFILE_NAME "XXXXXX"

struct _io_temp_file_t
{
	struct _io_temp_file_t *next;
	char *path;
	FILE *fp;
	char fp_open;
};
typedef struct _io_temp_file_t io_temp_file_t;

int io_write(char *path, char *data, size_t length);
int io_mk_tempdir(void);
void io_mk_tempdir_cleanup(void);
FILE *io_open_new_tempfile(void);
void io_create_pid_file(void);
void io_pid_file_cleanup(void);

#endif /* __IO_H__ */
