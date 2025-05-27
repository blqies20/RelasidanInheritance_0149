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
        void cetakAanak();
};
