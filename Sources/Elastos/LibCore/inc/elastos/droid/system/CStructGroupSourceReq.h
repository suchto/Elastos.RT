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

#ifndef __ELASTOS_DROID_SYSTEM_CSTRUCTGROUPSOURCEREQ_H__
#define __ELASTOS_DROID_SYSTEM_CSTRUCTGROUPSOURCEREQ_H__

#include "Elastos.CoreLibrary.Net.h"
#include "core/Object.h"
#include "_Elastos_Droid_System_CStructGroupSourceReq.h"

using Elastos::Net::IInetAddress;

namespace Elastos {
namespace Droid {
namespace System {

CarClass(CStructGroupSourceReq)
    , public Object
    , public IStructGroupSourceReq
{
public:
    CAR_OBJECT_DECL()

    CAR_INTERFACE_DECL()

    CARAPI constructor(
        /* [in] */ Int32 itf,
        /* [in] */ IInetAddress* group,
        /* [in] */ IInetAddress* source);

    CARAPI GetGsrInterface(
        /* [out] */ Int32* itf);

    CARAPI GetGsrGroup(
        /* [out] */ IInetAddress** group);

    CARAPI GetGsrSource(
        /* [out] */ IInetAddress** source);

private:
    Int32 gsr_interface;
    AutoPtr<IInetAddress> gsr_group;
    AutoPtr<IInetAddress> gsr_source;
};

}// namespace System
}// namespace Droid
}// namespace Elastos


#endif
