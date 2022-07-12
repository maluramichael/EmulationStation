#pragma once
#ifndef ES_CORE_COMPONENTS_VIDEO_FFMPEG_COMPONENT_H
#define ES_CORE_COMPONENTS_VIDEO_FFMPEG_COMPONENT_H

#include "VideoComponent.h"


class VideoFfmpegComponent : public VideoComponent
{
public:
	explicit VideoFfmpegComponent(Window *window);
	~VideoFfmpegComponent() override;

	void render(const Transform4x4f& parentTrans) override;

private:

};

#endif // ES_CORE_COMPONENTS_VIDEO_FFMPEG_COMPONENT_H
