#ifndef TEXTQUESTION_H
#define TEXTQUESTION_H

#include "inputs.h"
#include <vector>
#include <string>
#include <SDL_image.h>

class TextQuestion
{
public:
    TextQuestion(SDL_Renderer* renderer);
    ~TextQuestion();

    void init();
    void update(const Inputs* inputs);
    void draw(const Fps* fps, RenderSizes rs);

    bool isFinished() const;
    void reset();

    void setTexts(const std::vector<std::string>& texts);
    int  selectedIndex() const;

private:
    SDL_Renderer* renderer;
    SDL_Surface*  bgSurface;
    SDL_Texture*  bgTexture;

    bool selected     = false;
    int  currentIndex = 0;

    std::vector<std::string> texts;
};

#endif // TEXTQUESTION_H
