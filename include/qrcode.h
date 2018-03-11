#pragma once

#include <cstdint> // uint32_t

namespace qr {
    enum ErrorCorrection {
        Low,        // 7% percentage of codewords can be restored
        Medium,     // 15%
        Quartile,   // 25%
        High,       // 30%
    };

    class QRcode {
        int version;            // version of the symbol
        int width;              // width of the symbol
        unsigned char * data;   // symbol data

    public:
        static QRcode * encodeBinary(const void * data, uint32_t length);

        QRcode();
        ~QRcode();
    };
}
