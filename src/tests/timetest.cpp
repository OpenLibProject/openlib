/****************************************************************************
Copyright (c) 2016, OpenLib Project
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
****************************************************************************/
#include <gtest/gtest.h>

#include <openlib/time.hpp>

const static double ALLOWED_ERROR = 0.001;

TEST(ElapsedTime, isContructable) {
  openlib::ElapsedTime time;
  // this test passes if it compiles
}

TEST(ElapsedTime, startTimeDefaultsToZero) {
  openlib::ElapsedTime time;
  EXPECT_NEAR(0.0, time.startTime(), ALLOWED_ERROR);
}

TEST(ElapsedTime, resetSetsTime) {
  openlib::ElapsedTime time;
  time.reset();
  EXPECT_GT(time.startTime(), 0.0);
}

TEST(ElapsedTime, timeReturnsValue) {
  openlib::ElapsedTime time;

  EXPECT_GT(time.time(), 0.01);

  time.reset();
  EXPECT_NEAR(time.time(), 0.0, 0.01);
}
