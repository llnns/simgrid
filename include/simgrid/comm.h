/* Copyright (c) 2018-2020. The SimGrid Team. All rights reserved.          */

/* This program is free software; you can redistribute it and/or modify it
 * under the terms of the license (GNU LGPL) which comes with this package. */

#ifndef INCLUDE_SIMGRID_COMM_H_
#define INCLUDE_SIMGRID_COMM_H_

#include <simgrid/forward.h>
#include <xbt/dynar.h>

/* C interface */
SG_BEGIN_DECL

XBT_PUBLIC int sg_comm_wait_any_for(const xbt_dynar_t comms, double timeout);

SG_END_DECL

#endif /* INCLUDE_SIMGRID_COMM_H_ */