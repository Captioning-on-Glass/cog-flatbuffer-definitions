// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ORIENTATIONMESSAGE_COG_H_
#define FLATBUFFERS_GENERATED_ORIENTATIONMESSAGE_COG_H_

#include "flatbuffers/flatbuffers.h"

namespace cog {

struct OrientationMessage;
struct OrientationMessageBuilder;

struct OrientationMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef OrientationMessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_AZIMUTH = 4,
    VT_PITCH = 6,
    VT_ROLL = 8
  };
  float azimuth() const {
    return GetField<float>(VT_AZIMUTH, 0.0f);
  }
  float pitch() const {
    return GetField<float>(VT_PITCH, 0.0f);
  }
  float roll() const {
    return GetField<float>(VT_ROLL, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_AZIMUTH, 4) &&
           VerifyField<float>(verifier, VT_PITCH, 4) &&
           VerifyField<float>(verifier, VT_ROLL, 4) &&
           verifier.EndTable();
  }
};

struct OrientationMessageBuilder {
  typedef OrientationMessage Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_azimuth(float azimuth) {
    fbb_.AddElement<float>(OrientationMessage::VT_AZIMUTH, azimuth, 0.0f);
  }
  void add_pitch(float pitch) {
    fbb_.AddElement<float>(OrientationMessage::VT_PITCH, pitch, 0.0f);
  }
  void add_roll(float roll) {
    fbb_.AddElement<float>(OrientationMessage::VT_ROLL, roll, 0.0f);
  }
  explicit OrientationMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<OrientationMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<OrientationMessage>(end);
    return o;
  }
};

inline flatbuffers::Offset<OrientationMessage> CreateOrientationMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    float azimuth = 0.0f,
    float pitch = 0.0f,
    float roll = 0.0f) {
  OrientationMessageBuilder builder_(_fbb);
  builder_.add_roll(roll);
  builder_.add_pitch(pitch);
  builder_.add_azimuth(azimuth);
  return builder_.Finish();
}

inline const cog::OrientationMessage *GetOrientationMessage(const void *buf) {
  return flatbuffers::GetRoot<cog::OrientationMessage>(buf);
}

inline const cog::OrientationMessage *GetSizePrefixedOrientationMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<cog::OrientationMessage>(buf);
}

inline bool VerifyOrientationMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<cog::OrientationMessage>(nullptr);
}

inline bool VerifySizePrefixedOrientationMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<cog::OrientationMessage>(nullptr);
}

inline void FinishOrientationMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<cog::OrientationMessage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedOrientationMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<cog::OrientationMessage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace cog

#endif  // FLATBUFFERS_GENERATED_ORIENTATIONMESSAGE_COG_H_