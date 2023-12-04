// SPDX-FileCopyrightText: 2023 Rivos Inc.
//
// SPDX-License-Identifier: Apache-2.0

// This table is used my different functions of the log and exponential family
#include <stdint.h>

const extern double logtbl_4_powD_128_hi_lo[256] = {
  0x0.0p+0, 0x0.0p+0, 0x1.16a21e20c0000p-6, -0x1.f5baf436cbec7p-42,
  0x1.d23afc4900000p-6, 0x1.39f89bcdae7bdp-42, 0x1.47aa073580000p-5, -0x1.1f61a96b8ce77p-42,
  0x1.a6f9c377e0000p-5, -0x1.672b0c88d4dd6p-44, 0x1.0387efbcb0000p-4, -0x1.e5897de9078d1p-42,
  0x1.1bb32a6000000p-4, 0x1.52743318a8a57p-42, 0x1.4c560fe690000p-4, -0x1.41dfc7d7c3321p-42,
  0x1.7d60496d00000p-4, -0x1.12ce6312ebb82p-42, 0x1.aed391ab60000p-4, 0x1.9d3940238de7fp-42,
  0x1.c7b528b710000p-4, -0x1.c760bc9b188c4p-45, 0x1.f9c95dc1d0000p-4, 0x1.164e932b2d51cp-44,
  0x1.1625931870000p-3, -0x1.2c81df0fdbc29p-42, 0x1.22dadc2ab0000p-3, 0x1.a4b69691d7994p-42,
  0x1.3c6fb650d0000p-3, -0x1.0d7af4dda9c36p-42, 0x1.563dc29ff8000p-3, 0x1.6590643906f2ap-42,
  0x1.633a8bf438000p-3, -0x1.8f7aac147fdc1p-46, 0x1.7d60496cf8000p-3, 0x1.da6339da288fcp-42,
  0x1.8a8980abf8000p-3, 0x1.e9933354dbf17p-42, 0x1.a5094b54d0000p-3, 0x1.41420276dd59dp-42,
  0x1.b2602497d8000p-3, -0x1.65d3990cb67bap-42, 0x1.cd3c712d30000p-3, 0x1.109325dd5e814p-43,
  0x1.dac22d3e48000p-3, -0x1.f1680dd458fb2p-42, 0x1.f5fd8a9060000p-3, 0x1.f1a4847f7b278p-42,
  0x1.01d9bbcfa8000p-2, -0x1.e2ba25d9aeffdp-42, 0x1.0fa848044c000p-2, -0x1.95def21f8497bp-43,
  0x1.169c053640000p-2, -0x1.d4f1b95e0ff45p-43, 0x1.1d982c9d54000p-2, -0x1.8f7ca2cff7b90p-42,
  0x1.2baa0c34c0000p-2, -0x1.e1410132ae5e4p-42, 0x1.32bfee3710000p-2, -0x1.1979a5db68722p-42,
  0x1.39de8e1558000p-2, 0x1.f6f7f2b4bd1c4p-42, 0x1.48365e695c000p-2, 0x1.796aa2981fdbcp-42,
  0x1.4f6fbb2cec000p-2, 0x1.661e393a16b95p-44, 0x1.56b22e6b58000p-2, -0x1.c6d8d86531d56p-44,
  0x1.5dfdcf1eec000p-2, -0x1.1f1bbd2926f16p-42, 0x1.6cb0f6865c000p-2, 0x1.1d406db502403p-43,
  0x1.7418acebc0000p-2, -0x1.ce2935fff809ap-43, 0x1.7b89f02cf4000p-2, -0x1.552ce0ec3a295p-42,
  0x1.8304d90c10000p-2, 0x1.fd32a3ab0a4b5p-42, 0x1.8a8980abfc000p-2, -0x1.66cccab240e90p-45,
  0x1.99b072a96c000p-2, 0x1.ac9bca36fd02ep-44, 0x1.a152f14298000p-2, 0x1.b3d7b0e65d2cep-46,
  0x1.a8ff971810000p-2, 0x1.4bc302ffa76fbp-43, 0x1.b0b67f4f48000p-2, -0x1.7f00af09dc1c7p-42,
  0x1.b877c57b1c000p-2, -0x1.f20203b3186a6p-43, 0x1.c043859e30000p-2, -0x1.2642415d47384p-45,
  0x1.c819dc2d44000p-2, 0x1.fe43895d8ac46p-42, 0x1.cffae611ac000p-2, 0x1.12b628e2d05d7p-42,
  0x1.d7e6c0abc4000p-2, -0x1.50e785694a8c6p-43, 0x1.dfdd89d588000p-2, -0x1.1d4f639bb5cdfp-42,
  0x1.e7df5fe538000p-2, 0x1.5669df6a2b592p-43, 0x1.efec61b010000p-2, 0x1.f855b4987c5d5p-42,
  0x1.f804ae8d0c000p-2, 0x1.a0331af2e6feap-43, 0x1.0014332be0000p-1, 0x1.9518ce032f41dp-48,
  0x1.042bd4b9a8000p-1, -0x1.b3b3864c60011p-44, 0x1.08494c66b8000p-1, 0x1.ddf82e1fe57c7p-42,
  0x1.0c6caaf0c6000p-1, -0x1.4d20c519e12f4p-42, 0x1.1096015dee000p-1, 0x1.3676289cd3dd4p-43,
  0x1.14c560fe68000p-1, 0x1.5f101c141e670p-42, 0x1.18fadb6e2e000p-1, -0x1.87cc95d0a2ee8p-42,
  0x1.1d368296b6000p-1, -0x1.b567e7ee54aefp-42, 0x1.217868b0c4000p-1, -0x1.030ab442ce320p-42,
  0x1.25c0a0463c000p-1, -0x1.50520a377c7ecp-45, 0x1.2a0f3c3408000p-1, -0x1.f48e1a4725559p-42,
  -0x1.a33760a7f8000p-2, 0x1.faf6283bf2868p-42, -0x1.9a802391e4000p-2, 0x1.cd0cb4492f1bcp-42,
  -0x1.91bba891f0000p-2, -0x1.708b4b2b5056cp-42, -0x1.91bba891f0000p-2, -0x1.708b4b2b5056cp-42,
  -0x1.88e9c72e0c000p-2, 0x1.bb4b69336b66ep-43, -0x1.800a563160000p-2, -0x1.c5432aeb609f5p-42,
  -0x1.771d2ba7f0000p-2, 0x1.3106e404cabb7p-44, -0x1.6e221cd9d0000p-2, -0x1.9bcaf1aa4168ap-43,
  -0x1.6518fe4678000p-2, 0x1.1646b761c48dep-44, -0x1.6518fe4678000p-2, 0x1.1646b761c48dep-44,
  -0x1.5c01a39fbc000p-2, -0x1.6879fa00b120ap-42, -0x1.52dbdfc4c8000p-2, -0x1.6b37dcf60e620p-42,
  -0x1.49a784bcd0000p-2, -0x1.b8afe492bf6ffp-42, -0x1.406463b1b0000p-2, -0x1.125d6cbcd1095p-44,
  -0x1.406463b1b0000p-2, -0x1.125d6cbcd1095p-44, -0x1.37124cea4c000p-2, -0x1.bd9b32266d92cp-43,
  -0x1.2db10fc4d8000p-2, -0x1.aaf6f137a3d8cp-42, -0x1.24407ab0e0000p-2, -0x1.ce60916e52e91p-44,
  -0x1.24407ab0e0000p-2, -0x1.ce60916e52e91p-44, -0x1.1ac05b2920000p-2, 0x1.f1f5ae718f241p-43,
  -0x1.11307dad30000p-2, -0x1.6eb9612e0b4f3p-43, -0x1.0790adbb04000p-2, 0x1.fed21f9cb2cc5p-43,
  -0x1.0790adbb04000p-2, 0x1.fed21f9cb2cc5p-43, -0x1.fbc16b9028000p-3, 0x1.7f5dc57266758p-43,
  -0x1.e840be74e8000p-3, 0x1.5b338360c2ae2p-43, -0x1.e840be74e8000p-3, 0x1.5b338360c2ae2p-43,
  -0x1.d49ee4c328000p-3, 0x1.3481b85a54d7fp-42, -0x1.c0db6cdd98000p-3, 0x1.908df8ec933b3p-42,
  -0x1.c0db6cdd98000p-3, 0x1.908df8ec933b3p-42, -0x1.acf5e2db50000p-3, 0x1.36c101ee13440p-43,
  -0x1.98edd077e8000p-3, 0x1.e41fa0a62e6aep-44, -0x1.98edd077e8000p-3, 0x1.e41fa0a62e6aep-44,
  -0x1.84c2bd02f0000p-3, -0x1.d97ee9124773bp-46, -0x1.70742d4ef0000p-3, -0x1.3f94e00e7d6bcp-46,
  -0x1.70742d4ef0000p-3, -0x1.3f94e00e7d6bcp-46, -0x1.5c01a39fc0000p-3, 0x1.4bc302ffa76fbp-42,
  -0x1.476a9f9840000p-3, 0x1.1659d8e2d7d38p-44, -0x1.476a9f9840000p-3, 0x1.1659d8e2d7d38p-44,
  -0x1.32ae9e2788000p-3, -0x1.70d0fa8f9603bp-42, -0x1.32ae9e2788000p-3, -0x1.70d0fa8f9603bp-42,
  -0x1.1dcd197550000p-3, -0x1.5bdaf522a183cp-42, -0x1.08c588cda8000p-3, 0x1.871a7610e40bdp-45,
  -0x1.08c588cda8000p-3, 0x1.871a7610e40bdp-45, -0x1.e72ec11800000p-4, 0x1.69378d0928989p-42,
  -0x1.e72ec11800000p-4, 0x1.69378d0928989p-42, -0x1.bc84240ae0000p-4, 0x1.51167134e9647p-42,
  -0x1.918a16e460000p-4, -0x1.9ad57391924a7p-43, -0x1.918a16e460000p-4, -0x1.9ad57391924a7p-43,
  -0x1.663f6fac90000p-4, -0x1.3167ccc538261p-44, -0x1.663f6fac90000p-4, -0x1.3167ccc538261p-44,
  -0x1.3aa2fdd280000p-4, 0x1.c7a4ff65ddbc9p-45, -0x1.3aa2fdd280000p-4, 0x1.c7a4ff65ddbc9p-45,
  -0x1.0eb389fa30000p-4, 0x1.819530c22d152p-42, -0x1.c4dfab90a0000p-5, -0x1.56bde9f1f0d3dp-42,
  -0x1.c4dfab90a0000p-5, -0x1.56bde9f1f0d3dp-42, -0x1.6bad3758e0000p-5, -0x1.fb0e626c0de13p-42,
  -0x1.6bad3758e0000p-5, -0x1.fb0e626c0de13p-42, -0x1.11cd1d5140000p-5, 0x1.97da24fd75f61p-42,
  -0x1.11cd1d5140000p-5, 0x1.97da24fd75f61p-42, -0x1.6e79685c40000p-6, 0x1.2dd67591d81dfp-42,
  -0x1.6e79685c40000p-6, 0x1.2dd67591d81dfp-42, -0x1.6fe50b6f00000p-7, 0x1.ef5d00e390a00p-44,
  -0x1.6fe50b6f00000p-7, 0x1.ef5d00e390a00p-44, 0x0.0p+0, 0x0.0p+0
};









