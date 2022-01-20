#include "DeepLearningTrainingLib/matrix.h"
#include <memory>
#include <iostream>

int main()
{
    int row = 3;
    int col = 3;

	std::vector<std::vector<float> > A(row, std::vector<float>(col, 0));

	Matrix m(A);
	m.Print();
    std::cout << std::endl;
    Matrix n(A);
	n.Print();

    //TODO: Testes. Arrange / Act / Assert
}