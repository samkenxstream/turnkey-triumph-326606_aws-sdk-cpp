﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetInstanceMatchCriteria.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FleetInstanceMatchCriteriaMapper
      {

        static const int open_HASH = HashingUtils::HashString("open");


        FleetInstanceMatchCriteria GetFleetInstanceMatchCriteriaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == open_HASH)
          {
            return FleetInstanceMatchCriteria::open;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetInstanceMatchCriteria>(hashCode);
          }

          return FleetInstanceMatchCriteria::NOT_SET;
        }

        Aws::String GetNameForFleetInstanceMatchCriteria(FleetInstanceMatchCriteria enumValue)
        {
          switch(enumValue)
          {
          case FleetInstanceMatchCriteria::open:
            return "open";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetInstanceMatchCriteriaMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
