#ifndef SCENE_HPP
#define SCENE_HPP

#include <vtkPolyData.h>
#include <vtkRenderWindow.h>
#include <vtkSmartPointer.h>

#include "Data.hpp"
#include "SceneDataHandler.hpp"
#include "SceneWindowHandler.hpp"

class Scene : public SceneDataHandler, public SceneWindowHandler {
  public:
    Scene(vtkRenderWindow *window);
    ~Scene();
};

#endif  // SCENE_HPP