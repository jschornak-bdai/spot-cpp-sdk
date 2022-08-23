/**
 * Copyright (c) 2022 Boston Dynamics, Inc.  All rights reserved.
 *
 * Downloading, reproducing, distributing or otherwise using the SDK Software
 * is subject to the terms and conditions of the Boston Dynamics Software
 * Development Kit License (20191101-BDSDK-SL).
 */


#include "bosdyn/client/payload_registration/payload_registration_error_codes.h"
#include "bosdyn/client/error_codes/proto_enum_to_stderror_macro_source.h"

DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(RegisterPayloadResponse_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(UpdatePayloadVersionResponse_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(GetPayloadAuthTokenResponse_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(UpdatePayloadAttachedResponse_Status, valcode == 1)