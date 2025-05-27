#ifndef IBU_H
#define IBU_H

class ibu
{
    public:
        string nama;
        vector<nama*> daftar_anak;

        ibu(string nama): nama(pNama)
        {
            cout << "Ibu \"" << nama << "\" ada\n";
        }

        ~ibu()
        {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        }

        void tambahAnak(anak*);
        void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak){
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak(){
    cout << "Daftar Anak dar Ibu \"" << this->nama << "\":\n";
    //for (auto& a : daftar_anak) {
    //  cout << a-->nama << "\n";
    //}
    for (int i = 0; i < daftar_anak.size(); i++)
    {
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}

#endif // IBU_H