#include "SceneDataHandler.hpp"

#include <vtkRenderWindow.h>

#include <cstddef>
#include <string>

SceneDataHandler::SceneDataHandler(vtkRenderWindow* window) : _window(window) {
    std::cout << "a : " << window << std::endl;
}

void SceneDataHandler::AddData(Data* newData) {
    // todo: waiting for actor in Data class.
}

void SceneDataHandler::RemoveData() {
    // todo: waiting for actor in Data class.
}

void SceneDataHandler::SetCurrentData(std::size_t index) {
    if (index > this->_datas.size() || index < 0)
        throw std::string("Invalid index for setting current data: " + std::to_string(index));

    this->_currentData = this->_datas[index];
}

Data* SceneDataHandler::GetCurrentData() {
    return _currentData;
}

std::size_t SceneDataHandler::GetNumberOfData() {
    return _datas.size();
}