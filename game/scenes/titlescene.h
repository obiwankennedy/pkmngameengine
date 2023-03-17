#ifndef TITLESCENE_H
#define TITLESCENE_H

#include "scene.h"
#include <SDL_image.h>

class TitleScene : public Scene
{
public:
    TitleScene(SDL_Renderer* renderer);
    virtual ~TitleScene();

    virtual void sendInputs(const Inputs* inputs) override;
    virtual void draw(const Fps* fps) override;

    virtual std::unique_ptr<Scene> nextScene() const override;

private:
    SDL_Surface* bgSurface;
    SDL_Texture* bgTexture;
    SDL_Surface* startSurface;
    SDL_Texture* startTexture;

    bool goToNextScene = false;
    bool alternate     = false;
};

#endif // TITLESCENE_H
