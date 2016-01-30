/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2016, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */
#pragma once
#include <mrpt/maps/COctoMapBase.h>
MRPT_WARNING("*Deprecated header* Please replace with #include <mrpt/maps/COctoMapBase.h>. This backward compatible header will be removed in MRPT 2.0.0")
namespace mrpt { namespace slam {
	using mrpt::maps::COctoMapBase;    //!< Backward compatibility
	using mrpt::maps::COctoMapBasePtr; //!< Backward compatibility
} }
