/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef THIRD_PARTY_LYRA_CODEC_PACKET_LOSS_MODEL_INTERFACE_H_
#define THIRD_PARTY_LYRA_CODEC_PACKET_LOSS_MODEL_INTERFACE_H_

namespace chromemedia {
namespace codec {

// An interface to simulate packet loss.
class PacketLossModelInterface {
 public:
  virtual bool IsPacketReceived() = 0;

  virtual ~PacketLossModelInterface() {}
};

}  // namespace codec
}  // namespace chromemedia

#endif  // THIRD_PARTY_LYRA_CODEC_PACKET_LOSS_MODEL_INTERFACE_H_
