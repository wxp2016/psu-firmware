/*
 * EEZ PSU Firmware
 * Copyright (C) 2015 Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "psu.h"
#include "gui_edit_mode.h"

namespace eez {
namespace psu {
namespace gui {
namespace edit_mode_slider {

int scale_width;
float scale_height;

static int start_y;
static float start_value;

static int last_scale;

////////////////////////////////////////////////////////////////////////////////

void onTouchDown() {
    start_value = edit_mode::getEditValue().getFloat();
    start_y = touch::y;

    last_scale = 1;
}

void onTouchMove() {
    float min = edit_mode::getMin().getFloat();
    float max = edit_mode::getMax().getFloat();

    int scale;

    int x = (touch::x / 20) * 20;
    if (x < scale_width) {
        scale = 1;
    }
    else {
        int num_bars = (max - min) >= 10 ? 9 : 5;
        int bar_width = (240 - scale_width) / num_bars;
        scale = 1 << (1 + (x - scale_width) / bar_width);
    }

    if (scale != last_scale) {
        start_value = edit_mode::getEditValue().getFloat();
        start_y = touch::y;
        last_scale = scale;
    }

    float value = start_value + (start_y - touch::y) * (max - min) / (scale * scale_height);

    if (value < min) {
        value = min;
    }
    if (value > max) {
        value = max;
    }

    edit_mode::setValue(value);
}

void onTouchUp() {
}

}
}
}
} // namespace eez::psu::gui::edit_mode_slider