#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {1, 2, 3};

    //----WRITE YOUR CODE BELOW THIS LINE----
    int result {0};
    if (vec.size() > 1)
    {
        for (int i {0}; i < vec.size(); i++)
        {
            for (int j {i+1}; j < vec.size(); j++)
            {
                cout << "result = " << result << " + ";
                result += vec.at(i) * vec.at(j);
                cout << vec.at(i) << " * " << vec.at(j) << " = " << result << "\n";
            }
        }
    }
}