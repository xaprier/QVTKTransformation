#include "Data.hpp"

#include <vtkPolyData.h>
#include <vtkSmartPointer.h>

Data::Data(vtkSmartPointer<vtkPolyData> data) : _data(std::move(data)), _modified(false) {}

void Data::Modified() {
    _data->Modified();
    this->_modified = true;
}