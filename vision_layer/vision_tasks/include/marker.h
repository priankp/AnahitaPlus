#ifndef MARKER_H
#define MARKER_H

#include "base_class.h"

class Marker : public Base_class
{
public:
    Marker();
    ~Marker();
    virtual void loadParams () override;
    virtual void spinThreadFront () override;
    virtual void spinThreadBottom () override;

private:
    image_transport::Publisher front_roi_pub;
};

#endif // MARKER_H
