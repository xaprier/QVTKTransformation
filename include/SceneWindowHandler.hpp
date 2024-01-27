#ifndef SCENE_WINDOW_HANDDLER_HPP
#define SCENE_WINDOW_HANDDLER_HPP

#include <vtkRenderWindow.h>

class SceneWindowHandler {
  public:
    SceneWindowHandler(vtkRenderWindow *window);
    void Modified();
    void SetBackground(double r, double g, double b);
    void SetWindow(vtkRenderWindow *window);
    void Render();

  protected:
    vtkRenderWindow *_window{};

  private:
    bool _modified{};
};

#endif  // SCENE_WINDOW_HANDDLER_HPP