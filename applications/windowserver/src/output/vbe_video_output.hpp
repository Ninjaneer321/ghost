/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Ghost, a micro-kernel based operating system for the x86 architecture    *
 *  Copyright (C) 2015, Max Schlüssel <lokoxe@gmail.com>                     *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __VBE_VIDEO_OUTPUT__
#define __VBE_VIDEO_OUTPUT__

#include "configuration_based_video_output.hpp"
#include <ghostuser/graphics/vbe.hpp>

/**
 *
 */
class vbe_video_output_t: public configuration_based_video_output_t {
private:
	g_vbe_mode_info video_mode_information;

public:
	/**
	 * @see base
	 */
	virtual bool initialize_with_settings(uint32_t width, uint32_t height, uint32_t bits);

	/**
	 * @see base
	 */
	virtual void blit(g_rectangle invalid, g_rectangle sourceSize, g_color_argb* source);

	/**
	 * @see base
	 */
	virtual g_dimension getResolution();

};

#endif
