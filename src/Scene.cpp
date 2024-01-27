#include "Scene.hpp"

#include <vtkRenderWindow.h>

#include "SceneDataHandler.hpp"
#include "SceneWindowHandler.hpp"

Scene::Scene(vtkRenderWindow *window) : SceneDataHandler(window), SceneWindowHandler(window) {
}

Scene::~Scene() {
}