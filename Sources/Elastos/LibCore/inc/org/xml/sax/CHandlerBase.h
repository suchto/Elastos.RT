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

#ifndef __ORG_XML_SAX_CHANDLERBASE_H__
#define __ORG_XML_SAX_CHANDLERBASE_H__

#include "_Org_Xml_Sax_CHandlerBase.h"
#include "HandlerBase.h"

namespace Org {
namespace Xml {
namespace Sax {

CarClass(CHandlerBase)
    , public HandlerBase
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Sax
} // namespace Xml
} // namespace Org

#endif // __ORG_XML_SAX_CHANDLERBASE_H__
