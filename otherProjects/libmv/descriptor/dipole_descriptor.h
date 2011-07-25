// Copyright (c) 2010 libmv authors.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#ifndef LIBMV_DESCRIPTOR_DIPOLE_DESCRIPTOR_H
#define LIBMV_DESCRIPTOR_DIPOLE_DESCRIPTOR_H

namespace libmv {
namespace descriptor {

class Describer;

/**
 * Creates a DIPOLE describer.
 * Implementation of :
 * [1] A. Joly. New local descriptor based on dissociated dipoles.
 * In CIVR, pages 573-580, 2007.
 * Naive implementation : Use native image instead of gaussian smoothed image.
 */
Describer *CreateDipoleDescriber();

}  // namespace descriptor
}  // namespace libmv

#endif  // LIBMV_DESCRIPTOR_DIPOLE_DESCRIPTOR_H
