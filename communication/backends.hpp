/*
 * gtbench
 *
 * Copyright (c) 2014-2020, ETH Zurich
 * All rights reserved.
 *
 * Please, refer to the LICENSE file in the root directory.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#pragma once

#include "./single_node.hpp"

#ifdef GTBENCH_USE_GHEX
#include "./ghex_comm.hpp"
#endif

#ifdef GTBENCH_USE_GCL
#include "./gcl.hpp"
#endif

#ifdef GTBENCH_USE_SIMPLE_MPI
#include "./simple_mpi.hpp"
#endif