#include "print.h"

#include <cstdio> // printf

namespace qr {
    void print(QRcode * qrcode) {
        if (qrcode != nullptr) {
            int i = 0;
            bool black = false;

#define BLACK(s)                            \
            do {                            \
                if (!black) {               \
                    black = true;           \
                    printf("\033[7m" s);    \
                } else {                    \
                    printf(s);              \
                }                           \
            } while (false)
#define WHITE(s)                            \
            do {                            \
                if (black) {                \
                    black = false;          \
                    printf("\033[0m" s);    \
                } else {                    \
                    printf(s);              \
                }                           \
            } while (false)

            for (int y = 0; y < qrcode->width + 2; ++y) {
                BLACK("  ");
            }
            printf("\n");

            for (int y = 0; y < qrcode->width; ++y) {
                BLACK("  ");

                for (int x = 0; x < qrcode->width; ++x) {
                    if (qrcode->data[i] & 1) {
                        WHITE("  ");
                    } else {
                        BLACK("  ");
                    }

                    ++i;
                }

                BLACK("  \n");
            }

            for (int y = 0; y < qrcode->width + 2; ++y) {
                BLACK("  ");
            }

            // Reset
            printf("\033[0m\n");

#undef WHITE
#undef BLACK
        }
    }
}
