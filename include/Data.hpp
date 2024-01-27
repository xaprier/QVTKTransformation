#ifndef DATA_HPP
#define DATA_HPP

#include <vtkPolyData.h>
#include <vtkSmartPointer.h>

/**
 * @todo: actor will be added
 *
 */

class Data {
  public:
    Data(vtkSmartPointer<vtkPolyData> data);
    void Modified();
    [[nodiscard]] bool isModified() const { return this->_modified; };
    vtkSmartPointer<vtkPolyData> getData() { return this->_data; };  // must non-const

  protected:
  private:
    bool _modified;
    vtkSmartPointer<vtkPolyData> _data;
};

#endif  // DATA_HPP