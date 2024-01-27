#include "SceneWindowHandler.hpp"

#include <vtkRenderWindow.h>
#include <vtkRendererCollection.h>

SceneWindowHandler::SceneWindowHandler(vtkRenderWindow *window) : _window(window) {}

void SceneWindowHandler::Modified() {
    this->_modified = true;
}

void SceneWindowHandler::SetBackground(double r, double g, double b) {
    if (!this->_window) return;
    vtkRenderer *renderer = this->_window->GetRenderers()->GetFirstRenderer();
    if (!renderer) return;
    renderer->SetBackground(r, g, b);
    this->Modified();
}

void SceneWindowHandler::SetWindow(vtkRenderWindow *window) {
    if (window) {
        _window = window;
        this->Modified();
    }
}

void SceneWindowHandler::Render() {
    if (_modified) _window->Render();
}