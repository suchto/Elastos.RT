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

#ifndef __ELASTOSX_NET_SSL_CTRUSTMANAGERFACTORYHELPER_H__
#define __ELASTOSX_NET_SSL_CTRUSTMANAGERFACTORYHELPER_H__

#include "_Elastosx_Net_Ssl_CTrustManagerFactoryHelper.h"
#include "elastos/core/Singleton.h"

using Elastos::Security::IProvider;

namespace Elastosx {
namespace Net {
namespace Ssl {

CarClass(CTrustManagerFactoryHelper)
    , public Singleton
    , public ITrustManagerFactoryHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI GetDefaultAlgorithm(
        /* [out] */ String* algorithm);

    CARAPI GetInstance(
        /* [in] */ const String& algorithm,
        /* [out] */ ITrustManagerFactory** factory);

    CARAPI GetInstance(
        /* [in] */ const String& algorithm,
        /* [in] */ const String& provider,
        /* [out] */ ITrustManagerFactory** factory);

    CARAPI GetInstance(
        /* [in] */ const String& algorithm,
        /* [in] */ IProvider* provider,
        /* [out] */ ITrustManagerFactory** factory);
};

} // namespace Ssl
} // namespace Net
} // namespace Elastosx

#endif //__ELASTOSX_NET_SSL_CTRUSTMANAGERFACTORYHELPER_H__
