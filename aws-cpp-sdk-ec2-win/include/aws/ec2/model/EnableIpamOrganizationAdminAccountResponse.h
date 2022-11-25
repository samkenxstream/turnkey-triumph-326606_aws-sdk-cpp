﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API EnableIpamOrganizationAdminAccountResponse
  {
  public:
    EnableIpamOrganizationAdminAccountResponse();
    EnableIpamOrganizationAdminAccountResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    EnableIpamOrganizationAdminAccountResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The result of enabling the IPAM account.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>The result of enabling the IPAM account.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>The result of enabling the IPAM account.</p>
     */
    inline EnableIpamOrganizationAdminAccountResponse& WithSuccess(bool value) { SetSuccess(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableIpamOrganizationAdminAccountResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableIpamOrganizationAdminAccountResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_success;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
