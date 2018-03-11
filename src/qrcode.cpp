#include "qrcode.h"

namespace qr {
    QRcode * QRcode::encodeBinary(const void * data, uint32_t length) {
        return nullptr;
    }

    QRcode::QRcode() : version(0), width(0), data(nullptr) {}

    QRcode::~QRcode() {
        delete data;
    }
}
