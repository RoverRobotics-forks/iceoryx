// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "iceoryx_posh/internal/popo/base_port.hpp"

namespace iox
{
namespace popo
{
inline const typename BasePort::MemberType_t* BasePort::getMembers() const noexcept
{
    return m_basePortDataPtr;
}

inline BasePort::MemberType_t* BasePort::getMembers() noexcept
{
    return m_basePortDataPtr;
}

} // namespace popo
} // namespace iox
