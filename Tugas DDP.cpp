//TUGAS 1----------------------------------------------------------------------------------------------------
#include <iostream>  
#include <string>  

using namespace std;  

char getGrade(int score) {  
    return (score >= 70) ? 'L' : 'G';  
}  

int main() {  
    string nim[] = {"12345NINING", "12354NENENG"};  
    string name[] = {"NINING", "NENENG"};  
    int score[] = {68, 65};  
    int numStudents = sizeof(nim) / sizeof(nim[0]);  

    for (int i = 0; i < numStudents; i++) {  
        cout << "Data Ke - " << i + 1 << endl;  
        cout << "NIM       - " << nim[i] << endl;  
        cout << "Nama      - " << name[i] << endl;  
        cout << "Nilai Akhir - " << score[i] << endl;  
        cout << "Keterangan yang didapat - " << getGrade(score[i]) << endl << endl;  
    }  

    return 0;  
}
//FLOWCART 1---------------------------------------------------------------------------------------------------------
graph TD  
    A[Start] --> B{i = 0; i < numStudents};  
    B -- Yes --> C[Print "Data Ke - " i+1];  
    C --> D[Print "NIM - " nim[i]];  
    D --> E[Print "Nama - " name[i]];  
    E --> F[Print "Nilai Akhir - " score[i]];  
    F --> G[grade = getGrade(score[i])];  
    G --> H[Print "Keterangan - " grade];  
    H --> I{i++};  
    I -- Yes --> B;  
    I -- No --> J[End];
//FLOWCART 2--------------------------------------------------------------------------------------------------------
graph TD  
    A[Start] --> B{i = 0};  
    B --> C{i < 2?};  
    C -- Yes --> D[Input NIM[i]];  
    D --> E[Input Name[i]];  
    E --> F[Input NilaiAkhir[i]];  
    F --> G{i++};  
    G --> C;  
    C -- No --> H{i = 0};  
    H --> I{i < 2?};  
    I -- Yes --> J[Print "Data Ke - " i+1];  
    J --> K[Print "NIM - " nim[i]];  
    K --> L[Print "Nama - " name[i]];  
    L --> M[Print "Nilai Akhir - " nilaiAkhir[i]];  
    M --> N{i++};  
    N --> I;  
    I -- No --> O[End];
//TUGAS 2------------------------------------------------------------------------------------------------
#include <iostream>  
#include <string>  

using namespace std;  

int main() {  
    string nim[2];  
    string name[2];  
    int nilaiAkhir[2];  

    for (int i = 0; i < 2; i++) {  
        cout << "masukan NIM = ";  
        cin >> nim[i];  
        cin.ignore(); // Consume newline left by cin  
        cout << "masukan Nama = ";  
        getline(cin, name[i]); // Use getline to read the whole line, including spaces  
        cout << "masukan Nilai Akhir = ";  
        cin >> nilaiAkhir[i];  
    }  

    for (int i = 0; i < 2; i++) {  
        cout << "Data Ke - " << i + 1 << endl;  
        cout << "NIM       - " << nim[i] << name[i] << endl; //Concatenate NIM and Name  
        cout << "Nama      - " << name[i] << endl;  
        cout << "Nilai Akhir - " << nilaiAkhir[i] << endl << endl;  
    }  

    return 0;  
}
