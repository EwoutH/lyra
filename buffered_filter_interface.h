/*
 * Copyright 2022 Google LLC
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

#ifndef LYRA_CODEC_BUFFERED_FILTER_INTERFACE_H_
#define LYRA_CODEC_BUFFERED_FILTER_INTERFACE_H_

#include <cstdint>
#include <functional>
#include <optional>
#include <vector>

namespace chromemedia {
namespace codec {

// Interface for filters which can not output an arbitrary number of samples.
class BufferedFilterInterface {
 public:
  virtual ~BufferedFilterInterface() {}

  virtual std::optional<std::vector<int16_t>> FilterAndBuffer(
      const std::function<std::optional<std::vector<int16_t>>(int)>&
          sample_generator,
      int num_samples) = 0;
};

}  // namespace codec
}  // namespace chromemedia

#endif  // LYRA_CODEC_BUFFERED_FILTER_INTERFACE_H_
