/*
    Copyright (C) 2020 Fredrik Johansson

    This file is part of Calcium.

    Calcium is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "ca.h"

truth_t
ca_check_equal(const ca_t x, const ca_t y, ca_ctx_t ctx)
{
    if (x->field == CA_FIELD_ID_QQ && y->field == CA_FIELD_ID_QQ)
    {
        return fmpq_equal(CA_FMPQ(x), CA_FMPQ(y)) ? T_TRUE : T_FALSE;
    }

    return T_UNKNOWN;
}

