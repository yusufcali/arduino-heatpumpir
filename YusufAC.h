#ifndef YUSUF_AC_H
#define YUSUF_AC_H

#include "HeatpumpIR.h"

class YusufAC : public HeatpumpIR {
public:
    YusufAC(uint8_t pin) : HeatpumpIR(pin) {}

    void setPower(bool on) { powerOn = on; }

    virtual void send(heatpump_setting_t settings) override;

private:
    bool powerOn = true;  // true = aç, false = kapat
};

#endif
