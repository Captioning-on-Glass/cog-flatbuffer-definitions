// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CAPTIONMESSAGE_COG_H_
#define FLATBUFFERS_GENERATED_CAPTIONMESSAGE_COG_H_

#include "flatbuffers/flatbuffers.h"

namespace cog {

struct CaptionMessage;
struct CaptionMessageBuilder;

struct CaptionMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CaptionMessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TEXT = 4,
    VT_SPEAKER_ID = 6,
    VT_FOCUSED_ID = 8,
    VT_MESSAGE_ID = 10,
    VT_CHUNK_ID = 12
  };
  const flatbuffers::String *text() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXT);
  }
  const flatbuffers::String *speaker_id() const {
    return GetPointer<const flatbuffers::String *>(VT_SPEAKER_ID);
  }
  const flatbuffers::String *focused_id() const {
    return GetPointer<const flatbuffers::String *>(VT_FOCUSED_ID);
  }
  int32_t message_id() const {
    return GetField<int32_t>(VT_MESSAGE_ID, 0);
  }
  int32_t chunk_id() const {
    return GetField<int32_t>(VT_CHUNK_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.VerifyString(text()) &&
           VerifyOffset(verifier, VT_SPEAKER_ID) &&
           verifier.VerifyString(speaker_id()) &&
           VerifyOffset(verifier, VT_FOCUSED_ID) &&
           verifier.VerifyString(focused_id()) &&
           VerifyField<int32_t>(verifier, VT_MESSAGE_ID, 4) &&
           VerifyField<int32_t>(verifier, VT_CHUNK_ID, 4) &&
           verifier.EndTable();
  }
};

struct CaptionMessageBuilder {
  typedef CaptionMessage Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_text(flatbuffers::Offset<flatbuffers::String> text) {
    fbb_.AddOffset(CaptionMessage::VT_TEXT, text);
  }
  void add_speaker_id(flatbuffers::Offset<flatbuffers::String> speaker_id) {
    fbb_.AddOffset(CaptionMessage::VT_SPEAKER_ID, speaker_id);
  }
  void add_focused_id(flatbuffers::Offset<flatbuffers::String> focused_id) {
    fbb_.AddOffset(CaptionMessage::VT_FOCUSED_ID, focused_id);
  }
  void add_message_id(int32_t message_id) {
    fbb_.AddElement<int32_t>(CaptionMessage::VT_MESSAGE_ID, message_id, 0);
  }
  void add_chunk_id(int32_t chunk_id) {
    fbb_.AddElement<int32_t>(CaptionMessage::VT_CHUNK_ID, chunk_id, 0);
  }
  explicit CaptionMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<CaptionMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CaptionMessage>(end);
    return o;
  }
};

inline flatbuffers::Offset<CaptionMessage> CreateCaptionMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> text = 0,
    flatbuffers::Offset<flatbuffers::String> speaker_id = 0,
    flatbuffers::Offset<flatbuffers::String> focused_id = 0,
    int32_t message_id = 0,
    int32_t chunk_id = 0) {
  CaptionMessageBuilder builder_(_fbb);
  builder_.add_chunk_id(chunk_id);
  builder_.add_message_id(message_id);
  builder_.add_focused_id(focused_id);
  builder_.add_speaker_id(speaker_id);
  builder_.add_text(text);
  return builder_.Finish();
}

inline flatbuffers::Offset<CaptionMessage> CreateCaptionMessageDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *text = nullptr,
    const char *speaker_id = nullptr,
    const char *focused_id = nullptr,
    int32_t message_id = 0,
    int32_t chunk_id = 0) {
  auto text__ = text ? _fbb.CreateString(text) : 0;
  auto speaker_id__ = speaker_id ? _fbb.CreateString(speaker_id) : 0;
  auto focused_id__ = focused_id ? _fbb.CreateString(focused_id) : 0;
  return cog::CreateCaptionMessage(
      _fbb,
      text__,
      speaker_id__,
      focused_id__,
      message_id,
      chunk_id);
}

inline const cog::CaptionMessage *GetCaptionMessage(const void *buf) {
  return flatbuffers::GetRoot<cog::CaptionMessage>(buf);
}

inline const cog::CaptionMessage *GetSizePrefixedCaptionMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<cog::CaptionMessage>(buf);
}

inline bool VerifyCaptionMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<cog::CaptionMessage>(nullptr);
}

inline bool VerifySizePrefixedCaptionMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<cog::CaptionMessage>(nullptr);
}

inline void FinishCaptionMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<cog::CaptionMessage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedCaptionMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<cog::CaptionMessage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace cog

#endif  // FLATBUFFERS_GENERATED_CAPTIONMESSAGE_COG_H_