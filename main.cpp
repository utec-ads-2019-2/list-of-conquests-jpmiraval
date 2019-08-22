#include <iostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;

int main(){
    string listaPaises;
    map <string, int> mapPaises;
    int numeroLineas;
    string nombre;
    string pais;
    cin >> numeroLineas;
    for(int i = 0; i<numeroLineas; i++){
        cin >> pais;
        getline(cin, nombre);
        mapPaises[pais]++;
    }

    for(map<string, int>::const_iterator it = mapPaises.begin();
    it != mapPaises.end(); ++it)
    {
        cout<<it->first<< " " << it->second<< "\n";
    }
    return 0;
}
