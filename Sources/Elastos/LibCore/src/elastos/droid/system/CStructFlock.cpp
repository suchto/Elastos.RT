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

#include "CStructFlock.h"

namespace Elastos {
namespace Droid {
namespace System {

CAR_INTERFACE_IMPL(CStructFlock, Object, IStructFlock)

CAR_OBJECT_IMPL(CStructFlock)

ECode CStructFlock::constructor()
{
    return NOERROR;
}

/** The operation type, one of F_RDLCK, F_WRLCK, or F_UNLCK. */
ECode CStructFlock::GetType(
    /* [out] */ Int16* type)
{
    *type = mType;
    return NOERROR;
}

ECode CStructFlock::SetType(
    /* [in] */ Int16 type)
{
    mType = type;
    return NOERROR;
}

/** How to interpret l_start, one of SEEK_CUR, SEEK_END, SEEK_SET. */
ECode CStructFlock::GetWhence(
    /* [out] */ Int16* whence)
{
    VALIDATE_NOT_NULL(whence)
    *whence = mWhence;
    return NOERROR;
}

ECode CStructFlock::SetWhence(
    /* [in] */ Int16 whence)
{
    mWhence = whence;
    return NOERROR;
}

/** Start offset. */
ECode CStructFlock::GetStart(
    /* [out] */ Int64* start)
{
    VALIDATE_NOT_NULL(start)
    *start = mStart;
    return NOERROR;
}

ECode CStructFlock::SetStart(
    /* [in] */ Int64 start)
{
    mStart = start;
    return NOERROR;
}

/** Byte count to operate on. */
ECode CStructFlock::GetLen(
    /* [out] */ Int64* len)
{
    VALIDATE_NOT_NULL(len)
    *len = mLen;
    return NOERROR;
}

ECode CStructFlock::SetLen(
    /* [in] */ Int64 len)
{
    mLen = len;
    return NOERROR;
}

/** Process blocking our lock (filled in by F_GETLK, otherwise unused). */
ECode CStructFlock::GetPid(
    /* [out] */ Int32* pid)
{
    VALIDATE_NOT_NULL(pid)
    *pid = mPid;
    return NOERROR;
}

ECode CStructFlock::SetPid(
    /* [in] */ Int32 pid)
{
    mPid = pid;
    return NOERROR;
}

}// namespace System
}// namespace Droid
}// namespace Elastos