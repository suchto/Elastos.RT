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

#include "Validator.h"
#include "utility/logging/Slogger.h"

namespace Elastosx {
namespace Xml {
namespace Validation {

CAR_INTERFACE_IMPL(Validator, Object, IValidator)

ECode Validator::Validate(
    /* [in] */ ISource* source)
{
    return Validate(source, NULL);
}

ECode Validator::GetFeature(
    /* [in] */ const String& name,
    /* [out] */ Boolean* feature)
{
    if (name == NULL) {
        SLOGGERD("Validator", "name == null")
        return E_NULL_POINTER_EXCEPTION;
    }
    return E_SAX_NOT_RECOGNIZED_EXCEPTION;
}

ECode Validator::SetFeature(
    /* [in] */ const String& name,
    /* [in] */ Boolean value)
{
    if (name == NULL) {
        SLOGGERD("Validator", "name == null")
        return E_NULL_POINTER_EXCEPTION;
    }
    return E_SAX_NOT_RECOGNIZED_EXCEPTION;
}

ECode Validator::SetProperty(
    /* [in] */ const String& name,
    /* [out] */ IInterface** object)
{
    if (name == NULL) {
        SLOGGERD("Validator", "name == null")
        return E_NULL_POINTER_EXCEPTION;
    }
    return E_SAX_NOT_RECOGNIZED_EXCEPTION;
}

ECode Validator::GetProperty(
    /* [in] */ const String& name,
    /* [out] */ IInterface** property)
{
    if (name == NULL) {
        SLOGGERD("Validator", "name == null")
        return E_NULL_POINTER_EXCEPTION;
    }
    return E_SAX_NOT_RECOGNIZED_EXCEPTION;
}

Validator::Validator()
{}

} // namespace Validation
} // namespace Xml
} // namespace Elastosx