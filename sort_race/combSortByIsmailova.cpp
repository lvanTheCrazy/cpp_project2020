#include <vector>
#include <string>

using namespace std;

vector <int> combSort_by_Ismailova(std::vector<int> data) // data — название вектора  (передаём по ссылке, чтобы вызов comb(array) менял вектор array)
{
    double factor = 1.2473309; // фактор уменьшения
    int step = data.size() - 1; // шаг сортировки

    //Последняя итерация цикла, когда step==1 эквивалентна одному проходу сортировки пузырьком
    while (step >= 1)
    {
        for (int i = 0; i + step < data.size(); i++)
        {
            if (data.at(i) > data.at(i + step))
            {
                std::swap(data.at(i), data.at(i + step));
            }
        }
        step /= factor;
    }
    return data;
}


  
// большой объём данных не сортирует, об этом говорит "failed" при запуске
// Это значит, что алгоритм работает, но не сортирует до конца
// Причина в том, что наш фактор работает до 1500 элементов, если уменьшить фактор, то он начнёт считать большие массивы
// Причина в том, что при уменьшении фактора мы делаем больше итераций, и время сортировки растёт