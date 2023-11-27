//
//   Copyright 2023  Rivos Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

// This table is used my different functions of the log and exponential family
#include <stdint.h>

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

