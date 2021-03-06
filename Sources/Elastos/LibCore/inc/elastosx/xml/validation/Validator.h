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

#ifndef __ELASTOSX_XML_VALIDATION_VALIDATOR_H__
#define __ELASTOSX_XML_VALIDATION_VALIDATOR_H__

#include "Elastos.CoreLibrary.Extensions.h"
#include "Object.h"

using Elastos::Core::Object;
using Elastosx::Xml::Transform::ISource;

namespace Elastosx {
namespace Xml {
namespace Validation {

class Validator
    : public IValidator
    , public Object
{
public:
    CAR_INTERFACE_DECL()

    CARAPI Validate(
        /* [in] */ ISource* source);

    using IValidator::Validate;

    CARAPI GetFeature(
        /* [in] */ const String& name,
        /* [out] */ Boolean* feature);

    CARAPI SetFeature(
        /* [in] */ const String& name,
        /* [in] */ Boolean value);

    CARAPI SetProperty(
        /* [in] */ const String& name,
        /* [out] */ IInterface** object);

    CARAPI GetProperty(
        /* [in] */ const String& name,
        /* [out] */ IInterface** property);

protected:
    Validator();
};

} // namespace Validation
} // namespace Xml
} // namespace Elastosx
#endif