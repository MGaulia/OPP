#include <bits/stdc++.h>

using namespace std;

struct studentas
{
    string vardas;
    string pavarde;
    vector<int> nd;
    int egz;
    float rezultatas;
};

double vidurkis(vector<int> nd)
{
    int suma = 0;
    for(int i: nd)
    {
        suma+=i;
    }
    return suma/nd.size();
}

vector<studentas> generavimas_vector(int kiek)
{
    vector<studentas> studentai;
    for(int i = 0 ; i < kiek; i++)
    {
        studentas temp;
        temp.vardas = "Vardas" + to_string(i+1);
        temp.pavarde = "Pavarde" + to_string(i+1);
        int ND1 = rand()%10 + 1;
        int ND2 = rand()%10 + 1;
        int ND3 = rand()%10 + 1;
        int ND4 = rand()%10 + 1;
        int ND5 = rand()%10 + 1;

        temp.nd.push_back(ND1);
        temp.nd.push_back(ND2);
        temp.nd.push_back(ND3);
        temp.nd.push_back(ND4);
        temp.nd.push_back(ND5);

        temp.egz = rand()%10 + 1;


        temp.rezultatas = 0.4*vidurkis(temp.nd) + 0.6*temp.egz;
        studentai.push_back(temp);
    }
    return studentai;
}

void vector_dalijimas_mano_strategija(vector<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    vector<studentas> protingi;
    for(int i = 0 ; i < dydis; i++)
    {
        studentas stud = studentai.back();
        studentai.pop_back();
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }
    }

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" VECTOR dalijimas MANO strategija: "<<laikas_sekundemis<<" sec"<<endl;
}
void list_dalijimas_mano_strategija(list<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    vector<studentas> protingi;
    for(int i = 0 ; i < dydis; i++)
    {
        studentas stud = studentai.back();
        studentai.pop_back();
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }
    }

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" LIST dalijimas MANO strategija: "<<laikas_sekundemis<<" sec"<<endl;
}

void vector_dalijimas_1_strategija(vector<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    vector<studentas> protingi;
    for(int i = 0 ; i < dydis; i++)
    {
        studentas stud = studentai[i];
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }


    }

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" VECTOR dalijimas 1-ja strategija: "<<laikas_sekundemis<<" sec"<<endl;
}

void list_dalijimas_1_strategija(list<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    vector<studentas> protingi;
    for(studentas stud: studentai)
    {
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }
        else
        {
            protingi.push_back(stud);
        }
    }

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" LIST dalijimas 1-ja strategija: "<<laikas_sekundemis<<" sec"<<endl;
}

void vector_dalijimas_2_strategija(vector<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    for(studentas stud: studentai)
    {
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }

    }
    studentai.erase(std::remove_if(studentai.begin(), studentai.end(), [](studentas stud)
    {
        return stud.egz < 5;
    }), studentai.end());

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" VECTOR dalijimas 2-ja strategija: "<<laikas_sekundemis<<" sec"<<endl;
}

void list_dalijimas_2_strategija(list<studentas> studentai)
{
    clock_t begin = clock();

    int dydis = studentai.size();
    vector<studentas> kvaili;
    for(studentas stud: studentai)
    {
        if(stud.egz < 5)
        {
            kvaili.push_back(stud);
        }

    }
    studentai.erase(std::remove_if(studentai.begin(), studentai.end(), [](studentas stud)
    {
        return stud.egz < 5;
    }), studentai.end());

    clock_t end = clock();
    double laikas_sekundemis = double(end - begin) / CLOCKS_PER_SEC;

    cout<<dydis<<" LIST dalijimas 2-ja strategija: "<<laikas_sekundemis<<" sec"<<endl;
}

void testuoti(int kiek)
{
    vector<studentas> studentai_vector =  generavimas_vector(kiek);
    list<studentas> studentai_list;
    copy(studentai_vector.begin(), studentai_vector.end(), back_inserter(studentai_list));

    vector_dalijimas_mano_strategija(studentai_vector);
    list_dalijimas_mano_strategija(studentai_list);

    vector_dalijimas_1_strategija(studentai_vector);
    list_dalijimas_1_strategija(studentai_list);

    vector_dalijimas_2_strategija(studentai_vector);
    list_dalijimas_2_strategija(studentai_list);
    cout<<endl;

}

int main()
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);

    testuoti(1000);
    testuoti(10000);
    testuoti(100000);
    testuoti(1000000);
    testuoti(10000000);

    return 0;
}
