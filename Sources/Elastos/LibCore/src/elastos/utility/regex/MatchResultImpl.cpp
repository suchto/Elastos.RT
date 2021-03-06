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

#include "MatchResultImpl.h"

namespace Elastos {
namespace Utility {
namespace Regex {

CAR_INTERFACE_IMPL(MatchResultImpl, Object, IMatchResult)

MatchResultImpl::MatchResultImpl(
    /* [in] */ const String& text,
    /* [in] */ const ArrayOf<Int32>& offsets)
    : mText(text)
{
    mOffsets = offsets.Clone();
}

ECode MatchResultImpl::End(
    /* [out] */ Int32* index)
{
    VALIDATE_NOT_NULL(index);
    return End(0, index);
}

ECode MatchResultImpl::End(
    /* [in] */ Int32 group,
    /* [out] */ Int32* index)
{
    VALIDATE_NOT_NULL(index);

    if ((mOffsets->GetLength() / 2 - 1) < group) return E_INDEX_OUT_OF_BOUNDS_EXCEPTION;

    *index = (*mOffsets)[2 * group + 1];
    return NOERROR;
}

ECode MatchResultImpl::Group(
    /* [out] */ String* text)
{
    VALIDATE_NOT_NULL(text);
    Int32 startId, endId;
    Start(&startId);
    End(&endId);
    *text = mText.Substring(startId, endId);
    return NOERROR;
}

ECode MatchResultImpl::Group(
    /* [in] */ Int32 group,
    /* [out] */ String* text)
{
    VALIDATE_NOT_NULL(text);
    Int32 from = (*mOffsets)[group * 2];
    Int32 to = (*mOffsets)[(group * 2) + 1];
    if (from == -1 || to == -1) {
        *text = String(NULL);
    }
    else {
        *text = mText.Substring(from, to);
    }
    return NOERROR;
}

ECode MatchResultImpl::GroupCount(
    /* [out] */ Int32* count)
{
    VALIDATE_NOT_NULL(count);
    *count = (mOffsets->GetLength() / 2) - 1;
    return NOERROR;
}

ECode MatchResultImpl::Start(
    /* [in] */ Int32 group,
    /* [out] */ Int32* index)
{
    VALIDATE_NOT_NULL(index);

    if ((mOffsets->GetLength() / 2 - 1) < group) return E_INDEX_OUT_OF_BOUNDS_EXCEPTION;

    *index = (*mOffsets)[2 * group];
    return NOERROR;
}

ECode MatchResultImpl::Start(
    /* [out] */ Int32* index)
{
    VALIDATE_NOT_NULL(index);
    return Start(0, index);
}

} // namespace Regex
} // namespace Utility
} // namespace Elastos
