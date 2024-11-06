// SPDX-FileCopyrightText: 2024 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

#define NB_TEST_ARGS 63 * 3
static const double dbl_near_NPiby2_tbl[NB_TEST_ARGS] = {
    0x1.6c6cbc45dc8dep+9,   0x1.6c6cbc45dc8dep+10,  0x1.6c6cbc45dc8dep+11,
    0x1.6c6cbc45dc8dep+12,  0x1.635e3d74befcap+14,  0x1.67e57cdd4dc54p+15,
    0x1.65a1dd290660fp+16,  0x1.bf9b3c6059d24p+17,  0x1.39c6fd67805a7p+18,
    0x1.39c6fd67805a7p+19,  0x1.9eb7148f354d6p+20,  0x1.9eb7148f354d6p+20,
    0x1.d3ecce1f28274p+22,  0x1.b951f1572eba5p+23,  0x1.b951f1572eba5p+24,
    0x1.b951f1572eba5p+25,  0x1.b951f1572eba5p+26,  0x1.b951f1572eba5p+27,
    0x1.b951f1572eba5p+28,  0x1.b951f1572eba5p+29,  0x1.b951f1572eba5p+30,
    0x1.b951f1572eba5p+31,  0x1.5c9508c58aafap+32,  0x1.5c9508c58aafap+32,
    0x1.de5e5054e921bp+34,  0x1.46546a5bd73ccp+35,  0x1.46546a5bd73ccp+35,
    0x1.46546a5bd73ccp+35,  0x1.bb23eaa3db16dp+38,  0x1.065c829d68730p+39,
    0x1.065c829d68730p+39,  0x1.065c829d68730p+39,  0x1.065c829d68730p+39,
    0x1.065c829d68730p+39,  0x1.065c829d68730p+40,  0x1.065c829d68730p+41,
    0x1.f42d52c35675dp+46,  0x1.7512069b7430dp+47,  0x1.7512069b7430dp+48,
    0x1.7512069b7430dp+49,  0x1.44630cc2cad9dp+50,  0x1.5cba89af1f855p+51,
    0x1.5cba89af1f855p+52,  0x1.56a4aa740a5a7p+53,  0x1.59af9a1194efep+54,
    0x1.59af9a1194efep+54,  0x1.ae9608c734e12p+56,  0x1.ae9608c734e12p+56,
    0x1.c3cfa4749cdd7p+58,  0x1.c3cfa4749cdd7p+59,  0x1.c3cfa4749cdd7p+60,
    0x1.c3cfa4749cdd7p+61,  0x1.ed814f0220525p+62,  0x1.ed814f0220525p+63,
    0x1.a7f3bc5a7ed9ep+64,  0x1.a7f3bc5a7ed9ep+64,  0x1.a7f3bc5a7ed9ep+65,
    0x1.782b7a20df6d4p+67,  0x1.782b7a20df6d4p+67,  0x1.782b7a20df6d4p+67,
    0x1.782b7a20df6d4p+68,  0x1.782b7a20df6d4p+69,  0x1.782b7a20df6d4p+70,
    0x1.782b7a20df6d4p+71,  0x1.a4ffb379a019cp+74,  0x1.308ab84507e83p+75,
    0x1.99caa5236feeap+76,  0x1.99caa5236feeap+76,  0x1.99caa5236feeap+77,
    0x1.99caa5236feeap+78,  0x1.99caa5236feeap+79,  0x1.e0664dbedfec5p+81,
    0x1.e0664dbedfec5p+82,  0x1.e0664dbedfec5p+83,  0x1.e0664dbedfec5p+84,
    0x1.f19e5d71b26bap+85,  0x1.f19e5d71b26bap+85,  0x1.f19e5d71b26bap+86,
    0x1.f19e5d71b26bap+87,  0x1.d4ab7990f194dp+89,  0x1.66bd5424e5655p+90,
    0x1.66bd5424e5655p+91,  0x1.66bd5424e5655p+92,  0x1.66bd5424e5655p+93,
    0x1.66bd5424e5655p+94,  0x1.c3dc1a597f202p+95,  0x1.c3dc1a597f202p+95,
    0x1.c3dc1a597f202p+96,  0x1.e50fec1788957p+98,  0x1.e50fec1788957p+99,
    0x1.e50fec1788957p+100, 0x1.e50fec1788957p+101, 0x1.77d794c891d1cp+102,
    0x1.dae3a00451b5fp+103, 0x1.dae3a00451b5fp+104, 0x1.1c6cc29b3b153p+105,
    0x1.d99e1681eada0p+106, 0x1.d99e1681eada0p+106, 0x1.d99e1681eada0p+106,
    0x1.d99e1681eada0p+106, 0x1.d99e1681eada0p+106, 0x1.d99e1681eada0p+106,
    0x1.f8d36a8915598p+112, 0x1.ae04fdb542be8p+113, 0x1.ae04fdb542be8p+113,
    0x1.ae04fdb542be8p+113, 0x1.ae04fdb542be8p+113, 0x1.ae04fdb542be8p+114,
    0x1.ed82892c91569p+118, 0x1.47623428452f0p+119, 0x1.47623428452f0p+119,
    0x1.47623428452f0p+119, 0x1.f7e7a76e07787p+122, 0x1.f7e7a76e07787p+123,
    0x1.e7426933f5760p+124, 0x1.e7426933f5760p+124, 0x1.e7426933f5760p+124,
    0x1.e7426933f5760p+124, 0x1.e7426933f5760p+124, 0x1.e7426933f5760p+124,
    0x1.f91a847a07755p+130, 0x1.504cac51f1eafp+131, 0x1.504cac51f1eafp+132,
    0x1.504cac51f1eafp+133, 0x1.504cac51f1eafp+134, 0x1.504cac51f1eafp+135,
    0x1.504cac51f1eafp+136, 0x1.8a56c23d2dfe0p+137, 0x1.8a56c23d2dfe0p+137,
    0x1.b2e25ce13d6a7p+139, 0x1.e42d3528e32a3p+140, 0x1.fcd2a14cb60a1p+141,
    0x1.fcd2a14cb60a1p+142, 0x1.5ad5a62cb1cc9p+143, 0x1.5ad5a62cb1cc9p+144,
    0x1.5ad5a62cb1cc9p+145, 0x1.5ad5a62cb1cc9p+146, 0x1.f1cdf37f20ff1p+147,
    0x1.a651ccd5e965dp+148, 0x1.a651ccd5e965dp+149, 0x1.b930d680374c2p+150,
    0x1.b930d680374c2p+150, 0x1.b930d680374c2p+151, 0x1.b930d680374c2p+152,
    0x1.641bcd12e3311p+154, 0x1.205a1c297f6b9p+155, 0x1.205a1c297f6b9p+156,
    0x1.205a1c297f6b9p+157, 0x1.17e1e60c52f2ep+158, 0x1.17e1e60c52f2ep+158,
    0x1.ee076da427656p+160, 0x1.82f4a9d83d2c2p+161, 0x1.82f4a9d83d2c2p+161,
    0x1.682ff8e5429ddp+163, 0x1.682ff8e5429ddp+164, 0x1.682ff8e5429ddp+165,
    0x1.682ff8e5429ddp+166, 0x1.cca7515e2585cp+167, 0x1.cca7515e2585cp+167,
    0x1.bdf4d57f7f0c4p+169, 0x1.c54e136ed2490p+170, 0x1.c54e136ed2490p+170,
    0x1.c54e136ed2490p+170, 0x1.fc218660d7c2fp+173, 0x1.fc218660d7c2fp+174,
    0x1.d28d5c4c5e73bp+175, 0x1.d28d5c4c5e73bp+176, 0x1.d28d5c4c5e73bp+177,
    0x1.2722f5d698acep+178, 0x1.2722f5d698acep+178, 0x1.2722f5d698acep+179,
    0x1.76e1ee2edd343p+181, 0x1.0539b48d14c55p+182, 0x1.0539b48d14c55p+183,
    0x1.0539b48d14c55p+184, 0x1.0539b48d14c55p+185, 0x1.6014d4a7e0086p+186,
    0x1.b5441ee104c98p+187, 0x1.b5441ee104c98p+187, 0x1.f7fd817cb39b5p+189,
    0x1.f7fd817cb39b5p+190, 0x1.bb4c8e40cbe5dp+191, 0x1.bb4c8e40cbe5dp+192,
    0x1.3ecf49b990c61p+193, 0x1.0090a775f3363p+194, 0x1.1faff897c1fe2p+195,
    0x1.1faff897c1fe2p+195, 0x1.e7e44a78ac18cp+197, 0x1.e7e44a78ac18cp+197};
