#ifndef LCVARC_H
#define LCVARC_H

#include "lcvdrawitem.h"
#include "cad/primitive/arc.h"

class LCVArc: public LCVDrawItem, public lc::Arc {
public:
    LCVArc(const lc::Arc_CSPtr circle);

    virtual void draw(LcPainter* painter, LcDrawOptions* options, const lc::geo::Area& rect) const;
};
#endif // LCVARC_H
