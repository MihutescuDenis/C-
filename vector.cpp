
#include <iostream>
#include <vector>

using namespace std;

int main() {
        
//     declar doi vectori vector1 si vector 2
    
    vector <int> vector1;
    vector <int> vector2;
    
//    adaug 10 si 20 dinamic prin functia push_back

    vector1.push_back(10);
    vector1.push_back(20);
    
//    afisez continutinutul vectorului  prin metoda .at si dimensiunea prin .size
    
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector1 contine" << vector1.size() << " elementele" << endl;

//   adaug 100 si 200 dinamic prin functia push_back

    vector2.push_back(100);
    vector2.push_back(200);
    
//   afisez continutinutul vectorului  prin metoda .at si dimensiunea prin .size

    cout << "\nvector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector2 contine " << vector2.size() << " elementele" << endl;

//   declar un vector de vectori de intregi

    vector <vector<int>> vector_2d;
    
//    Adaug vector 1 si vector 2 in push_back

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
//    Afisez vector_2d prin metoda .at

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

//   schimb ce se afla in pozitia 0 a vector1 cu 1000, inainte fiin 100

    vector1.at(0) = 1000;
    
//   Afisez elem. din vector_2d cu metoda .at

    cout << "\nvector_2d:" << endl;
    cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

    cout << endl;
    return 0;
}

