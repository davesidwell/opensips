/*
 * Copyright (C) 2014 OpenSIPS Solutions
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * --------
 *  2014-10-30 initial version (liviu)
 */

#include "t_funcs.h"

int t_ctx_register_int(void)
{
	return __context_register_int(CONTEXT_TRAN);
}

int t_ctx_register_str(void)
{
	return __context_register_str(CONTEXT_TRAN);
}

int t_ctx_register_ptr(void)
{
	return __context_register_ptr(CONTEXT_TRAN);
}

void t_ctx_put_int(struct cell *t, int pos, int data)
{
	__context_put_int(CONTEXT_TRAN, context_of(t), pos, data);
}

void t_ctx_put_str(struct cell *t, int pos, str *data)
{
	__context_put_str(CONTEXT_TRAN, context_of(t), pos, data);
}

void t_ctx_put_ptr(struct cell *t, int pos, void *data)
{
	__context_put_ptr(CONTEXT_TRAN, context_of(t), pos, data);
}

int t_ctx_get_int(struct cell *t, int pos)
{
	return __context_get_int(CONTEXT_TRAN, context_of(t), pos);
}

str *t_ctx_get_str(struct cell *t, int pos)
{
	return __context_get_str(CONTEXT_TRAN, context_of(t), pos);
}

void *t_ctx_get_ptr(struct cell *t, int pos)
{
	return __context_get_ptr(CONTEXT_TRAN, context_of(t), pos);
}
