//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef __ELASTOSX_XML_DATATYPE_FACTORYFINDER_H__
#define __ELASTOSX_XML_DATATYPE_FACTORYFINDER_H__

#include "Object.h"

using Elastos::Core::Object;
using Elastos::Core::IClassLoader;

namespace Elastosx {
namespace Xml {
namespace Datatype {

class FactoryFinder
{
public:
    static CARAPI NewInstance(
        /* [in] */ const String& clsName,
        /* [in] */ IClassLoader* loader,
        /* [out] */ IInterface** obj);

    static CARAPI Find(
        /* [in] */ const String& factoryId,
        /* [in] */ const String& fallbackClassName,
        /* [out] */ IInterface** obj);

private:
    FactoryFinder();

    static CARAPI FindClassLoader(
        /* [in] */ const String& clsName,
        /* [out] */ IClassLoader** pLoader);

private:
    /** <p>Cache properties for performance.</p> */
    // static AutoPtr<IProperties> sCacheProps;

    /** <p>First time requires initialization overhead.</p> */
    static Boolean sFirstTime;

    /** Default columns per line. */
    static const Int32 DEFAULT_LINE_LENGTH;
};

} // namespace Datatype
} // namespace Xml
} // namespace Elastosx

#endif