const extern int64_t logD_tbl128_fixedpt[128] = {
  0x0, 0x22d443c414148a1, 0x3a475f892273f13, 0x51ea81cd5dc13cb,
  0x69be70ddf74c6a8, 0x81c3f7de5434ed0, 0x8dd9953002a4e86, 0xa62b07f3457c407,
  0xbeb024b67dda634, 0xd769c8d5b33a728, 0xe3da945b878e27d, 0xfce4aee0e88b275,
  0x1162593186da6fc4, 0x122dadc2ab3496d3, 0x13c6fb650cde50a1, 0x1563dc29ffacb20d,
  0x1633a8bf437ce10b, 0x17d60496cfbb4c67, 0x18a8980abfbd3266, 0x1a5094b54d282840,
  0x1b2602497d53458d, 0x1cd3c712d3110932, 0x1dac22d3e441d2fe, 0x1f5fd8a9063e3491,
  0x203b3779f4c3a8bb, 0x21f509008966a211, 0x22d380a6c7e2b0e4, 0x23b30593aa4e106c,
  0x2575418697c3d7e0, 0x2657fdc6e1dcd0cb, 0x273bd1c2ab3edefe, 0x2906cbcd2baf2d54,
  0x29edf7659d8b30f2, 0x2ad645cd6af1c939, 0x2bbfb9e3dd5c1c88, 0x2d961ed0cb91d407,
  0x2e83159d77e31d6d, 0x2f713e059e555a64, 0x30609b21823fa654, 0x315130157f7a64cd,
  0x33360e552d8d64de, 0x342a5e28530367af, 0x351ff2e30214bc30, 0x3616cfe9e8d01fea,
  0x370ef8af6360dfe0, 0x380870b3c5fb66f7, 0x39033b85a8bfc871, 0x39ff5cc235a256c5,
  0x3afcd815786af188, 0x3bfbb13ab0dc5614, 0x3cfbebfca715669e, 0x3dfd8c36023f0ab7,
  0x3f0095d1a19a0332, 0x40050ccaf800ca8c, 0x410af52e69f26264, 0x42125319ae3bbf06,
  0x431b2abc31565be7, 0x442580577b936763, 0x4531583f9a2be204, 0x463eb6db8b4f066d,
  0x474da0a5ad495303, 0x485e1a2c30df9ea9, 0x497028118efabeb8, 0x4a83cf0d01c16e3d,
  -0x3466ec14fec0a13b, -0x335004723c465e69, -0x323775123e2e1169, -0x323775123e2e1169,
  -0x311d38e5c1644b49, -0x30014ac62c38a865, -0x2ee3a574fdf677c9, -0x2dc4439b3a19bcaf,
  -0x2ca31fc8cef74dca, -0x2ca31fc8cef74dca, -0x2b803473f7ad0f3f, -0x2a5b7bf8992d66fc,
  -0x2934f0979a3715fd, -0x280c8c76360892eb, -0x280c8c76360892eb, -0x26e2499d499bd9b3,
  -0x25b621f89b355ede, -0x24880f561c0e7305, -0x24880f561c0e7305, -0x23580b6523e0e0a5,
  -0x22260fb5a616eb96, -0x20f215b7606012de, -0x20f215b7606012de, -0x1fbc16b902680a24,
  -0x1e840be74e6a4cc8, -0x1e840be74e6a4cc8, -0x1d49ee4c32596fc9, -0x1c0db6cdd94dee41,
  -0x1c0db6cdd94dee41, -0x1acf5e2db4ec93f0, -0x198edd077e70df03, -0x198edd077e70df03,
  -0x184c2bd02f03b2fe, -0x170742d4ef027f2a, -0x170742d4ef027f2a, -0x15c01a39fbd687a0,
  -0x1476a9f983f74d31, -0x1476a9f983f74d31, -0x132ae9e278ae1a1f, -0x132ae9e278ae1a1f,
  -0x11dcd197552b7b5f, -0x108c588cda79e396, -0x108c588cda79e396, -0xf397608bfd2d90e,
  -0xf397608bfd2d90e, -0xde4212056d5dd32, -0xc8c50b72319ad57, -0xc8c50b72319ad57,
  -0xb31fb7d64898b3e, -0xb31fb7d64898b3e, -0x9d517ee93f8e16c, -0x9d517ee93f8e16c,
  -0x8759c4fd14fcd5a, -0x7137eae42aad7bd, -0x7137eae42aad7bd, -0x5aeb4dd63bf61cc,
  -0x5aeb4dd63bf61cc, -0x447347544cd04bb, -0x447347544cd04bb, -0x2dcf2d0b85a4531,
  -0x2dcf2d0b85a4531, -0x16fe50b6ef08518, -0x16fe50b6ef08518, 0x0
};

