#define LV_SLIDER_KNOB_COORD(hor, is_rtl, area) (hor ? (is_rtl ? area.x1 : area.x2) : (is_rtl ? area.y1 : area.y2))
