#ifndef ROAD1SCENE_H
#define ROAD1SCENE_H

#include <vector>
#include <memory>
#include <string>
#include "scenes/mapscene.h"

class Road1Scene : public MapScene
{
public:
    Road1Scene(SDL_Renderer* renderer);

    virtual void init() override;
    virtual void draw(Fps const* fps, RenderSizes rs) override;

    virtual std::string name() override;

    virtual std::unique_ptr<Scene> nextScene() override;
};

#endif // ROAD1SCENE_H
