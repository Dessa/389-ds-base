/** BEGIN COPYRIGHT BLOCK
 * Copyright (C) 2001 Sun Microsystems, Inc. Used by permission.
 * Copyright (C) 2005 Red Hat, Inc.
 * All rights reserved.
 *
 * License: GPL (version 3 or any later version).
 * See LICENSE for details. 
 * END COPYRIGHT BLOCK **/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

 
#include "slapi-plugin.h"
#include "repl.h"

/* The modify operation plugin functions for the legacy replication plugin */

int
legacy_preop_modify( Slapi_PBlock *pb )
{
    return legacy_preop( pb, "legacy_preop_modify", OP_MODIFY );
}

int
legacy_bepreop_modify( Slapi_PBlock *pb __attribute__((unused)))
{
    int rc= 0; /* OK */
    return rc;
}

int
legacy_postop_modify( Slapi_PBlock *pb )
{
    return legacy_postop( pb, "legacy_postop_modify", OP_MODIFY );
}