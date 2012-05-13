/*
 * MARSSx86 : A Full System Computer-Architecture Simulator
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * Copyright 2009 Avadh Patel <apatel@cs.binghamton.edu>
 * Copyright 2009 Furat Afram <fafram@cs.binghamton.edu>
 *
 */

#ifndef CACHECONSTANTS_H
#define CACHECONSTANTS_H
namespace Memory{

  enum CacheType {
    L1_I_CACHE,
    L1_D_CACHE,
    L2_CACHE,
    L3_CACHE,
                MAIN_MEMORY
  };

  const int REQUEST_POOL_SIZE = 2048;
  const double REQUEST_POOL_LOW_RATIO = 0.1;

	const int REQUEST_POOL_SIZE = 1024;
	const double REQUEST_POOL_LOW_RATIO = 0.1;

  // L1D: 32KB
  const int L1D_LINE_SIZE = 64;
  const int L1D_SET_COUNT = 128;
  const int L1D_WAY_COUNT = 4;
  const int L1D_DCACHE_BANKS = 8;
  const int L1D_LATENCY   = 3;
  const int L1D_READ_PORT = 2;
  const int L1D_WRITE_PORT = 3;

  // L1I: 32KB
//  const int L1I_LINE_SIZE = 64;
//  const int L1I_SET_COUNT = 128;
//  const int L1I_WAY_COUNT = 4;
//  const int L1I_LATENCY   = 3;
//  const int L1I_READ_PORT = 2;
//  const int L1I_WRITE_PORT = 1;
//
//  // L2: 256KB
//  const int L2_LINE_SIZE = 64;
//  const int L2_SET_COUNT = 512;
//  const int L2_WAY_COUNT = 8;
//  const int L2_LATENCY   = 5;
//  const int L2_REQ_NUM = 16;
//  const int L2_READ_PORT = 2;
//  const int L2_WRITE_PORT = 2;
//
//  // L2: 2MB
//  /*
//  const int L2_LINE_SIZE = 64;
//  const int L2_SET_COUNT = 4096;
//  const int L2_WAY_COUNT = 8;
//  const int L2_LATENCY   = 6;
//  const int L2_REQ_NUM = 16;
//  const int L2_READ_PORT = 2;
//  const int L2_WRITE_PORT = 2;
//  */
//
//  // L3: 8MB
//  const int L3_LINE_SIZE = 64;
//  const int L3_SET_COUNT = 8192;
//  const int L3_WAY_COUNT = 16;
//  const int L3_LATENCY   = 12;
//  const int L3_READ_PORT = 2;
//  const int L3_WRITE_PORT = 1;
//
//  // Main Memory
//  const int MEM_REQ_NUM = 64;
//  const int MEM_BANKS = 8;
//  const int MEM_LATENCY = 100;
//
//  // Bus Dealys
//  const int BUS_ARBITRATE_DELAY = 1;
//  const int BUS_BROADCASTS_DELAY = 6;
	// Main Memory
	const int MEM_REQ_NUM = 64;
	const int MEM_BANKS = 8;

  // Average wait dealy for retrying (general)
  const int AVG_WAIT_DELAY = 5;
}
#endif // CACHECONSTANTS_H
