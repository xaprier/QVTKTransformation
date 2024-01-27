#ifndef SCENE_DATA_HANDLER_HPP
#define SCENE_DATA_HANDLER_HPP

#include <vtkRenderWindow.h>

#include "Data.hpp"

class SceneDataHandler {
  public:
    SceneDataHandler(vtkRenderWindow *window);
    virtual void AddData(Data *newData);
    virtual void RemoveData();
    virtual void SetCurrentData(std::size_t index);
    virtual Data *GetCurrentData();
    virtual std::size_t GetNumberOfData();

  protected:
    std::vector<Data *> _datas{};
    Data *_currentData{};

  private:
    vtkRenderWindow *_window{};
};

#endif  // SCENE_DATA_HANDLER_HPP