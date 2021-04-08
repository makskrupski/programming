#include <iostream>

using namespace std;

int main()
{
    int M;
    int N;
    int i, j;
    int** matrix;
    cin >> M;
    cin >> N;

    matrix = new int* [M];
    for (i = 0; i < M; i++)
        matrix[i] = new int[N];

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            cout << "Inter element " << "[" << i << "][" << j << "]  ";
            cin >> matrix[i][j];
        }


    cout << endl;
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            cout << matrix[i][j];
        }
    cout << endl;

    int* max = matrix[0];
    int* min = matrix[0];
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (matrix[i] > max)
            {
                max = matrix[i];

            }
            if (matrix[i] < min)
            {
                min = matrix[i];

            }
        }
    }

    cout << max << endl;
    cout << min << endl;


    int* max2 = matrix[0];
    int* min2 = matrix[0];
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (matrix[j] > max)
            {
                max = matrix[j];

            }
            if (matrix[j] < min)
            {
                min = matrix[j];

            }
        }
    }

    cout << max2 << endl;
    cout << min2 << endl;

}