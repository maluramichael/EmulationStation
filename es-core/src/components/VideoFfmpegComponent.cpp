#include "components/VideoFfmpegComponent.h"
#include "Log.h"

#include "renderers/Renderer.h"
#include "resources/TextureResource.h"
#include "utils/StringUtil.h"
#include "PowerSaver.h"
#include "Settings.h"
#include <SDL_mutex.h>

#ifdef WIN32
#include <codecvt>
#endif

VideoFfmpegComponent::VideoFfmpegComponent(Window *window) : VideoComponent(window) {
    LOG(LogDebug) << "VideoFfmpegComponent::constructor";
}

VideoFfmpegComponent::~VideoFfmpegComponent() = default;

void VideoFfmpegComponent::render(const Transform4x4f &parentTrans) {
    VideoComponent::render(parentTrans);
}
