/*
 * @(#)JDWP.h	1.28 01/12/03
 *
 * Copyright 2002 Sun Microsystems, Inc. All rights reserved.
 * SUN PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */
#include "JDWPCommands.h"

/*                         
 * JDWPCommands.h is the javah'ed version of all the constants defined
 * com.sun.tools.jdi.JDWP and all its nested classes. Since the names are
 * very long, the macros below are provided for convenience.
 */
 
#define JDWP_COMMAND_SET(name) JDWP_ ## name 
#define JDWP_COMMAND(set, name) JDWP_ ## set ## _ ## name
#define JDWP_REQUEST_MODIFIER(name) \
           JDWP_EventRequest_Set_Out_modifiers_Modifier_ ## name
#define JDWP_EVENT(name) \
           JDWP_EventKind_ ## name 
#define JDWP_ERROR(name) JDWP_Error_ ## name

#define JDWP_HIGHEST_COMMAND_SET 17
#define JDWP_REQUEST_NONE        -1

